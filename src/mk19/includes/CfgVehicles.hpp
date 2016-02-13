class fp_static_mk19_base: StaticGrenadeLauncher {
  armor = 30;
  armorStructural=10;
  
  displayName = "40mm MK19 (M3 Tripod)";
  model = "\FP_Static_Weapons\mk19\mk19_stat";
  picture = "\FP_Static_Weapons\mk19\icon\mk19_stat_CA.paa";
  icon = "\FP_Static_Weapons\mk19\icon\icomap_mk19_stat_CA.paa";
  mapSize = 2.5;
  
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
      gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
      minElev = -10;
      minTurn = -90;
      maxTurn = 90;
      initTurn = 0;
      weapons[] = {"fp_static_weap_mk19"};
      magazines[] = {
        "fp_static_mag_48rnd_mk19",
        "fp_static_mag_48rnd_mk19",
        "fp_static_mag_48rnd_mk19",
        "fp_static_mag_48rnd_mk19"
      };
      gunnerAction = "MK19_Gunner";
    };
  };
};
class fp_static_mk19_b : fp_static_mk19_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};