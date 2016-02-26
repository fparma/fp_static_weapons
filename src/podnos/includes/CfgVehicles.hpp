class fp_static_podnos_base : B_Mortar_01_F {
  displayName = "2B14-1 (Podnos)"; //82mm 2B14 Podnos
  model = "\FP_Static_Weapons\podnos\podnos_2b14_82mm";
  picture = "\FP_Static_Weapons\podnos\icon\podnos_2b14_ca.paa";
  icon = "\FP_Static_Weapons\podnos\icon\icomap_podnos_2b14_ca.paa";
  ace_cargo_canLoad = 1;
  ace_cargo_size = 2;
  ace_dragging_canDrag = 1;
  ace_dragging_canCarry = 1;
  class UserActions {};
};

class fp_static_podnos_b : fp_static_podnos_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_podnos)
};

// Podnos Weapon Bag
class fp_static_bag_weapon_podnos : fp_static_bag_base {
  displayName = "2B14-1 'Podnos'";
  class assembleInfo: assembleInfo {
    primary = 1;
    displayName="2B14-1 'Podnos'";
    assembleTo="fp_static_podnos_b";
    base[] = {BAG_COMPATIBLE_ARRAY};
  };
};
