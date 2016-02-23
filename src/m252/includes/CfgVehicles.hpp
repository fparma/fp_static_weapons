class fp_static_m252_base : B_Mortar_01_F {
  displayName = "M252"; //81mm M252 Mortar
  model = "\FP_Static_Weapons\m252\81Mortar";
  picture = "\FP_Static_Weapons\m252\icon\mortar_m251_ca.paa";
  icon = "\FP_Static_Weapons\m252\icon\icomap_mortar_m251_ca.paa";
};

class fp_static_m252_b : fp_static_m252_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_m252, fp_static_bag_tripod_m252)  
};

// M252 Weapon Bag
class fp_static_bag_weapon_m252 : fp_static_bag_base {
  displayName = "M252 (Weapon)";
  _generalMacro="FP_M2HBHigh_Ins";
};

// M252 Tripod
class fp_static_bag_tripod_m252 : fp_static_bag_base {
  displayName = "M252 (Tripod)";
  _generalMacro="RP_M2HBHigh_Ins";
  class assembleInfo: assembleInfo {
    primary = 1;
		displayName="M252";
		assembleTo="fp_static_m252_b";
		base[]={"fp_static_bag_weapon_m252"};
	};
};
