class fp_static_dshkm_base : StaticMGWeapon {
  armor = 30;
  armorStructural = 1;

  model = "\FP_Static_Weapons\dshkm\DShKM_mg";
  picture = "\FP_Static_Weapons\dshkm\icon\dshkm_mg_ca.paa";
  icon = "\FP_Static_Weapons\dshkm\icon\icomap_DShKM_CA.paa";
  mapSize = 3;
  displayName = "DShKM";
  class Turrets : Turrets {
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
      gunnerAction = "DShKM_Gunner";
    };
  };
  class AnimationSources {
    class muzzle_source {source = "reload";weapon = "HMG_M2";};
    class ReloadAnim : muzzle_source {source = "reload";};
    class ReloadMagazine : muzzle_source {source = "reloadmagazine";};
    class Revolving : muzzle_source {source = "revolving";};
    class muzzleHMG_ROT : muzzle_source {source = "ammorandom";};
  };
  class Library {libTextDesc = "asd";};
};

class fp_static_dshkm_minitripod_base: fp_static_dshkm_base {
  displayName = "DShKM (SAG-30 Tripod)";
  model = "\FP_Static_Weapons\dshkm\DShKM_mg2";
  class Turrets: Turrets {
    class MainTurret: MainTurret {
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
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};
class fp_static_dshkm_minitripod_b : fp_static_dshkm_minitripod_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};