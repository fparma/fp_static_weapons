class fp_static_ags30_base: StaticGrenadeLauncher {
  displayName = "AGS-30 (6P17)"; //30mm AGS-30 (SAG-30 Tripod)
  model = "\FP_Static_Weapons\ags30\AGS_static";
  picture = "\FP_Static_Weapons\ags30\icon\ags_static_ca.paa";
  icon = "\FP_Static_Weapons\ags30\icon\icomap_ags_ca.paa";
  mapSize = 2.5;
  armor = 30;
  armorStructural=10;

  class Turrets: Turrets {
    class MainTurret: MainTurret {
      
      gunBeg="Usti hlavne";
      gunEnd="Konec hlavne";
      gunnerLeftHandAnimName = "otochlaven";
      gunnerRightHandAnimName = "otochlaven";

      gunnerOpticsModel = "\FP_Static_Weapons\ags30\optika_AGS30";
      gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
      ejectDeadGunner = 1;
      gunnerForceOptics = 0;

      minElev=-10;maxelev = 32;
      minTurn=-90; maxTurn=+90;
      initTurn=0;

      weapons[] = {"fp_static_weap_ags30"};
      magazines[] = {
        "fp_static_mag_48rnd_ags30",
        "fp_static_mag_48rnd_ags30",
        "fp_static_mag_48rnd_ags30",
        "fp_static_mag_48rnd_ags30"
      };
      gunnerAction = "AGS_Gunner";

      class ViewGunner {
        initAngleX=5; minAngleX=-30; maxAngleX=+30;
        initAngleY=0; minAngleY=-100; maxAngleY=+100;
        initFov=0.7; minFov=0.25; maxFov=1.1;
      };
      class ViewOptics : ViewOptics {
        initFov=0.250; minFov=0.250; maxFov=0.250; // FOV 28 deg
      };
    };
  };
};
class fp_static_ags30_b : fp_static_ags30_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_ags30, fp_static_bag_tripod_ags30)  
};

// AGS30 Weapon Bag
class fp_static_bag_weapon_ags30 : fp_static_bag_base {
  displayName = "AGS-30 (6P17 Weapon)";
  _generalMacro="FP_M2HBHigh_Ins";
};

// AGS30 Tripod High
class fp_static_bag_tripod_ags30 : fp_static_bag_base {
  displayName = "AGS-30 (6P17 Tripod)";
  _generalMacro="RP_M2HBHigh_Ins";
  class assembleInfo: assembleInfo {
    primary = 1;
		displayName="AGS-30 (6P17)";
		assembleTo="fp_static_ags30_b";
		base[]={"fp_static_bag_weapon_ags30"};
	};
};
