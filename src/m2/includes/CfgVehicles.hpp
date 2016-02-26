class fp_static_m2_base : StaticMGWeapon {
  armor = 30;
  armorStructural=10;

  model = "\FP_Static_Weapons\m2\m2_mg";
  picture = "\FP_Static_Weapons\m2\icon\m2_mg_CA.paa";
  icon = "\FP_Static_Weapons\m2\icon\icomap_m2_CA.paa";
  mapSize = 3;
  displayName = "M2HB (M3 AA)"; //12.7mm Browning M2

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
      weapons[] = {"HMG_M2"};
      magazines[] = {
        "100Rnd_127x99_mag_Tracer_Red",
        "100Rnd_127x99_mag_Tracer_Red",
        "100Rnd_127x99_mag_Tracer_Green",
        "100Rnd_127x99_mag_Tracer_Green"
      };
      gunnerAction = "M2_Gunner";
    };
  };
  class AnimationSources {
    class ReloadAnim{source = "reload";weapon = "HMG_M2";};
    class ReloadMagazine{source = "reloadmagazine";weapon = "HMG_M2";};
    class Revolving{source = "revolving";weapon = "HMG_M2";};
  };
};

class fp_static_m2_minitripod_base : fp_static_m2_base {
  displayName = "M2HB (M3)"; //12.7mm Browning M2 (M3 Tripod)
  model = "\FP_Static_Weapons\m2\m2_mg2";

  class Turrets : Turrets {
    class MainTurret : MainTurret {
      gunnerLeftHandAnimName = "otochlaven_shake";
      gunnerRightHandAnimName = "otochlaven_shake";
      gunneraction = "M2_Tripod_Gunner";
      initturn = 0;
      maxturn = 90;
      minturn = -90;
    };
  };
};

class fp_static_m2_b : fp_static_m2_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_m2_high)
};
class fp_static_m2_minitripod_b : fp_static_m2_minitripod_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_m2)
};

// M2 Weapon Bag
class fp_static_bag_weapon_m2_high : fp_static_bag_base {
  displayName = "M2HB (Raised)";
  class assembleInfo: assembleInfo {
    primary = 1;
    displayName="M2HB (Raised)";
    assembleTo="fp_static_m2_b";
    base[] = {BAG_COMPATIBLE_ARRAY};
  };
};

class fp_static_bag_weapon_m2 : fp_static_bag_base {
  displayName = "M2HB";
  class assembleInfo: assembleInfo {
    primary = 1;
    displayName="M2HB";
    assembleTo="fp_static_m2_minitripod_b";
    base[] = {BAG_COMPATIBLE_ARRAY};
  };
};
