class fp_static_metis_base : StaticATWeapon {
  displayname = "AT-9K115 Metis-M";
  model = "\FP_Static_Weapons\metis\metis.p3d";
  icon="FP_Static_Weapons\metis\icon\icomap_metis_at13_CA.paa";
  picture="\FP_Static_Weapons\metis\icon\metis_at13_CA.paa";
  UiPicture="\FP_Static_Weapons\metis\icon\metis_at13_CA.paa";
  mapSize = 1.5;
  class Turrets: Turrets {
    class MainTurret: MainTurret {
      weapons[]={"fp_static_weap_tow"};
      magazines[] = {"5Rnd_GAT_missiles", "5Rnd_GAT_missiles", "5Rnd_GAT_missiles"};
      gunnerAction = "Metis_Gunner";
      gunnerOpticsModel = "\FP_Static_Weapons\metis\2Dscope_Metis";
      gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
      memoryPointsGetInGunner = "pos_gunner_dir";
      memoryPointsGetInGunnerDir = "pos_gunner";				
      minTurn=-45; maxTurn=+45; initTurn=0;
      minElev=-10; maxElev=+40; initElev=0;
      ejectDeadGunner = 0;
      gunnerForceOptics = 0;
      class ViewGunner {
        initAngleX=5; minAngleX=-30; maxAngleX=+30;
        initAngleY=0; minAngleY=-100; maxAngleY=+100;
        initFov=0.7; minFov=0.25; maxFov=1.1;
      };
      class ViewOptics {
        initAngleX=0; minAngleX=-30; maxAngleX=+30;
        initAngleY=0; minAngleY=-100; maxAngleY=+100;
        initFov=0.078; minFov=0.078; maxFov=0.078; // 6x zoom
        visionMode[] = {"Normal","TI"};
        thermalMode[]={4,5};
      };
    };
  };
  class Library {libTextDesc = "asd";};
};

class fp_static_metis_b : fp_static_metis_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};