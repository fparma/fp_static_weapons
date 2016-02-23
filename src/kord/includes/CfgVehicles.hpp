class fp_static_kord_base : StaticMGWeapon {
  armor = 30;
  armorStructural=10;
  class UserActions {};

  model = "\FP_Static_Weapons\kord\kord";
  picture = "\FP_Static_Weapons\kord\icon\kord_ca.paa";
  icon = "\FP_Static_Weapons\kord\icon\icomap_kord_ca.paa";
  mapSize = 3;
  displayName = "KORD (6U16)"; //12.7mm Kord 6P50-1 (6T7 Tripod)

  class Turrets : Turrets {
    class MainTurret : MainTurret {
      optics = 1;
      turretInfoType = "RscWeaponZeroing";
      discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
      discreteDistanceInitIndex = 2;
      gunnerLeftHandAnimName = "otochlaven_shake";
      gunnerRightHandAnimName = "otochlaven_shake";
      memoryPointsGetInGunner = "pos_gunner";
      memoryPointsGetInGunnerDir = "pos_gunner_dir";
      selectionFireAnim = "zasleh";
      ejectDeadGunner = 1;
      gunnerForceOptics = 0;
      minElev = -20;
      maxElev = 20;
      minTurn = -180;
      maxTurn = 180;
      initTurn=0;
      weapons[] = {"fp_static_weap_kord"};
      magazines[] = {
        "fp_static_mag_50rnd_kord",
        "fp_static_mag_50rnd_kord",
        "fp_static_mag_50rnd_kord",
        "fp_static_mag_50rnd_kord",
        "fp_static_mag_50rnd_kord",
        "fp_static_mag_50rnd_kord",
        "fp_static_mag_50rnd_kord",
        "fp_static_mag_50rnd_kord"
      };
      gunnerAction = "LowKORD_Gunner";

      gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
      class ViewOptics {
        initAngleX=0; minAngleX=-30; maxAngleX=+30;
        initAngleY=0; minAngleY=-100; maxAngleY=+100;
        initFov=0.7; minFov=0.25; maxFov=1.1;
      };

    };
  };
  class AnimationSources {
    class ReloadAnim {
      source="reload";
      weapon="fp_static_weap_kord";
    };
    class ReloadMagazine {
      source="reloadmagazine";
      weapon="fp_static_weap_kord";
    };
    class Revolving {
      source="revolving";
      weapon="fp_static_weap_kord";
    };
  };
};
class fp_static_kord_high_base : fp_static_kord_base {
  displayName="KORD (6T7)"; //.50Cal Kord 6P50 (6U16 Mount)
  model="\FP_Static_Weapons\kord\KORD_6u16sp";
  icon="FP_Static_Weapons\kord\icon\icomap_kord6u16sp_CA.paa";
  picture="\FP_Static_Weapons\kord\icon\kord6u16sp_ca.paa";

  class Turrets: Turrets
  {
    class MainTurret: MainTurret
    {
      minElev=-7;
      maxelev = 45;
      gunnerAction="KORD_Gunner";
      minTurn=-180;
      maxTurn=180;
      initTurn=0;
    };
  };
};

class fp_static_kord_b : fp_static_kord_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_kord, fp_static_bag_tripod_kord_low)  
};
class fp_static_kord_high_b : fp_static_kord_high_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_kord, fp_static_bag_tripod_kord)  
};

// Kord Weapon Bag
class fp_static_bag_weapon_kord : fp_static_bag_base {
  displayName = "KORD (Weapon)";
  _generalMacro="FP_KORDHigh_Ins";
};

// Kord Tripod High
class fp_static_bag_tripod_kord : fp_static_bag_base {
  displayName = "KORD (6T7 Tripod)";
  _generalMacro="RP_KORDHigh_Ins";
  class assembleInfo: assembleInfo {
    primary = 1;
		displayName="KORD (6T7 Tripod)";
		assembleTo="fp_static_kord_high_b";
		base[]={"fp_static_bag_weapon_kord"};
	};
};

// Kord Minitripod
class fp_static_bag_tripod_kord_low : fp_static_bag_base {
  displayName = "KORD (6U16 Minitripod)";
  _generalMacro="RP_KORDHigh_Ins";
  class assembleInfo: assembleInfo {
    primary = 1;
		displayName="KORD (6U16)";
		assembleTo="fp_static_kord_b";
		base[]={"fp_static_bag_weapon_kord"};
	};
};
