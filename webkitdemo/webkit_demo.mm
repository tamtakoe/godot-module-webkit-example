#include "webkitdemo.h"

#Problem with definition conflict https://github.com/godotengine/godot/issues/86533
#define FontVariation _FontVariation
#include <WebKit/WebKit.h>
#undef FontVariation


class WebKitDemoImplementation {
public:
	WKWebView *view = nullptr;
};

WebKitDemo::WebKitDemo() {
    data = memnew(WebKitDemoImplementation());
}


void WebKitDemo::set_url(const String &p_url) {
	home_url = p_url;

	if (data->view != nullptr) {
		[data->view loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:[NSString stringWithUTF8String:home_url.utf8().get_data()]]]];
	}
}

String WebKitDemo::get_url() const {
	if (data->view != nullptr) {
		NSString *ns = [[data->view URL] absoluteString];
		return String::utf8([ns UTF8String]);
	}
	return home_url;
}

