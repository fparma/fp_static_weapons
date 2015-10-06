{#/* Constant Declaration*/#}
{%- set SIDE = {
  "NONE" : -1,
  "EAST" : 0,
  "WEST" : 1,
  "IND"  : 2,
  "CIV"  : 3
} -%}
{% set SCOPE = {
  "PRIVATE"   : 0,
  "PROTECTED" : 1,
  "PUBLIC"    : 2
} -%}
{% set FACTION = {
  "NATO" : "BLU_F",
  "CSAT" : "OPF_F",
  "AAF"  : "IND_F"
} -%}
{% set UNIT = {
  "NATO" : "B_Soldier_F",
  "CSAT" : "O_Soldier_F",
  "AAF"  : "I_Soldier_F"
} -%}

class CfgPatches {
  class FP_Static_Weapons {
    units[] = {
      {% if weapons.m2 %}
        "fp_static_m2_b",
        "fp_static_m2_minitripod_b"
      {% endif %}
    };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"A3_Static_F_Gamma","A3_CargoPoses_F","A3_Armor_F_Slammer","A3_Weapons_F"};
  };
};

class CfgMovesBasic {
  class DefaultDie;
  class ManActions {

    {% if weapons.m2 %}
      M2_Gunner = "M2_Gunner";
      M2_Tripod_Gunner = "M2_Tripod_Gunner";
    {% endif %}

	};
};

class CfgMovesMaleSdr : CfgMovesBasic {
  class States {
    class Crew;
    class MG_Gunner_Base : Crew {
      connectTo[] = {"Static_Dead", 1};
      leftHandIKBeg = true;
      leftHandIKCurve[] = {1};
      leftHandIKEnd = true;
      rightHandIKCurve[] = {1};
      righHandIKBeg = 1;
      righHandIKEnd = 1;
    };

    {% if weapons.m2 %}{% include "src/m2/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
  };
};

class CfgVehicles {
  class LandVehicle;
  class StaticWeapon: LandVehicle {
    class Turrets;
    class MainTurret;
  };
  class StaticMGWeapon: StaticWeapon{};

  {% if weapons.m2 %}{% include "src/m2/includes/CfgVehicles.hpp" %}{% endif %}
};