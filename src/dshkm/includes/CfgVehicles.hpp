class fp_static_dshkm_base : StaticMGWeapon {
  armor = 30;
  armorStructural=10;

  model = "\FP_Static_Weapons\dshkm\DShKM_mg";
  picture = "\FP_Static_Weapons\dshkm\icon\dshkm_mg_ca.paa";
  icon = "\FP_Static_Weapons\dshkm\icon\icomap_DShKM_CA.paa";
  mapSize = 3;
  displayName = "DShKM (Dushka)"; //12.7mm DShKM

  ace_cargo_canLoad = 1;
  ace_cargo_size = 2;
  ace_dragging_canDrag = 1;
  ace_dragging_canCarry = 1;

  class UserActions {};
  class Turrets : Turrets {
    class MainTurret : MainTurret {
      optics = 1;
      turretInfoType = "RscWeaponZeroing";
      discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
      discreteDistanceInitIndex = 2;
      gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
      gunnerLeftHandAnimName = "otochlaven_shake";
      gunnerRightHandAnimName = "otochlaven_shake";
      memoryPointsGetInGunner = "pos_gunner";
      memoryPointsGetInGunnerDir = "pos_gunner_dir";
      selectionFireAnim = "zasleh";
      ejectDeadGunner = 1;
      gunnerForceOptics = 0;
      minElev = -20;
      maxElev = 35;
      minTurn = -180;
      maxTurn = 180;
      weapons[] = {"fp_static_weap_dshkm"};
      magazines[] = {
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm"
      };
      gunnerAction = "DShKM_Gunner";
    };
  };
  class AnimationSources {
    class muzzle_source {source = "reload";weapon = "fp_static_weap_dshkm";};
    class ReloadAnim : muzzle_source {source = "reload";};
    class ReloadMagazine : muzzle_source {source = "reloadmagazine";};
    class Revolving : muzzle_source {source = "revolving";};
    class muzzleHMG_ROT : muzzle_source {source = "ammorandom";};
  };
};

class fp_static_dshkm_minitripod_base: fp_static_dshkm_base {
  displayName = "DShKM 'Dushka' (Minitripod)"; //.50Cal DShKM (SAG-30 Tripod)
  model = "\FP_Static_Weapons\dshkm\DShKM_mg2";

  class Turrets : Turrets {
    class MainTurret : MainTurret {
      gunnerLeftHandAnimName = "otochlaven_shake";
      gunnerRightHandAnimName = "otochlaven_shake";
      gunneraction = "DShKM_Tripod_Gunner";
      initturn = 0;
      maxturn = 90;
      minturn = -90;
    };
  };
};

class fp_static_dshkm_b : fp_static_dshkm_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_dshkm_high)
};
class fp_static_dshkm_minitripod_b : fp_static_dshkm_minitripod_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_dshkm)
};

// DSHKM Weapon Bag
class fp_static_bag_weapon_dshkm_high : fp_static_bag_base {
  displayName = "DShKM 'Dushka' (Raised)";
  class assembleInfo: assembleInfo {
    primary = 1;
    displayName="DShKM 'Dushka' (Raised)";
    assembleTo="fp_static_dshkm_b";
    base[] = {BAG_COMPATIBLE_ARRAY};
  };
};

// DSHKM Weapon Bag
class fp_static_bag_weapon_dshkm : fp_static_bag_base {
  displayName = "FP DShKM 'Dushka'";
  class assembleInfo: assembleInfo {
    primary = 1;
    displayName="DShKM 'Dushka'";
    assembleTo="fp_static_dshkm_minitripod_b";
    base[] = {BAG_COMPATIBLE_ARRAY};
  };
};
