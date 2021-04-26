#include "animation.h"

#include "scene/scene_string_names.h"

#include "core/math/geometry.h"

int Animation::track_get_id(int p_track) const {

	ERR_FAIL_INDEX_V(p_track, tracks.size(), -1);
	Track *t = tracks[p_track];
	return t.id;
}

void Animation::_bind_methods() {
	ClassDB::bind_method(D_METHOD("track_get_id", "track_idx"), &Animation::track_get_id);
	ClassDB::bind_method(D_METHOD("track_set_id", "track_idx", "id"), &Animation::track_set_id);
	
}