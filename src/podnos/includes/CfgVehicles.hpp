class fp_static_podnos_base : B_Mortar_01_F {
  displayName = "2B14-1 'Podnos'"; //82mm 2B14 Podnos
  model = "\FP_Static_Weapons\podnos\podnos_2b14_82mm";
  picture = "\FP_Static_Weapons\podnos\icon\podnos_2b14_ca.paa";
  icon = "\FP_Static_Weapons\podnos\icon\icomap_podnos_2b14_ca.paa";
  class UserActions {};
};

class fp_static_podnos_b : fp_static_podnos_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_podnos, fp_static_bag_tripod_podnos)  
};

// Podnos Weapon Bag
class fp_static_bag_weapon_podnos : fp_static_bag_base {
  displayName = "2B14-1 'Podnos' (Weapon)";
  _generalMacro="FP_M2HBHigh_Ins";
};

// Podnos Tripod
class fp_static_bag_tripod_podnos : fp_static_bag_base {
  displayName = "2B14-1 'Podnos' (Tripod)";
  _generalMacro="RP_M2HBHigh_Ins";
  class assembleInfo: assembleInfo {
    primary = 1;
		displayName="2B14-1 'Podnos'";
		assembleTo="fp_static_podnos_b";
		base[]={"fp_static_bag_weapon_podnos"};
	};
};
