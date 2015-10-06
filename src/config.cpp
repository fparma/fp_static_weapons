
{#/* Constant Declaration*/#}
{% set SIDE_NONE = "-1" %}
{% set SIDE_EAST = "0" %}
{% set SIDE_WEST = "1" %}
{% set SIDE_RESISTANCE = "2" %}
{% set SIDE_CIVILIAN = "3" %}

{% set SCOPE_PRIVATE = "0" %}
{% set SCOPE_PROTECTED = "1" %}
{% set SCOPE_PUBLIC = "2" %}

class CfgPatches {
  class FP_Static_Weapons {
    units[]= {
      {% if weapons.m2 %}
        "fp_static_m2_aaf",
        "fp_static_m2_minitripod_aaf"
      {% endif %}
    };
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]= {"A3_Static_F_Gamma","A3_CargoPoses_F","A3_Armor_F_Slammer","A3_Weapons_F"};
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