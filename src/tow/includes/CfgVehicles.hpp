class fp_static_tow_base: StaticATWeapon {
  armor = 30;
  armorStructural=10;

  mapSize = 2.5;
  picture = "\FP_Static_Weapons\tow\icon\tow_static_CA.paa";
  icon = "\FP_Static_Weapons\tow\icon\icomap_tow_static_CA.paa";
  displayname = "M41A4 TOW"; //BGM-71 TOW

  ace_cargo_canLoad = 1;
  ace_cargo_size = 4;
  ace_dragging_canDrag = 1;
  ace_dragging_canCarry = 1;

  class UserActions {};
  class Turrets: Turrets {
    class MainTurret: MainTurret {
      gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
      minElev = -10;
      minturn = -180;
      maxturn = 180;
      weapons[] = {"fp_static_weap_tow"};
      magazines[] = {"fp_static_mag_tow", "fp_static_mag_tow", "fp_static_mag_tow"};
      gunnerAction = "TOW_Gunner";
      memoryPointsGetInGunner = "pos_gunner";
      memoryPointsGetInGunnerDir = "pos_gunner_dir";
      ejectDeadGunner = 1;
      gunnerForceOptics = 0;
      class ViewGunner {
        initAngleX = 5;
        minAngleX = -30;
        maxAngleX = 30;
        initAngleY = 0;
        minAngleY = -100;
        maxAngleY = 100;
        initFov = 0.7;
        minFov = 0.25;
        maxFov = 1.1;
      };
      class ViewOptics {
        initAngleX = 0;
        minAngleX = -30;
        maxAngleX = 30;
        initAngleY = 0;
        minAngleY = -100;
        maxAngleY = 100;
        initFov = 0.2;
        minFov = 0.025;
        maxFov = 0.2;
        visionMode[] = {"Normal","Ti"};
        thermalMode[] = {0,1};
      };
      gunnerOpticsModel = "\FP_Static_Weapons\tow\TOW_TI";
    };
  };
  model = "\FP_Static_Weapons\tow\TOW_static";
};

class fp_static_tow_b : fp_static_tow_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_tow)
};

class fp_static_bag_weapon_tow : fp_static_bag_base {
  displayName = "M41A4 TOW";
  class assembleInfo: assembleInfo {
    primary = 1;
    displayName="M41A4 TOW";
    assembleTo="fp_static_tow_b";
    base[] = {BAG_COMPATIBLE_ARRAY};
  };
};
