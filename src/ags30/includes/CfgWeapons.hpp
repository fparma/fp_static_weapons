class fp_static_weap_ags30: GMG_20mm {
  autoreload = 1;
  canlock = 0;
  cursorsize = 1;
  dispersion = 0.006;
  displayname = "9G25 (AGS-30)";
  magazinereloadtime = 6;
  magazines[] = {"fp_static_mag_48rnd_ags30"};
  class manual: GMG_F {
    sounds[] = {"StandardSound"};
    class StandardSound {
      weaponSoundEffect = "DefaultRifle";
      begin1[] = {"FP_Static_Weapons\mk19\sounds\mk19_fire_3p",3.16228, 1, 1200};
      soundBegin[] = {"begin1",1};
    };
    displayname = "9G25 (AGS-30)";
    soundbegin[] = {"begin1", 1};
    soundburst = 0;
    soundcontinuous = 0;
    weaponsoundeffect = "DefaultRifle";
  };
  reloadtime = 0.4;
  scope = 1;
};
