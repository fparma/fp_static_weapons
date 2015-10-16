class fp_static_weap_mk19: GMG_20mm {
  autoreload = 1;
  canlock = 0;
  cursorsize = 1;
  dispersion = 0.006;
  displayname = ;
  magazinereloadtime = 6;
  class manual: GMG_F {
    sounds[] = {StandardSound};
    class StandardSound {
      weaponSoundEffect = "DefaultRifle";
      begin1[] = {"FP_Static_Weapons\mk19\sounds\mk19_fire_3p",3.16228, 1, 1200};
      soundBegin[] = {"begin1",1};
    };
    displayname = "MK19 Weapon";
    soundbegin[] = {"begin1", 1};
    soundburst = 0;
    soundcontinuous = 0;
    weaponsoundeffect = "DefaultRifle";
  };
  reloadtime = 0.4;
};