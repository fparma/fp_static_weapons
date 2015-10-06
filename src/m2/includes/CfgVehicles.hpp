class fp_static_m2_base: StaticMGWeapon {
  model="\FP_Static_Weapons\m2\m2_mg";
  picture="\FP_Static_Weapons\m2\icon\m2_mg_CA.paa";
  icon= "\FP_Static_Weapons\m2\icon\icomap_m2_CA.paa";
  mapSize = 3;
  begin1[]={"FP_Static_Weapons\m2\data\m2_single_1", db5, 1, 1400};
  begin2[]={"FP_Static_Weapons\m2\data\m2_single_2", db5, 1, 1400};
  soundBegin[]={begin1,0.5, begin2, 0.5};
  reloadMagazineSound[]={"\FP_Static_Weapons\m2\data\reload-belt-1",db-25,1,40};
  displayName="M2 Browning";
  class Turrets: Turrets {
    class MainTurret: MainTurret {
      optics=1;
      turretInfoType="RscWeaponZeroing";
      discreteDistance[]={100,200,300,400,500,600,800,1000,1200,1500};
      discreteDistanceInitIndex=2;
      gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
      gunnerLeftHandAnimName="otochlaven_shake";
      gunnerRightHandAnimName="otochlaven_shake";
      selectionFireAnim = "zasleh";
      minElev=-20;
      maxElev = 35;
      minTurn=-180;
      maxTurn=180;
      weapons[] = {"HMG_m2"};
      magazines[]={
        "100Rnd_127x99_mag_Tracer_Yellow",
        "100Rnd_127x99_mag_Tracer_Yellow",
        "100Rnd_127x99_mag_Tracer_Yellow",
        "100Rnd_127x99_mag_Tracer_Yellow"
      };
      gunnerAction = "M2_Gunner";
    };
  };
  class AnimationSources {
    class ReloadAnim{source="reload";weapon="HMG_m2";};
    class ReloadMagazine{source="reloadmagazine";weapon="HMG_m2";};
    class Revolving{source="revolving";weapon="HMG_m2";};
  };
  armorStructural=10.0;
  class Library {libTextDesc = "asd";};
};

class fp_static_m2_minitripod_base: fp_static_m2_base {
  displayName = "M2 Browning (Tripod)";
  model="\FP_Static_Weapons\m2\m2_mg2";
  class Turrets: Turrets {
    class MainTurret: MainTurret {
      gunnerLeftHandAnimName="otochlaven_shake";
      gunnerRightHandAnimName="otochlaven_shake";
      gunneraction = "M2_Tripod_Gunner";
      initturn = 0;
      maxturn = 90;
      minturn = -90;
    };
  };
};

class fp_static_m2_b : fp_static_m2_base {
  scope = {{ SCOPE_PUBLIC }};
  side = {{ SIDE_WEST }};
  author = "{{ author }}";
  faction = "BLU_F";
  crew = "B_Soldier_F";
  typicalCargo[] = {"B_Soldier_F"};
};
class fp_static_m2_minitripod_b : fp_static_m2_minitripod_base {
  scope = {{ SCOPE_PUBLIC }};
  side = {{ SIDE_WEST }};
  author = "{{ author }}";
  faction = "BLU_F";
  crew = "B_Soldier_F";
  typicalCargo[] = {"B_Soldier_F"};
};