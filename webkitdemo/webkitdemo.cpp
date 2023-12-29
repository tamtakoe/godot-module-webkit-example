#include "webkitdemo.h"

void WebKitDemo::_bind_methods() {
    ClassDB::bind_method(D_METHOD("set_url", "url"), &WebKitDemo::set_url);
	ClassDB::bind_method(D_METHOD("get_url"), &WebKitDemo::get_url);

    ADD_PROPERTY(PropertyInfo(Variant::STRING, "url"), "set_url", "get_url");
}
