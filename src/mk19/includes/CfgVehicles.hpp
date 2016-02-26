class fp_static_mk19_base: StaticGrenadeLauncher {
  armor = 30;
  armorStructural=10;

  displayName = "Mk. 19 (M3)"; //40mm MK19 (M3 Tripod)
  model = "\FP_Static_Weapons\mk19\mk19_stat";
  picture = "\FP_Static_Weapons\mk19\icon\mk19_stat_CA.paa";
  icon = "\FP_Static_Weapons\mk19\icon\icomap_mk19_stat_CA.paa";
  mapSize = 2.5;

  ace_cargo_canLoad = 1;
  ace_cargo_size = 2;
  ace_dragging_canDrag = 1;
  ace_dragging_canCarry = 1;

  class UserActions {};
  class Turrets: Turrets {
    class MainTurret: MainTurret {
      gunBeg="Usti hlavne";
      gunEnd="Konec hlavne";

      gunnerLeftHandAnimName = "otochlaven";
      gunnerRightHandAnimName = "otochlaven";
      gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
      ejectDeadGunner = 1;
      gunnerForceOptics = 0;
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
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_mk19)
};

// MK19 Weapon Bag
class fp_static_bag_weapon_mk19 : fp_static_bag_base {
  displayName = "Mk. 19";
  class assembleInfo: assembleInfo {
    primary = 1;
    displayName="Mk. 19";
    assembleTo="fp_static_mk19_b";
    base[] = {BAG_COMPATIBLE_ARRAY};
  };
};
