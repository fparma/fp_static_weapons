class fp_static_m2_base: StaticMGWeapon {
  armor = 30;
  armorStructural = 1;

  model = "\FP_Static_Weapons\m2\m2_mg";
  picture = "\FP_Static_Weapons\m2\icon\m2_mg_CA.paa";
  icon = "\FP_Static_Weapons\m2\icon\icomap_m2_CA.paa";
  mapSize = 3;
  displayName = "M2 Browning";
  class Turrets: Turrets {
    class MainTurret: MainTurret {
      optics = 1;
      turretInfoType = "RscWeaponZeroing";
      discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
      discreteDistanceInitIndex = 2;
      gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
      gunnerLeftHandAnimName = "otochlaven_shake";
      gunnerRightHandAnimName = "otochlaven_shake";
      selectionFireAnim = "zasleh";
      minElev = -20;
      maxElev = 35;
      minTurn = -180;
      maxTurn = 180;
      weapons[] = {"HMG_M2"};
      magazines[] = {
        "100Rnd_127x99_mag_Tracer_Yellow",
        "100Rnd_127x99_mag_Tracer_Yellow",
        "100Rnd_127x99_mag_Tracer_Yellow",
        "100Rnd_127x99_mag_Tracer_Yellow"
      };
      gunnerAction = "M2_Gunner";
    };
  };
  class AnimationSources {
    class ReloadAnim{source = "reload";weapon = "HMG_M2";};
    class ReloadMagazine{source = "reloadmagazine";weapon = "HMG_M2";};
    class Revolving{source = "revolving";weapon = "HMG_M2";};
  };
  class Library {libTextDesc = "asd";};
};

class fp_static_m2_minitripod_base: fp_static_m2_base {
  displayName = "M2 Browning (M3 Tripod)";
  model = "\FP_Static_Weapons\m2\m2_mg2";
  class Turrets: Turrets {
    class MainTurret: MainTurret {
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
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};
class fp_static_m2_minitripod_b : fp_static_m2_minitripod_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};