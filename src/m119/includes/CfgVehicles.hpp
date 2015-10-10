class fp_static_m119_base : StaticCannon {
  accuracy = 0.12;
  cost = 10000;
  availableForSupportTypes[] = {"Artillery"};
  artilleryScanner = 1;

  transportSoldier = 2;
  gunnerHasFlares = true;

  displayName = "M119-A1 howitzer";

  model = "\FP_Static_Weapons\m119\m119";
  picture = "\FP_Static_Weapons\m119\icon\M119_CA.paa";
  icon = "\FP_Static_Weapons\m119\icon\icomap_m119_CA.paa";
  cargoAction[] = {"M119_Cargo","M119_Commander"};
  memoryPointsGetInCargo = "pos_cargo_dir";
  memoryPointsGetInCargoDir = "pos_cargo";

  class Turrets : Turrets {
    class MainTurret : MainTurret {
      weapons[] = {"mortar_155mm_AMOS"};

      magazines[] = {"32Rnd_155mm_Mo_shells","2Rnd_155mm_Mo_guided","2Rnd_155mm_Mo_guided","6Rnd_155mm_Mo_mine","2Rnd_155mm_Mo_Cluster","6Rnd_155mm_Mo_smoke","2Rnd_155mm_Mo_LG","6Rnd_155mm_Mo_AT_mine"};

      gunnerAction = "M119_Gunner";
      gunnerOpticsModel = "\FP_Static_Weapons\m119\m119_optics";
      gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
      memoryPointsGetInGunner = "pos_gunner_dir";
      memoryPointsGetInGunnerDir = "pos_gunner";

      minElev = -9;
      maxelev = 80;
      minTurn = -180;
      maxTurn = 180;
      class ViewOptics : ViewOptics {
        initFov=0.155; minFov=0.155; maxFov=0.155; // 3x zoom from 50 deg FOV
      };
    };
  };
  class AnimationSources {
    class recoil_source {
      source = "reload";
      weapon = "mortar_155mm_AMOS";
    };
    class leftT_source {source="user";animPeriod = 1;initPhase=-2.3; };
    class rightT_source: leftT_source {initPhase=0; };
    class leftW_source: leftT_source {initPhase=-1.7; };
    class rightW_source: leftW_source {};
    class maingunT_source {source="user";animPeriod = 1;initPhase=0; };
    class mainTurretT_source: maingunT_source {};
    class szpilki_source {source="user";animPeriod = 0.1;initPhase=0; };
  };

  class Library {libTextDesc = "asd";};
  htMin = 1;
  htMax = 480;
  afMax = 0;
  mfMax = 0;
  mFact = 1;
  tBody = 450;
};
class fp_static_m119_b : fp_static_m119_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};