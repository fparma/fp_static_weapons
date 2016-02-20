class fp_static_ammo_pg9v : RocketBase {
  hit = 320;
  indirectHit = 20;
  indirectHitRange = 1.2;
  maxSpeed = 800;
  typicalSpeed = 700;
  fuseDistance = 12;
  timeToLive = 5;
  thrustTime = 1;
  thrust = 500;
  explosive = 0.8;
  cost = 500;
  model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
  effectsmissileinit = "RocketBackEffectsStaticRPG";
  effectsMissile = "missile2";
};
class fp_static_ammo_og9v : fp_static_ammo_pg9v {
  hit = 140;
  indirectHit = 45;
  indirectHitRange = 10;
};
