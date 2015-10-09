class fp_static_zu23_base : StaticCannon {
  mapSize = 2.5;
  cargoAction[] = {"ZU23_Gunner"};
  displayname="ZU-23";
  model="\FP_Static_Weapons\zu23\zu23";
  class Library {libTextDesc="asd";};
  icon= "\FP_Static_Weapons\zu23\icon\icomap_zu23_CA.paa";
  picture="\FP_Static_Weapons\zu23\icon\zu23_CA.paa";
  UiPicture="\FP_Static_Weapons\zu23\icon\zu23_CA.paa";
  transportSoldier=1;
  memoryPointsGetInCargo="pos_cargo_dir";
  memoryPointsGetInCargoDir="pos_cargo";
  memoryPointsGetInDriver="pos_driver_dir";
  memoryPointsGetInDriverDir="pos_driver";
  class Turrets : Turrets {
    class MainTurret : MainTurret {
      minTurn = -180;
      maxTurn = 180;
      initTurn = 0;
      minElev = -10;
      maxElev = 85;
      initElev = 0;
      weapons[] = {"HMG_M2"};
      magazines[] = {
        "100Rnd_127x99_mag_Tracer_Yellow",
        "100Rnd_127x99_mag_Tracer_Yellow"
      };
      gunnerAction = "ZU23_Gunner";
      selectionFireAnim = "zasleh";
      gunnerOpticsModel = "\FP_Static_Weapons\zu23\zu23_scope";
      gunnerOpticsEffect[] = {
        "OpticsCHAbera1",
        "OpticsBlur2"
      };
      gunnerForceOptics = 0;
      memoryPointsGetInGunner = "pos_gunner_dir";
      memoryPointsGetInGunnerDir = "pos_gunner";
      class ViewGunner {
        initAngleX = 5;
        minAngleX = -30;
        maxAngleX = 30;
        initAngleY = 0;
        minAngleY = -100;
        maxAngleY = 100;
        initFov = 0.69999999;
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
        initFov = 0.093000002;
        minFov = 0.093000002;
        maxFov = 0.093000002;
      };
    };
  };
  class AnimationSources {
    class muzzle_source {
      source="reload";
      weapon="HMG_M2";
    };
    class fire_anim {
      source="revolving";
      weapon="HMG_M2";
    };
  };
};
class fp_static_zu23_b : fp_static_zu23_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};