class fp_static_mag_pg9v : CA_LauncherMagazine {
  scope = {{ SCOPE.PROTECTED }};
  author = "{{ author }}";
  displayName = "PG-9V - HEAT";
  displayNameShort = "PG-9V - HEAT";
  descriptionShort = "asd";
  ammo = "fp_static_ammo_pg9v";
  mass = 26;
  count=1;
  type = 3 * 256;
  initSpeed = 435;
  nameSound="sabot";
};
class fp_static_mag_og9v : fp_static_mag_pg9v {
  displayName = "OG-9V - HE";
  displayNameShort = "OG-9V - HE";
  initSpeed = 316;
  ammo = "fp_static_ammo_og9v";
  mass = 32;
};