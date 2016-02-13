class fp_static_kord_base : StaticMGWeapon {
  armor = 30;
  armorStructural=10;

  model = "\FP_Static_Weapons\kord\kord";
  picture = "\FP_Static_Weapons\kord\icon\kord_ca.paa";
  icon = "\FP_Static_Weapons\kord\icon\icomap_kord_ca.paa";
  mapSize = 3;
  displayName = ".50Cal Kord 6P50 (Tripod)";
  
  {% if ace_compat %}
    {#/* ACE Cargo */#}
    ace_cargo_canLoad = 1;
    ace_cargo_size = 2;
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
      optics = 1;
      turretInfoType = "RscWeaponZeroing";
      discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
      discreteDistanceInitIndex = 2;
      gunnerLeftHandAnimName = "otochlaven_shake";
      gunnerRightHandAnimName = "otochlaven_shake";
      memoryPointsGetInGunner = "pos_gunner";
      memoryPointsGetInGunnerDir = "pos_gunner_dir";
      selectionFireAnim = "zasleh";
      minElev = -20;
      maxElev = 20;
      minTurn = -180;
      maxTurn = 180;
      initTurn=0;
      weapons[] = {"fp_static_weap_kord"};
      magazines[] = {
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm"
      };
      gunnerAction = "LowKORD_Gunner";
      
      gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
      class ViewOptics {
        initAngleX=0; minAngleX=-30; maxAngleX=+30;
        initAngleY=0; minAngleY=-100; maxAngleY=+100;
        initFov=0.7; minFov=0.25; maxFov=1.1;
      };
      
    };
  };
  class AnimationSources {
    class ReloadAnim {
      source="reload";
      weapon="fp_static_weap_kord";
    };
    class ReloadMagazine {
      source="reloadmagazine";
      weapon="fp_static_weap_kord";
    };
    class Revolving {
      source="revolving";
      weapon="fp_static_weap_kord";
    };
  };
};
class fp_static_kord_high_base : fp_static_kord_base {
  displayName=".50Cal Kord 6P50";
  model="\FP_Static_Weapons\kord\KORD_6u16sp";
  icon="FP_Static_Weapons\kord\icon\icomap_kord6u16sp_CA.paa";
  picture="\FP_Static_Weapons\kord\icon\kord6u16sp_ca.paa";
  
  {% if ace_compat %}
    {#/* ACE Cargo */#}
    ace_cargo_canLoad = 1;
    ace_cargo_size = 2;
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
  
  class Turrets: Turrets
  {
    class MainTurret: MainTurret
    {
      minElev=-7;
      maxelev = 45;
      gunnerAction="KORD_Gunner";
      minTurn=-180;
      maxTurn=180;
      initTurn=0;
    };
  };
};

class fp_static_kord_b : fp_static_kord_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};
class fp_static_kord_high_b : fp_static_kord_high_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};