class StaticSEARCHLight: StaticWeapon {
  class Turrets: Turrets {
    class MainTurret: MainTurret {};
  };
  class UserActions: UserActions {};
};
class fp_static_searchlight_base: StaticSEARCHLight {
  scope = 0;
  model = "\FP_Static_Weapons\searchlight\searchlight_manual.p3d";
  picture = "\FP_Static_Weapons\searchlight\data\searchlight_manual_CA.paa";
  mapSize = 3;
  nameSound = "light";
  displayName = "Searchlight";
  typicalCargo[] = {};
  class Turrets: Turrets {
    class MainTurret: MainTurret {
      memoryPointsGetInGunner = "pos_gunner";
      memoryPointsGetInGunnerDir = "pos_gunner_dir";
      weapons[] = {"SEARCHLIGHT"};
      minElev = -25;
      maxElev = 85;
      initElev= 0;
      minTurn = -180;
      maxTurn = 180;
      initTurn = 0;
      gunnerAction = "searchlight_Gunner";
      ejectDeadGunner = 1;
      gunnerForceOptics = 0;
    };
  };

  class Reflectors {
    class main_reflector {
      color[] = {9500,9000,8500};
      ambient[] = {85,85,85};
      position = "light";
      direction = "lightEnd";
      hitpoint = "light";
      selection = "light";
      size = 1;
      intensity = 50;
      innerAngle = 15;
      outerAngle = 65;
      coneFadeCoef = 10;
      useFlare = true;
      dayLight = false;
      flareSize = 10;
      flareMaxDistance = 250;
      class Attenuation {
        start = 0;
        constant = 0;
        linear = 1;
        quadratic = 1;
        hardLimitStart = 100;
        hardLimitEnd = 200;
      };
    };
    class sub_reflector: main_reflector {
      flareSize = 5;
    };
  };
  aggregateReflectors[] = { {"main_reflector","sub_reflector"} };

  class Damage {
    tex[] = {};
    mat[] =  {
      "FP_Static_Weapons\searchlight\data\searchlight_manual.rvmat","FP_Static_Weapons\searchlight\data\searchlight_manual_damage.rvmat","FP_Static_Weapons\searchlight\data\searchlight_manual_damage.rvmat",
      "FP_Static_Weapons\searchlight\data\m2_stojan.rvmat","FP_Static_Weapons\searchlight\data\m2_stojan_damage.rvmat","FP_Static_Weapons\searchlight\data\m2_stojan_damage.rvmat",
      "FP_Static_Weapons\searchlight\data\searchlight_manual_glass.rvmat","FP_Static_Weapons\searchlight\data\searchlight_manual_glass_destruct.rvmat","FP_Static_Weapons\searchlight\data\searchlight_manual_glass_destruct.rvmat"
    };
  };

  class UserActions: UserActions {
    class lightOn {
      displayName = "Lights On";
      shortcut = "Headlights";
      condition = "player in this && {!(this getVariable ['a2LightOn', false])}";
      statement = "player action ['lightOn', this]; this setVariable ['a2LightOn', true]";
      position = "pos_gunner";
      radius = 2;
      onlyforplayer = 1;
      showWindow = 0;
      hideOnUse = 1;
    };
    class lightOff {
      displayName = "Lights Off";
      shortcut = "Headlights";
      condition = "player in this && {(this getVariable ['a2LightOn', false])}";
      statement = "player action ['lightOff', this]; this setVariable ['a2LightOn', false]";
      position = "pos_gunner";
      radius = 2;
      onlyforplayer = 1;
      showWindow = 0;
      hideOnUse = 1;
    };
  };
};

class fp_static_searchlight_b: fp_static_searchlight_base {
  scope = 2;
  side = 1;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  ASSEMBLE_INFO(fp_static_bag_weapon_searchlight, fp_static_bag_tripod_searchlight)  
};

// Searchlight Weapon Bag
class fp_static_bag_weapon_searchlight : fp_static_bag_base {
  displayName = "Searchlight (Lamp)";
  _generalMacro="FP_M2HBHigh_Ins";
};

// Searchlight Tripod High
class fp_static_bag_tripod_searchlight : fp_static_bag_base {
  displayName = "Searchlight (Bipod)";
  _generalMacro="RP_M2HBHigh_Ins";
  class assembleInfo: assembleInfo {
    primary = 1;
		displayName="Searchlight";
		assembleTo="fp_static_searchlight_b";
		base[]={"fp_static_bag_weapon_searchlight"};
	};
};
