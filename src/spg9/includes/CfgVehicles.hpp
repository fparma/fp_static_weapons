class fp_static_spg9_base : StaticATWeapon {
  armor = 30;
  armorStructural=10;

  displayName = "SPG-9"; //73mm SPG-9 Kopye
  model = "\FP_Static_Weapons\spg9\spg9.p3d";

  icon = "FP_Static_Weapons\spg9\icon\icon_spg9_CA.paa";
  picture = "\FP_Static_Weapons\spg9\icon\spg9_CA.paa";
  UiPicture = "\FP_Static_Weapons\spg9\icon\spg9_CA.paa";

  mapSize = 3;
  nameSound = "cannon";
  transportSoldier = 0;
  gunnerHasFlares = true;

  ace_cargo_canLoad = 1;
  ace_cargo_size = 2;
  ace_dragging_canDrag = 1;
  ace_dragging_canCarry = 1;

  class UserActions {};
  class AnimationSources {
    class ReloadAnim{source = "reload";weapon = "fp_static_weap_spg9";};
  };
  class Turrets : Turrets {
    class MainTurret : MainTurret {
      weapons[] = {"fp_static_weap_spg9"};
      magazines[] = {
        "fp_static_mag_pg9v","fp_static_mag_pg9v","fp_static_mag_pg9v","fp_static_mag_pg9v","fp_static_mag_pg9v","fp_static_mag_pg9v","fp_static_mag_pg9v","fp_static_mag_pg9v","fp_static_mag_pg9v",
        "fp_static_mag_og9v","fp_static_mag_og9v","fp_static_mag_og9v","fp_static_mag_og9v","fp_static_mag_og9v","fp_static_mag_og9v","fp_static_mag_og9v"
      };
      gunnerAction = "SPG_Gunner";
      gunnerOpticsModel = "\FP_Static_Weapons\spg9\2Dscope_SPG_4";
      gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2","TankGunnerOptics1"};
      memoryPointsGetInGunner = "pos_gunner";
      memoryPointsGetInGunnerDir = "pos_gunner_dir";
      minTurn = -45; maxTurn = +45; initTurn = 0;
      minElev = -10; maxElev = +40; initElev = 0;
      ejectDeadGunner = 1;
      gunnerForceOptics = 0;
      class ViewGunner {
        initAngleX = 5; minAngleX = -30; maxAngleX = +30;
        initAngleY = 0; minAngleY = -100; maxAngleY = +100;
        initFov = 0.7; minFov = 0.25; maxFov = 1.1;
      };
      class ViewOptics {
        initAngleX = 0; minAngleX = -30; maxAngleX = +30;
        initAngleY = 0; minAngleY = -100; maxAngleY = +100;
        initFov = 0.111; minFov = 0.111; maxFov = 0.111; // 4.2x zoom
      };
    };
  };
};

class fp_static_spg9_b : fp_static_spg9_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_spg, fp_static_bag_tripod_spg)
};

// SPG Weapon Bag
class fp_static_bag_weapon_spg : fp_static_bag_base {
  displayName = "FP SPG-9 (Weapon)";
};

// SPG Tripod
class fp_static_bag_tripod_spg : fp_static_bag_base {
  displayName = "FP SPG-9 (Tripod)";
  class assembleInfo: assembleInfo {
    primary = 1;
		displayName="SPG-9";
		assembleTo="fp_static_spg9_b";
		base[]={"fp_static_bag_weapon_spg"};
	};
};
