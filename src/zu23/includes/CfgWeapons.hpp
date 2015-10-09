class fp_static_weap_zu23: CannonCore {
  scope = 1;
  displayName = "2A14";
  nameSound = "cannon";
  cartridgePos = "cartridge_pos";
  cartridgeVel = "cartridge_dir";
  cursor = "emptyCursor";
  cursorAim = "mg";
  cursorAimOn = "";
  cursorSize = 1;
  canLock = 2;
  class gunParticles {
    class effect1 {
      positionName = "cartridge_pos";
      directionName = "cartridge_dir";
      effectName = "MachineGunCartridge1";
    };
  };
  magazines[] = {
    "fp_static_mag_2000rnd_23mm_AZP85"
  };
  magazineReloadTime = 9;
  modes[] = {
    "manual",
    "close",
    "short",
    "medium",
    "far"
  };
  class manual : CannonCore {
    displayName= "2A14";
    autoFire = 1;
    sounds[] = {"StandardSound"};
    class StandardSound {
      weaponSoundEffect = "DefaultRifle";
      begin1[] = {"\FP_Static_Weapons\zu23\sounds\zpu_fire_3p",db12,1,1100};
      soundBegin[] = {"begin1",1};
    };
    reloadTime = 0.059999999;
    dispersion = 0.00050000002;
    multiplier = 2;
    soundContinuous = 0;
    showToPlayer = 1;
    burst = 1;
    aiRateOfFire = 0.5;
    aiRateOfFireDistance = 50;
    minRange = 1;
    minRangeProbab = 0.0099999998;
    midRange = 2;
    midRangeProbab = 0.0099999998;
    maxRange = 3;
    maxRangeProbab = 0.0099999998;
  };
  class close : manual {
    showToPlayer = 0;
    soundBurst = 0;
    burst = 15;
    aiRateOfFire = 0.5;
    aiRateOfFireDistance = 50;
    minRange = 0;
    minRangeProbab = 0.050000001;
    midRange = 300;
    midRangeProbab = 0.57999998;
    maxRange = 600;
    maxRangeProbab = 0.30000001;
  };
  class short : close {
    burst = 10;
    aiRateOfFire=2;
    aiRateOfFireDistance=300;
    minRange=400;
    minRangeProbab=0.30000001;
    midRange=600;
    midRangeProbab=0.57999998;
    maxRange=900;
    maxRangeProbab=0.30000001;
  };
  class medium: close {
    burst=7;
    aiRateOfFire=3;
    aiRateOfFireDistance=600;
    minRange=700;
    minRangeProbab=0.30000001;
    midRange=900;
    midRangeProbab=0.57999998;
    maxRange=1200;
    maxRangeProbab=0.30000001;
  };
  class far: close {
    burst=4;
    aiRateOfFire=5;
    aiRateOfFireDistance=1000;
    minRange=1000;
    minRangeProbab=0.30000001;
    midRange=1200;
    midRangeProbab=0.40000001;
    maxRange=1500;
    maxRangeProbab=0.0099999998;
  };
};