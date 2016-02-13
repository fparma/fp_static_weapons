class fp_static_dshkm_base : StaticMGWeapon {
  armor = 30;
  armorStructural=10;

  model = "\FP_Static_Weapons\dshkm\DShKM_mg";
  picture = "\FP_Static_Weapons\dshkm\icon\dshkm_mg_ca.paa";
  icon = "\FP_Static_Weapons\dshkm\icon\icomap_DShKM_CA.paa";
  mapSize = 3;
  displayName = ".50Cal DShKM";
  
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
      gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
      gunnerLeftHandAnimName = "otochlaven_shake";
      gunnerRightHandAnimName = "otochlaven_shake";
      memoryPointsGetInGunner = "pos_gunner";
      memoryPointsGetInGunnerDir = "pos_gunner_dir";
      selectionFireAnim = "zasleh";
      minElev = -20;
      maxElev = 35;
      minTurn = -180;
      maxTurn = 180;
      weapons[] = {"fp_static_weap_dshkm"};
      magazines[] = {
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm",
        "fp_static_mag_50rnd_dshkm"
      };
      gunnerAction = "DShKM_Gunner";
    };
  };
  class AnimationSources {
    class muzzle_source {source = "reload";weapon = "fp_static_weap_dshkm";};
    class ReloadAnim : muzzle_source {source = "reload";};
    class ReloadMagazine : muzzle_source {source = "reloadmagazine";};
    class Revolving : muzzle_source {source = "revolving";};
    class muzzleHMG_ROT : muzzle_source {source = "ammorandom";};
  };
};

class fp_static_dshkm_minitripod_base: fp_static_dshkm_base {
  displayName = ".50Cal DShKM (SAG-30 Tripod)";
  model = "\FP_Static_Weapons\dshkm\DShKM_mg2";
  
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
  
  class Turrets : Turrets {
    class MainTurret : MainTurret {
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