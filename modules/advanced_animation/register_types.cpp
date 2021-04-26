/* register_types.cpp */

#include "register_types.h"

#include "core/class_db.h"
#include "animation.h"

void register_advanced_animation_types() {
    ClassDB::register_class<Animation>();
}

void unregister_advanced_animation_types() {
   // Nothing to do here in this example.
}