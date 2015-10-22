class fp_static_podnos_base : B_Mortar_01_F {
  displayName = "82mm 2B14 Podnos";
  model = "\FP_Static_Weapons\podnos\podnos_2b14_82mm";
  picture = "\FP_Static_Weapons\podnos\icon\podnos_2b14_ca.paa";
  icon = "\FP_Static_Weapons\podnos\icon\icomap_podnos_2b14_ca.paa";
};

class fp_static_podnos_b : fp_static_podnos_base {
  scope = {{ SCOPE.PUBLIC }};
  side = {{ SIDE.WEST }};
  author = "{{ author }}";
  faction = "{{ FACTION.NATO }}";
  crew = "{{ UNIT.NATO }}";
  typicalCargo[] = {"{{ UNIT.NATO }}"};
};