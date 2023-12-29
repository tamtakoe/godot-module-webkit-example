#ifndef WEBKITDEMO_H
#define WEBKITDEMO_H

#include "scene/gui/control.h"

class WebKitDemoImplementation;
class WebKitDemo : public Control {
	GDCLASS(WebKitDemo, Control);

	WebKitDemoImplementation *data;

	String home_url;

protected:
	static void _bind_methods();

public:
	WebKitDemo();

	void set_url(const String &p_url);
	String get_url() const;
};

#endif // WEBKITDEMO_H
