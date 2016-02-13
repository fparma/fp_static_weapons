class fp_static_tow_base: StaticATWeapon {
  armor = 30;
  armorStructural=10;
  
  mapSize = 2.5;
  picture = "\FP_Static_Weapons\tow\icon\tow_static_CA.paa";
  icon = "\FP_Static_Weapons\tow\icon\icomap_tow_static_CA.paa";
  displayname = "BGM-71 TOW";

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

  class Turrets: Turrets {
    class MainTurret: MainTurret {
      gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
      minElev = -10;
      minturn = -180;
      maxturn = 180;
      weapons[] = {"fp_static_weap_tow"};
      magazines[] = {"fp_static_mag_tow", "fp_static_mag_tow", "fp_static_mag_tow"};
      gunnerAction = "TOW_Gunner";
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
        initFov = 0.2;
        minFov = 0.025;
        maxFov = 0.2;
        visionMode[] = {"Normal","Ti"};
        thermalMode[] = {0,1};
      };
      gunnerOpticsModel = "\FP_Static_Weapons\tow\TOW_TI";
    };
  };
  model = "\FP_Static_Weapons\tow\TOW_static";
};

class fp_static_tow_b : fp_static_tow_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};