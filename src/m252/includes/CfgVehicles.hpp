class fp_static_m252_base : B_Mortar_01_F {
  displayName = "M252 Mortar";
  model = "\FP_Static_Weapons\m252\81Mortar";
  picture = "\FP_Static_Weapons\m252\icon\podnos_2b14_ca.paa";
  icon = "\FP_Static_Weapons\m252\icon\icomap_podnos_2b14_ca.paa";
};

class fp_static_m252_b : fp_static_m252_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};