class fp_static_mag_50rnd_dshkm : VehicleMagazine {
  scope = {{ SCOPE.PUBLIC }};
  displayName = "50Rnd DshKM Mag";
  ammo = "B_127x108_Ball";
  count = 50;
  initSpeed = 850;
  maxLeadSpeed = 200;
  tracersEvery = 3;
  lastRoundsTracer = 5;
  nameSound = "mgun";
};
class fp_static_mag_150rnd_dshkm : fp_static_mag_50rnd_dshkm {
  displayName = "150Rnd DshKM Mag";
  count = 150;
};