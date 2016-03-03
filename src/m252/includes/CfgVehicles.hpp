class fp_static_m252_base : B_Mortar_01_F {
  displayName = "M252"; //81mm M252 Mortar
  model = "\FP_Static_Weapons\m252\81Mortar";
  picture = "\FP_Static_Weapons\m252\icon\mortar_m251_ca.paa";
  icon = "\FP_Static_Weapons\m252\icon\icomap_mortar_m251_ca.paa";
  ace_cargo_canLoad = 1;
  ace_cargo_size = 2;
  ace_dragging_canDrag = 1;
  ace_dragging_canCarry = 1;
  scope = PRIVATE;
  class UserActions {};
};

class fp_static_m252_b : fp_static_m252_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_m252)
};

// M252 Weapon Bag
class fp_static_bag_weapon_m252 : fp_static_bag_base {
  displayName = "M252";
  class assembleInfo: assembleInfo {
    primary = 1;
    displayName="M252";
    assembleTo="fp_static_m252_b";
    base[] = {BAG_COMPATIBLE_ARRAY};
  };
};
