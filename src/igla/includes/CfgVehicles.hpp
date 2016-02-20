class fp_static_igla_base : StaticAAWeapon {
  armor = 30;
  armorStructural=10;

  gunnercansee = "2+4+8+32";
  displayName = "9K38 (Djigit)"; //9K38 (Igla)
  mapsize = 2.8;
  model = "FP_Static_Weapons\igla\igla_AA_pod";
  icon = "FP_Static_Weapons\igla\icon\icomap_igla_aa_pod_CA.paa";
  picture="\FP_Static_Weapons\igla\icon\igla_aa_pod_ca.paa";
  UiPicture="\FP_Static_Weapons\igla\icon\igla_aa_pod_ca.paa";

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
      minTurn=-180;
      maxTurn=180;
      gunneraction = "Igla_Gunner";
      gunneropticseffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
      gunneropticsmodel = "\A3\weapons_f\reticle\optics_empty";
      magazines[] = {
        "4Rnd_GAA_missiles",
        "4Rnd_GAA_missiles",
        "4Rnd_GAA_missiles",
        "4Rnd_GAA_missiles",
        "4Rnd_GAA_missiles",
        "4Rnd_GAA_missiles",
        "4Rnd_GAA_missiles",
        "4Rnd_GAA_missiles",
        "4Rnd_GAA_missiles",
        "4Rnd_GAA_missiles"
      };
      maxelev = 120;
      memoryPointsGetInGunner = "pos_gunner";
      memoryPointsGetInGunnerDir = "pos_gunner_dir";
      minelev = -10;
      weapons[] = {"missiles_titan"};
      class ViewOptics {
        initanglex = 0;
        initangley = 0;
        initfov = 0.155;
        maxanglex = 30;
        maxangley = 100;
        maxfov = 0.155;
        minanglex = -30;
        minangley = -100;
        minfov = 0.047;
      };
    };
  };
};

class fp_static_igla_b : fp_static_igla_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};
