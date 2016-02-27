class fp_static_weap_spg9 : RocketPods {
  scope = 2;
  displayName = "6G6 'SPG-9'";
  type = 65536;
  reloadTime = 6;
  magazineReloadTime = 10;
  modelOptics = "";
  magazines[] = {
    "fp_static_mag_pg9v",
    "fp_static_mag_og9v"
  };
  sounds[] = {"StandardSound"};
  class StandardSound {
    weaponSoundEffect = "DefaultRifle";
    begin1[] = {"\FP_Static_Weapons\spg9\sounds\spg9_fire1",db12,1,1100};
    soundBegin[] = {"begin1",1};
  };
  drySound[] = {"",1,1};
  recoil = "launcherBase";
  aiRateOfFire = 10.0;
  aiRateOfFireDistance = 450;
  minRange = 50;
  midRange = 450;
  maxRange = 800;
  cursor = "EmptyCursor";
  dispersion=0.003;
};
