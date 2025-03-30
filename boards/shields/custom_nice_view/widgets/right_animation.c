#include <stdlib.h>
#include <time.h>
#include <zephyr/kernel.h>
#include <zephyr/random/random.h>
#include "right_animation.h"

srand(time(NULL));

////////////////////////////////////////// DECLARE ASSETS //////////////////////////////////////////
// One Punch Man (Anim)
LV_IMG_DECLARE(onepunch_01);
LV_IMG_DECLARE(onepunch_02);
LV_IMG_DECLARE(onepunch_03);
LV_IMG_DECLARE(onepunch_04);
LV_IMG_DECLARE(onepunch_05);
const lv_img_dsc_t *onepunch_anim_imgs[] = {
    &onepunch_01, &onepunch_02, &onepunch_03, &onepunch_04, &onepunch_05,
};

// Crystal (Anim)
LV_IMG_DECLARE(crystal_01);
LV_IMG_DECLARE(crystal_02);
LV_IMG_DECLARE(crystal_03);
LV_IMG_DECLARE(crystal_04);
LV_IMG_DECLARE(crystal_05);
LV_IMG_DECLARE(crystal_06);
LV_IMG_DECLARE(crystal_07);
LV_IMG_DECLARE(crystal_08);
LV_IMG_DECLARE(crystal_09);
LV_IMG_DECLARE(crystal_10);
LV_IMG_DECLARE(crystal_11);
LV_IMG_DECLARE(crystal_12);
LV_IMG_DECLARE(crystal_13);
LV_IMG_DECLARE(crystal_14);
LV_IMG_DECLARE(crystal_15);
LV_IMG_DECLARE(crystal_16);
const lv_img_dsc_t *crystal_anim_imgs[] = {
    &crystal_01, &crystal_02, &crystal_03, &crystal_04, &crystal_05, &crystal_06,
    &crystal_07, &crystal_08, &crystal_09, &crystal_10, &crystal_11, &crystal_12,
    &crystal_13, &crystal_14, &crystal_15, &crystal_16,
};

// Bender (Image)
LV_IMG_DECLARE(bender_01);

// One Piece Logo (Image)
LV_IMG_DECLARE(onepiece_01);
////////////////////////////////////////// DECLARE ASSETS //////////////////////////////////////////

const int right_anim_srcs_count = 2;
const lv_img_dsc_t *all_right_anim_imgs[] = {
    &crystal_01, &crystal_02, &crystal_03, &crystal_04, &crystal_05, &crystal_06,
    &crystal_07, &crystal_08, &crystal_09, &crystal_10, &crystal_11, &crystal_12,
    &crystal_13, &crystal_14, &crystal_15, &crystal_16,

    &onepunch_01, &onepunch_02, &onepunch_03, &onepunch_04, &onepunch_05,
};
const int right_anim_start_indices[] = { 0, 16 };
const int right_anim_img_counts[] = { 16, 5 };

const lv_img_dsc_t *all_right_imgs[] = {
    &crystal_01, &onepunch_01, &bender_01, &onepiece_01,
};

void draw_right_animation(lv_obj_t *canvas) {
    #if IS_ENABLED(CONFIG_NICE_VIEW_RIGHT_ANIMATION)
    int random_index = randomNumber(0, right_anim_srcs_count);
    lv_obj_t *art = lv_animimg_create(canvas);
    lv_obj_center(art);
    
    lv_animimg_set_src(art, (const void **)all_right_anim_imgs[right_anim_start_indices[random_index]], right_anim_img_counts[random_index]);
    
    lv_animimg_set_duration(art, CONFIG_NICE_VIEW_RIGHT_ANIMATION_MS);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);
    #else
    lv_obj_t *art = lv_img_create(canvas);

    int random_index = randomNumber(0, sizeof(all_right_imgs));

    lv_img_set_src(art, all_right_imgs[random_index]);
    #endif
    
    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 36, 0);
}