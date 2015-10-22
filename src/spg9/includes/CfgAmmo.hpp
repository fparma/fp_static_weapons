class fp_static_ammo_pg9v : RocketBase {
	{% if rhs_compat %}
		{#/* This may be Overly Strong. testing required. Maybe turn down the Damage */#}
		ais_ce_penetrators[] = {"rhs_ammo_pg15v_penetrator"};
	{% endif %}
	
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
	{% if rhs_compat %}
		ais_ce_penetrators[] = {};
	{% endif %}
	
	hit = 140;
	indirectHit = 45;
	indirectHitRange = 10;
};