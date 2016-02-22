class fp_static_zu23_base : StaticCannon {
  armor = 30;
  armorStructural=10;

  mapSize = 2.5;
  cargoAction[] = {"ZU23_Gunner"};
  displayname="23mm ZU-23-2";
  model="\FP_Static_Weapons\zu23\zu23";
  icon= "\FP_Static_Weapons\zu23\icon\icomap_zu23_CA.paa";
  picture="\FP_Static_Weapons\zu23\icon\zu23_CA.paa";
  UiPicture="\FP_Static_Weapons\zu23\icon\zu23_CA.paa";
  transportSoldier=1;
  memoryPointsGetInCargo="pos_cargo_dir";
  memoryPointsGetInCargoDir="pos_cargo";
  memoryPointsGetInDriver="pos_driver_dir";
  memoryPointsGetInDriverDir="pos_driver";

  {% if ace_compat %}
    {#/* ACE Cargo */#}
    ace_cargo_canLoad = 1;
    ace_cargo_size = 4;
    ace_dragging_canCarry = 1;
    ace_dragging_canDrag = 1;
    ace_dragging_carryDirection = 0;
    ace_dragging_carryPosition[] = {0,1.2,0};
    ace_dragging_dragDirection = 0;
    ace_dragging_dragPosition[] = {0,1.2,0};

    {#/* ACE Nightvision Settings */#}
    ACE_NightVision_blur = 0.055;
    ACE_NightVision_grain = 0.75;
  {% endif %}

  class Turrets : Turrets {
    class MainTurret : MainTurret {
      minTurn = -180;
      maxTurn = 180;
      initTurn = 0;
      minElev = -10;
      maxElev = 85;
      initElev = 0;
      weapons[] = {"fp_static_weap_zu23"};
      magazines[] = {
        "fp_static_mag_2x50rnd_23mm_AZP85",
        "fp_static_mag_2x50rnd_23mm_AZP85",
        "fp_static_mag_2x50rnd_23mm_AZP85",
        "fp_static_mag_2x50rnd_23mm_AZP85",
        "fp_static_mag_2x50rnd_23mm_AZP85",
        "fp_static_mag_2x50rnd_23mm_AZP85"
      };
      gunnerAction = "ZU23_Gunner";
      selectionFireAnim = "zasleh";
      gunnerOpticsModel = "\FP_Static_Weapons\zu23\zu23_scope";
      gunnerOpticsEffect[] = {
        "OpticsCHAbera1",
        "OpticsBlur2"
      };
      ejectDeadGunner = 0; // Stop the ZU from flying in the air
      gunnerForceOptics = 0;
      memoryPointsGetInGunner = "pos_gunner";
      memoryPointsGetInGunnerDir = "pos_gunner_dir";
      class ViewGunner {
        initAngleX = 5;
        minAngleX = -30;
        maxAngleX = 30;
        initAngleY = 0;
        minAngleY = -100;
        maxAngleY = 100;
        initFov = 0.7;
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
        initFov = 0.093;
        minFov = 0.093;
        maxFov = 0.093;
      };
    };
  };
  class AnimationSources {
    class muzzle_source {
      source="reload";
      weapon="fp_static_weap_zu23";
    };
    class fire_anim {
      source="revolving";
      weapon="fp_static_weap_zu23";
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
