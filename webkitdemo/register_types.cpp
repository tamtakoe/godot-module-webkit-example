/*************************************************************************/
/*  register_types.cpp                                                   */
/*************************************************************************/

#include "register_types.h"

#include "core/config/engine.h"
#include "core/object/class_db.h"


#include "webkitdemo.h"

void initialize_webkitdemo_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
	GDREGISTER_CLASS(WebKitDemo);
}

void uninitialize_webkitdemo_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
}
