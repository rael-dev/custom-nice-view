#include <stdlib.h>
#include <zephyr/kernel.h>
#include <zephyr/random/random.h>
#include "animation.h"

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

// LV_IMG_DECLARE(corro01);
// LV_IMG_DECLARE(corro02);
// LV_IMG_DECLARE(corro03);
// LV_IMG_DECLARE(corro04);
// LV_IMG_DECLARE(corro05);
// LV_IMG_DECLARE(corro06);
// LV_IMG_DECLARE(corro07);
// LV_IMG_DECLARE(corro08);
// LV_IMG_DECLARE(corro09);
// LV_IMG_DECLARE(corro10);
// LV_IMG_DECLARE(corro11);
// LV_IMG_DECLARE(corro12);

const lv_img_dsc_t *crystal_anim_imgs[] = {
    &crystal_01, &crystal_02, &crystal_03, &crystal_04, &crystal_05, &crystal_06,
    &crystal_07, &crystal_08, &crystal_09, &crystal_10, &crystal_11, &crystal_12,
    &crystal_13, &crystal_14, &crystal_15, &crystal_16,
};

// const lv_img_dsc_t *urchin_anim_imgs[] = {
//     &corro01, &corro02, &corro03, &corro04, &corro05, &corro06, &corro07, &corro08,
//     &corro09, &corro10,  &corro11, &corro12,
// };

void draw_animation(lv_obj_t *canvas) {
#if IS_ENABLED(CONFIG_NICE_VIEW_GEM_ANIMATION)
    // bool random = sys_rand32_get() & 1;
    lv_obj_t *art = lv_animimg_create(canvas);
    lv_obj_center(art);

    // if (random) {
    //     lv_animimg_set_src(art, (const void **)crystal_anim_imgs, 16);
    // } else {
    //     lv_animimg_set_src(art, (const void **)urchin_anim_imgs, 12);
    // }
    
    lv_animimg_set_src(art, (const void **)crystal_anim_imgs, 16);
    
    lv_animimg_set_duration(art, CONFIG_NICE_VIEW_GEM_ANIMATION_MS);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);
#else
    lv_obj_t *art = lv_img_create(canvas);

    int length = sizeof(crystal_anim_imgs) / sizeof(crystal_anim_imgs[0]);
    srand(k_uptime_get_32());
    int random_index = rand() % length;

    lv_img_set_src(art, crystal_anim_imgs[random_index]);
#endif

    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 0, 0);
}