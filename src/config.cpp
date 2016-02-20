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

#define ASSEMBLE_INFO(bagName, tripodName) \
  class assembleInfo { \
    primary = 0; \
    base = ""; \
    assembleTo = ""; \
    dissasembleTo[] = {bagName, tripodName}; \
    displayName = ""; \
  };

class CfgPatches {
  class FP_Static_Weapons {
    units[] = {
      {% if weapons.m2 %}"fp_static_m2_b","fp_static_m2_minitripod_b",{% endif %}
      {% if weapons.dshkm %}"fp_static_dshkm_b","fp_static_dshkm_minitripod_b",{% endif %}
      {% if weapons.kord %}"fp_static_kord_b","fp_static_kord_high_b",{% endif %}
      {% if weapons.zu23 %}"fp_static_zu23_b",{% endif %}
      {% if weapons.spg9 %}"fp_static_spg9_b",{% endif %}
      {% if weapons.tow %}"fp_static_tow_b",{% endif %}
      {% if weapons.mk19 %}"fp_static_mk19_b",{% endif %}
      {% if weapons.ags30 %}"fp_static_ags30_b",{% endif %}
      {% if weapons.metis %}"fp_static_metis_b",{% endif %}
      {% if weapons.m252 %}"fp_static_m252_b",{% endif %}
      {% if weapons.podnos %}"fp_static_podnos_b",{% endif %}
      {% if weapons.igla %}"fp_static_igla_b",{% endif %}
      {% if weapons.d30 %}"fp_static_d30_b",{% endif %}
      {% if weapons.m119 %}"fp_static_m119_b",{% endif %}
      {% if weapons.search %}"fp_static_searchlight_b"{% endif %}
    };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      {% if weapons.ace_compat %}"ace_main",{% endif %}
      "A3_Static_F_Gamma",
      "A3_CargoPoses_F",
      "A3_Armor_F_Slammer",
      "A3_Weapons_F"
    };
  };
};

{#/* External Class References */#}
class Mode_SemiAuto;

class CfgMovesBasic {
  class DefaultDie;
  class ManActions {
    {% if weapons.m2 %}M2_Gunner = "M2_Gunner";M2_Tripod_Gunner = "M2_Tripod_Gunner";{% endif %}
    {% if weapons.dshkm %}DShKM_Gunner = "DShKM_Gunner";DShKM_Tripod_Gunner = "DShKM_Tripod_Gunner";{% endif %}
    {% if weapons.spg9 %}SPG_Gunner = "SPG_Gunner";{% endif %}
    {% if weapons.zu23 %}ZU23_Gunner = "ZU23_Gunner";{% endif %}
    {% if weapons.m119 %}M119_Commander = "M119_Commander";M119_Gunner = "M119_Gunner";M119_Cargo = "M119_Cargo";{% endif %}
    {% if weapons.tow %}TOW_Gunner = "TOW_Gunner";{% endif %}
    {% if weapons.ags30 %}AGS_Gunner = "AGS_Gunner";{% endif %}
    {% if weapons.kord %}LowKORD_Gunner = "LowKORD_Gunner";KORD_Gunner = "KORD_Gunner";{% endif %}
    {% if weapons.d30 %}D30_Commander = "D30_Commander";D30_Gunner = "D30_Gunner";D30_Cargo = "D30_Cargo";{% endif %}
    {% if weapons.metis %}Metis_Gunner = "Metis_Gunner";{% endif %}
    {% if weapons.mk19 %}MK19_Gunner = "MK19_Gunner";{% endif %}
    {% if weapons.m252 %}{% endif %} {#/* Uses Default MK6Mortar Animations */#}
    {% if weapons.podnos %}{% endif %} {#/* Uses Default MK6Mortar Animations */#}
    {% if weapons.search %}searchlight_Gunner = "searchlight_Gunner";{% endif %}
    {% if weapons.igla %}Igla_Gunner = "Igla_Gunner";{% endif %}
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
    {% if weapons.dshkm %}{% include "src/dshkm/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
    {% if weapons.spg9 %}{% include "src/spg9/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
    {% if weapons.zu23 %}{% include "src/zu23/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
    {% if weapons.m119 %}{% include "src/m119/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
    {% if weapons.tow %}{% include "src/tow/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
    {% if weapons.mk19 %}{% include "src/mk19/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
    {% if weapons.ags30 %}{% include "src/ags30/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
    {% if weapons.kord %}{% include "src/kord/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
    {% if weapons.d30 %}{% include "src/d30/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
    {% if weapons.metis %}{% include "src/metis/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
    {% if weapons.m252 %}{% include "src/m252/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
    {% if weapons.podnos %}{% include "src/podnos/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
    {% if weapons.igla %}{% include "src/igla/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
    {% if weapons.search %}{% include "src/searchlight/includes/CfgMovesMaleSdr.hpp" %}{% endif %}
  };
};

class CfgVehicles {
  class LandVehicle;
  class StaticWeapon : LandVehicle {
    class Turrets;
    class MainTurret;
    class UserActions;
  };

  class Bag_Base;
  class Weapon_Bag_Base: Bag_Base{
    class assembleInfo;
  };

  class StaticCannon : StaticWeapon {class ViewOptics;};
  class StaticATWeapon : StaticWeapon{};
  class StaticMGWeapon : StaticWeapon{};
  class StaticAAWeapon:StaticWeapon {};
  class StaticMortar : StaticWeapon{class ViewOptics;};
  class StaticGrenadeLauncher : StaticWeapon {class ViewOptics;};
  class Mortar_01_base_F : StaticMortar{};
  class B_Mortar_01_F : Mortar_01_base_F{};

  {% if weapons.m2 %}{% include "src/m2/includes/CfgVehicles.hpp" %}{% endif %}
  {% if weapons.dshkm %}{% include "src/dshkm/includes/CfgVehicles.hpp" %}{% endif %}
  {% if weapons.spg9 %}{% include "src/spg9/includes/CfgVehicles.hpp" %}{% endif %}
  {% if weapons.zu23 %}{% include "src/zu23/includes/CfgVehicles.hpp" %}{% endif %}
  {% if weapons.m119 %}{% include "src/m119/includes/CfgVehicles.hpp" %}{% endif %}
  {% if weapons.tow %}{% include "src/tow/includes/CfgVehicles.hpp" %}{% endif %}
  {% if weapons.mk19 %}{% include "src/mk19/includes/CfgVehicles.hpp" %}{% endif %}
  {% if weapons.ags30 %}{% include "src/ags30/includes/CfgVehicles.hpp" %}{% endif %}
  {% if weapons.kord %}{% include "src/kord/includes/CfgVehicles.hpp" %}{% endif %}
  {% if weapons.d30 %}{% include "src/d30/includes/CfgVehicles.hpp" %}{% endif %}
  {% if weapons.metis %}{% include "src/metis/includes/CfgVehicles.hpp" %}{% endif %}
  {% if weapons.m252 %}{% include "src/m252/includes/CfgVehicles.hpp" %}{% endif %}
  {% if weapons.podnos %}{% include "src/podnos/includes/CfgVehicles.hpp" %}{% endif %}
  {% if weapons.igla %}{% include "src/igla/includes/CfgVehicles.hpp" %}{% endif %}
  {% if weapons.search %}{% include "src/searchlight/includes/CfgVehicles.hpp" %}{% endif %}
};

class CfgWeapons {
  class MGunCore;
  class CannonCore;
  class LauncherCore;
  class RocketPods;
  class MGun : MGunCore {};
  class GMG_F: MGun {};
  class GMG_20mm: GMG_F {};
  class LMG_RCWS : MGun{};
  class HMG_127 : LMG_RCWS{};
  class HMG_01 : HMG_127{};
  class HMG_M2 : HMG_01{class manual;};

  class cannon_120mm : CannonCore{};
  class MissileLauncher : LauncherCore{};
  class mortar_155mm_AMOS : CannonCore{};
  class missiles_titan : MissileLauncher{};

  {% if weapons.m2 %}{% include "src/m2/includes/CfgWeapons.hpp" %}{% endif %}
  {% if weapons.dshkm %}{% include "src/dshkm/includes/CfgWeapons.hpp" %}{% endif %}
  {% if weapons.spg9 %}{% include "src/spg9/includes/CfgWeapons.hpp" %}{% endif %}
  {% if weapons.zu23 %}{% include "src/zu23/includes/CfgWeapons.hpp" %}{% endif %}
  {% if weapons.m119 %}{% include "src/m119/includes/CfgWeapons.hpp" %}{% endif %}
  {% if weapons.tow %}{% include "src/tow/includes/CfgWeapons.hpp" %}{% endif %}
  {% if weapons.mk19 %}{% include "src/mk19/includes/CfgWeapons.hpp" %}{% endif %}
  {% if weapons.ags30 %}{% include "src/ags30/includes/CfgWeapons.hpp" %}{% endif %}
  {% if weapons.kord %}{% include "src/kord/includes/CfgWeapons.hpp" %}{% endif %}
  {% if weapons.d30 %}{% include "src/d30/includes/CfgWeapons.hpp" %}{% endif %}
  {% if weapons.metis %}{% include "src/metis/includes/CfgWeapons.hpp" %}{% endif %}
  {% if weapons.m252 %}{% include "src/m252/includes/CfgWeapons.hpp" %}{% endif %}
  {% if weapons.podnos %}{% include "src/podnos/includes/CfgWeapons.hpp" %}{% endif %}
  {% if weapons.igla %}{% include "src/igla/includes/CfgWeapons.hpp" %}{% endif %}
};

class CfgMagazines {
  class Default;
  class CA_Magazine : Default{};
  class CA_LauncherMagazine : CA_Magazine{};
  class VehicleMagazine : CA_Magazine{};

  {% if weapons.m2 %}{% include "src/m2/includes/CfgMagazines.hpp" %}{% endif %}
  {% if weapons.dshkm %}{% include "src/dshkm/includes/CfgMagazines.hpp" %}{% endif %}
  {% if weapons.spg9 %}{% include "src/spg9/includes/CfgMagazines.hpp" %}{% endif %}
  {% if weapons.zu23 %}{% include "src/zu23/includes/CfgMagazines.hpp" %}{% endif %}
  {% if weapons.m119 %}{% include "src/m119/includes/CfgMagazines.hpp" %}{% endif %}
  {% if weapons.tow %}{% include "src/tow/includes/CfgMagazines.hpp" %}{% endif %}
  {% if weapons.mk19 %}{% include "src/mk19/includes/CfgMagazines.hpp" %}{% endif %}
  {% if weapons.ags30 %}{% include "src/ags30/includes/CfgMagazines.hpp" %}{% endif %}
  {% if weapons.kord %}{% include "src/kord/includes/CfgMagazines.hpp" %}{% endif %}
  {% if weapons.d30 %}{% include "src/d30/includes/CfgMagazines.hpp" %}{% endif %}
  {% if weapons.metis %}{% include "src/metis/includes/CfgMagazines.hpp" %}{% endif %}
  {% if weapons.m252 %}{% include "src/m252/includes/CfgMagazines.hpp" %}{% endif %}
  {% if weapons.podnos %}{% include "src/podnos/includes/CfgMagazines.hpp" %}{% endif %}
  {% if weapons.igla %}{% include "src/igla/includes/CfgMagazines.hpp" %}{% endif %}
};

class CfgAmmo {
  class ShellCore;
  class RocketCore;
  class BulletCore;
  class ShellBase : ShellCore{};
  class RocketBase : RocketCore{};
  class BulletBase : BulletCore{};
  class B_127x108_Ball : BulletBase{};
  class B_35mm_AA;
  class M_Titan_AT;

  {% if weapons.m2 %}{% include "src/m2/includes/CfgAmmo.hpp" %}{% endif %}
  {% if weapons.dshkm %}{% include "src/dshkm/includes/CfgAmmo.hpp" %}{% endif %}
  {% if weapons.spg9 %}{% include "src/spg9/includes/CfgAmmo.hpp" %}{% endif %}
  {% if weapons.zu23 %}{% include "src/zu23/includes/CfgAmmo.hpp" %}{% endif %}
  {% if weapons.m119 %}{% include "src/m119/includes/CfgAmmo.hpp" %}{% endif %}
  {% if weapons.tow %}{% include "src/tow/includes/CfgAmmo.hpp" %}{% endif %}
  {% if weapons.mk19 %}{% include "src/mk19/includes/CfgAmmo.hpp" %}{% endif %}
  {% if weapons.ags30 %}{% include "src/ags30/includes/CfgAmmo.hpp" %}{% endif %}
  {% if weapons.kord %}{% include "src/kord/includes/CfgAmmo.hpp" %}{% endif %}
  {% if weapons.d30 %}{% include "src/d30/includes/CfgAmmo.hpp" %}{% endif %}
  {% if weapons.metis %}{% include "src/metis/includes/CfgAmmo.hpp" %}{% endif %}
  {% if weapons.m252 %}{% include "src/m252/includes/CfgAmmo.hpp" %}{% endif %}
  {% if weapons.podnos %}{% include "src/podnos/includes/CfgAmmo.hpp" %}{% endif %}
  {% if weapons.igla %}{% include "src/igla/includes/CfgAmmo.hpp" %}{% endif %}
};
