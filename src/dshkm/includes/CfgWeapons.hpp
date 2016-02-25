class fp_static_weap_dshkm : MGun {
  ballisticsComputer = 2;

  class GunParticles {
    class effect1 {
      positionName = "usti hlavne";
      directionName = "konec hlavne";
      effectName = "MachineGunCloud";
    };
    class effect2 {
      positionName = "machinegun_eject_pos";
      directionName = "machinegun_eject_dir";
      effectName = "MachineGunCartridge2";
    };
  };

  scope = PUBLIC;
  displayName = "DShKM (Dushka)";
  magazines[] = {
    "fp_static_mag_50rnd_dshkm",
    "fp_static_mag_150rnd_dshkm"
  };

  magazineReloadTime = 6;
  aiDispersionCoefY = 21;
  aiDispersionCoefX = 21;
  canLock = 0;
  modes[] = {"manual","close", "short", "medium", "far"};
  class manual : MGun {
    displayName = "DShKM (Dushka)";
    autoFire = 1;
    sounds[] = {"StandardSound"};
    class StandardSound {
      weaponSoundEffect = "DefaultRifle";
      begin1[] = {"\FP_Static_Weapons\dshkm\sounds\dshk_fire1",db15,1,1600};
      soundBegin[] = {"begin1",1};
    };
    reloadTime = 0.1;
    dispersion = 0.006;

    showToPlayer = true;
    burst = 1;
    aiRateOfFire = 0.5;
    aiRateOfFireDistance = 50;
    minRange = 1;minRangeProbab = 0.01;
    midRange = 2;midRangeProbab = 0.01;
    maxRange = 3;maxRangeProbab = 0.01;
  };
  class close : manual {
    showToPlayer = false;
    soundBurst = false;
    burst = 10;
    aiRateOfFire = 0.5;
    aiRateOfFireDistance = 50;
    minRange = 0;minRangeProbab = 0.05;
    midRange = 20;midRangeProbab = 0.58;
    maxRange = 100;maxRangeProbab = 0.04;
  };
  class short : close {
    burst = 8;
    aiRateOfFire = 2;
    aiRateOfFireDistance = 300;
    minRange = 50;minRangeProbab = 0.05;
    midRange = 150;midRangeProbab = 0.58;
    maxRange = 300;maxRangeProbab = 0.04;
  };
  class medium : close {
    burst = 4;
    aiRateOfFire = 3;
    aiRateOfFireDistance = 600;
    minRange = 200;minRangeProbab = 0.05;
    midRange = 500;midRangeProbab = 0.58;
    maxRange = 800;maxRangeProbab = 0.04;
  };
  class far : close {
    burst = 5;
    aiRateOfFire = 5;
    aiRateOfFireDistance = 1000;
    minRange = 600;minRangeProbab = 0.05;
    midRange = 800;midRangeProbab = 0.4;
    maxRange = 1200;maxRangeProbab = 0.01;
  };
};
