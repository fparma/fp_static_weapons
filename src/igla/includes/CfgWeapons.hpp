class fp_static_weap_igla : missiles_titan {
  scope = PUBLIC;
  displayName = "9K38 'Djigit'";
  canLock = 2;
  class StandardSound {
    begin1[] = {"\FP_Static_Weapons\igla\sounds\igla_fire.ogg",1.41254,1,1100};
    soundBegin[] = {"begin1",1};
  };
  magazines[] = {"fp_static_mag_igla"};
  reloadTime=2;
  magazineReloadTime=10;
};
