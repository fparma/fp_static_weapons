class fp_static_metis_base : StaticATWeapon {
  displayname = "9K115-2 'Metis-M'";
  model = "\FP_Static_Weapons\metis\metis.p3d";
  icon="FP_Static_Weapons\metis\icon\icomap_metis_at13_CA.paa";
  picture="\FP_Static_Weapons\metis\icon\metis_at13_CA.paa";
  UiPicture="\FP_Static_Weapons\metis\icon\metis_at13_CA.paa";
  mapSize = 1.5;

  ace_cargo_canLoad = 1;
  ace_cargo_size = 2;
  ace_dragging_canDrag = 1;
  ace_dragging_canCarry = 1;

  class UserActions {};
  class Turrets: Turrets {
    class MainTurret: MainTurret {
      weapons[]={"fp_static_weap_metis"};
      magazines[] = {"fp_static_mag_metis", "fp_static_mag_metis", "fp_static_mag_metis"};
      gunnerAction = "Metis_Gunner";
      gunnerOpticsModel = "\FP_Static_Weapons\metis\2Dscope_Metis";
      gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
      memoryPointsGetInGunner = "pos_gunner";
      memoryPointsGetInGunnerDir = "pos_gunner_dir";
      minTurn=-45; maxTurn=+45; initTurn=0;
      minElev=-10; maxElev=+40; initElev=0;
      ejectDeadGunner = 1;
      gunnerForceOptics = 0;
      class ViewGunner {
        initAngleX=5; minAngleX=-30; maxAngleX=+30;
        initAngleY=0; minAngleY=-100; maxAngleY=+100;
        initFov=0.7; minFov=0.25; maxFov=1.1;
      };
      class ViewOptics {
        initAngleX=0; minAngleX=-30; maxAngleX=+30;
        initAngleY=0; minAngleY=-100; maxAngleY=+100;
        initFov=0.078; minFov=0.078; maxFov=0.078; // 6x zoom
        visionMode[] = {"Normal","TI"};
        thermalMode[]={4,5};
      };
    };
  };
};

class fp_static_metis_b : fp_static_metis_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_metis)
};

// Metis Weapon Bag
class fp_static_bag_weapon_metis : fp_static_bag_base {
  displayName = "9K115-2 'Metis-M'";
  class assembleInfo: assembleInfo {
    primary = 1;
    displayName="9K115-2 'Metis-M'";
    assembleTo="fp_static_metis_b";
    base[] = {BAG_COMPATIBLE_ARRAY};
  };
};
