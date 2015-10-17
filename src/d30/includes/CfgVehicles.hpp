class fp_static_d30_base : StaticCannon {
  accuracy = 0.12;
  cost = 10000;
  availableForSupportTypes[]={"Artillery"};
  artilleryScanner = 1;
  displayName="D30 Artillery";

  model="\FP_Static_Weapons\D30\D30";
  icon= "\FP_Static_Weapons\d30\icon\icomap_d30_CA.paa";
  picture="\FP_Static_Weapons\d30\icon\d30_CA.paa";
  UiPicture="\FP_Static_Weapons\d30\icon\d30_CA.paa";

  mapSize = 4.5;
  cargoAction[] = {"D30_Cargo","D30_Commander"};
  typicalCargo[]={"I_Soldier_F","I_Soldier_F","I_Soldier_F"};
  transportSoldier = 2;
  gunnerHasFlares = true;
  
  memoryPointsGetInCargo = "pos_cargo_dir";
  memoryPointsGetInCargoDir = "pos_cargo";		
  
  class Turrets: Turrets {
    class MainTurret: MainTurret {
      gunBeg="Usti hlavne";
      gunEnd="Konec hlavne";
      weapons[]={"fp_static_weap_d30"};
      magazines[] = { 
        "32Rnd_155mm_Mo_shells","2Rnd_155mm_Mo_guided","2Rnd_155mm_Mo_guided","6Rnd_155mm_Mo_mine","2Rnd_155mm_Mo_Cluster","6Rnd_155mm_Mo_smoke","2Rnd_155mm_Mo_LG","6Rnd_155mm_Mo_AT_mine"
      };
      gunnerAction = "D30_Gunner";
      gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
      gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
      memoryPointsGetInGunner = "pos_gunner_dir";
      memoryPointsGetInGunnerDir = "pos_gunner";
      
      minElev=-9;
      maxelev = 80;
      minTurn=-180;
      maxTurn=180;
      class ViewOptics: ViewOptics {
        initFov=0.096; minFov=0.096; maxFov=0.096; //FOV 11 deg
      };
    };
  };
  class AnimationSources {
    class recoil_source {
      source="reload";
      weapon="fp_static_weap_d30";
    };
    class leftT_source {source="user";animPeriod = 1;initPhase=-2.3; };
    class rightT_source: leftT_source {initPhase=0; };
    class leftW_source: leftT_source {initPhase=-1.7; };
    class rightW_source: leftW_source {};
    class maingunT_source {source="user";animPeriod = 1;initPhase=0; };
    class mainTurretT_source: maingunT_source {};
    class szpilki_source {source="user";animPeriod = 0.1;initPhase=0; };
  };
  class Damage {
    tex[]={};
    mat[]={
      "FP_Static_Weapons\d30\data\d30.rvmat",
      "FP_Static_Weapons\d30\data\d30_damage.rvmat",
      "FP_Static_Weapons\d30\data\d30_destruct.rvmat"
    };
  };
  class Library {libTextDesc = "asd";};
  htMin = 1;
  htMax = 480;
  afMax = 0;
  mfMax = 0;
  mFact = 1;
  tBody = 450;
};

class fp_static_d30_b : fp_static_d30_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};