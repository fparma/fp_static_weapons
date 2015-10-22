class fp_static_ags30_base: StaticGrenadeLauncher {
  displayName = "30mm AGS-30 (SAG-30 Tripod)";
  model = "\FP_Static_Weapons\ags30\AGS_static";
  picture = "\FP_Static_Weapons\ags30\icon\ags_static_ca.paa";
  icon = "\FP_Static_Weapons\ags30\icon\icomap_ags_ca.paa";
  mapSize = 2.5;
  armor=150;
  
  {% if ace_compat %}
    {#/* ACE Cargo */#}
    ace_cargo_canLoad = 1;
    ace_cargo_size = 1;
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
      gunnerLeftHandAnimName = "otochlaven";
      gunnerRightHandAnimName = "otochlaven";

      gunnerOpticsModel = "\FP_Static_Weapons\ags30\optika_AGS30";
      gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
      gunnerForceOptics = 0;

      minElev=-10;maxelev = 32;
      minTurn=-90; maxTurn=+90;
      initTurn=0;
      
      weapons[] = {"fp_static_weap_ags30"};
      magazines[] = {
        "fp_static_mag_48rnd_ags30",
        "fp_static_mag_48rnd_ags30",
        "fp_static_mag_48rnd_ags30",
        "fp_static_mag_48rnd_ags30"
      };
      gunnerAction = "AGS_Gunner";
      
      class ViewGunner {
        initAngleX=5; minAngleX=-30; maxAngleX=+30;
        initAngleY=0; minAngleY=-100; maxAngleY=+100;
        initFov=0.7; minFov=0.25; maxFov=1.1;
      };
      class ViewOptics : ViewOptics {
        initFov=0.250; minFov=0.250; maxFov=0.250; // FOV 28 deg
      };
    };
  };
  class Library {libTextDesc = "asd";};
};
class fp_static_ags30_b : fp_static_ags30_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};