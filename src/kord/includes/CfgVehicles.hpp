class fp_static_kord_base : StaticMGWeapon {
  armor = 30;
  armorStructural=10;

  model = "\FP_Static_Weapons\kord\kord";
  picture = "\FP_Static_Weapons\kord\icon\kord_ca.paa";
  icon = "\FP_Static_Weapons\kord\icon\icomap_kord_ca.paa";
  mapSize = 3;
  displayName = "Kord (Minitripod)";
  class Turrets : Turrets {
    class MainTurret : MainTurret {
      optics = 1;
      turretInfoType = "RscWeaponZeroing";
      discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
      discreteDistanceInitIndex = 2;
      gunnerLeftHandAnimName = "otochlaven_shake";
      gunnerRightHandAnimName = "otochlaven_shake";
      selectionFireAnim = "zasleh";
      minElev = -20;
      maxElev = 35;
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
  class Library {libTextDesc = "asd";};
};

class fp_static_kord_b : fp_static_kord_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};