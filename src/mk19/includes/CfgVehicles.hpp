class fp_static_mk19_base: StaticGrenadeLauncher {
  displayName = "40mm MK19 Grenade Launcher";
  model = "\FP_Static_Weapons\mk19\mk19_stat";
  picture = "\FP_Static_Weapons\mk19\icon\mk19_stat_CA.paa";
  icon = "\FP_Static_Weapons\mk19\icon\icomap_mk19_stat_CA.paa";
  mapSize = 2.5;
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