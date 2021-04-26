#ifndef ANIMATION_H
#define ANIMATION_H

#include "core/resource.h"

class Animation : public Resource {

	GDCLASS(Animation, Resource);
	RES_BASE_EXTENSION("anim");
	
	struct Track {
		int id;
	};
	
	public:
		int track_get_id(int p_track) const;
		void track_set_id(int p_track, int p_id);
};
#endif
