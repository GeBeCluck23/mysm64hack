#include "src/game/envfx_snow.h"

const GeoLayout rr_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(5, geo_switch_area),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, rr_dl_room01_geo),
			GEO_BRANCH(1, rr_dl_room02_geo),
			GEO_BRANCH(1, rr_dl_room03_geo),
			GEO_BRANCH(1, rr_dl_room04_geo),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -11751, 7647, 11666, 0, -33, 0, rr_dl_clouds_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -9981, 7036, 4717, 21, -31, -29, rr_dl_clouds_001_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 12264, 8117, 5450, -51, 58, -147, rr_dl_clouds_002_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 8506, 8097, 9841, 110, 41, -50, rr_dl_clouds_003_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -13434, 3270, -7944, -28, -44, -69, rr_dl_clouds_004_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -4225, 1952, -7179, 71, -112, -44, rr_dl_clouds_005_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 46, -2359, 9, rr_dl_deathplane_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -7829, -239, 7733, rr_dl_deathplane_001_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7730, 6740, 6002, 7, -22, 2, rr_dl_Ground_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6035, 6222, 6320, -5, 51, 5, rr_dl_Ground_003_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -14238, 2358, -9663, 14, 51, -4, rr_dl_Ground_004_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout rr_dl_room01_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 2354, 4012, -2786, 68, 17, -108, rr_dl_clouds_008_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -9471, 7200, 10017, 0, -52, 0, rr_dl_Ground_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8954, 6724, 6900, 7, 56, 2, rr_dl_Ground_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -11146, 7614, 11981, 0, 45, 0, rr_dl_temple_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -11872, 8895, 10983, 90, 0, 135, rr_dl_vines_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -10973, 8895, 13344, 90, 0, 135, rr_dl_vines_001_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -9501, 8895, 11873, 90, 0, 135, rr_dl_vines_002_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -11129, 8895, 10239, 90, 0, 135, rr_dl_vines_003_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -12550, 8895, 11661, 90, 0, 135, rr_dl_vines_004_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -10226, 8895, 12691, 90, 0, 135, rr_dl_vines_005_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -9435, 8917, 11616, 90, 0, 45, rr_dl_vines_006_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout rr_dl_room02_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -11520, 3566, -4551, rr_dl_big_tree_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -10930, 2729, -6469, 0, -23, 0, rr_dl_blj_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 2354, 4012, -2786, 68, 17, -108, rr_dl_clouds_006_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7247, 1194, -6108, 0, -9, 0, rr_dl_Cube_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8710, 90, -6102, 0, 57, 0, rr_dl_Cube_011_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6513, 3678, 1738, 0, 16, 0, rr_dl_Cube_033_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -5901, 511, 3651, 0, 17, 0, rr_dl_deathplane_002_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -11231, 3512, -4421, 90, 0, -67, rr_dl_fake_wall_tree_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -10033, 1726, -4561, rr_dl_island_base_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -11374, 2686, -4659, 0, 1, 0, rr_dl_island_base_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -11240, 2844, -4481, 0, 4, 0, rr_dl_island_base_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7638, 2046, -5499, 0, 44, 0, rr_dl_island_base_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -11637, 4272, -4050, rr_dl_leaves_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -11283, 4346, -4822, rr_dl_leaves_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -11607, 4698, -4524, rr_dl_leaves_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -12192, 2801, -5008, 0, 151, 0, rr_dl_sign_hitbox_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -8632, 2642, -2423, -3, 25, -2, rr_dl_walkway_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6081, 4169, 1646, 0, 43, 1, rr_dl_water_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -10775, 3007, -4279, 0, -21, 0, rr_dl_waterfall_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout rr_dl_room03_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 7290, 1082, -3254, 0, 32, 0, rr_dl_arrow_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -4252, 6727, 7861, 38, -160, -69, rr_dl_clouds_007_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 6897, 937, -3644, 0, 41, 0, rr_dl_Ground_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3537, 436, -6354, 7, 136, 2, rr_dl_Ground_006_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2245, 191, -8064, 4, 56, 2, rr_dl_Ground_007_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5973, 572, -5924, -5, 131, 5, rr_dl_Ground_008_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1789, -638, -9110, 2, -65, 1, rr_dl_island02_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout rr_dl_room04_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 4563, 3393, 790, 36, 6, -103, rr_dl_clouds_009_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -1007, 3774, 694, 1, -11, -180, rr_dl_clouds_010_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -3858, 6935, 6960, 36, 6, -103, rr_dl_clouds_011_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -2734, 5337, -3306, 60, 122, -79, rr_dl_clouds_012_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 7946, 1009, -2317, 0, 31, 0, rr_dl_rainbow_bridge_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout rr_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_ABOVE_CLOUDS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, rr_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, rr_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, rr_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
