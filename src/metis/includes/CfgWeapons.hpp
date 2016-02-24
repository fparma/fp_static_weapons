class fp_static_weap_metis : missiles_titan {
  scope = PUBLIC;
  displayName = "9K115-2 (Metis-M)";
  canLock = 2;
  class StandardSound {
    begin1[] = {"\FP_Static_Weapons\tow\sounds\tow_fire_3p",1.41254,1,1100};
    soundBegin[] = {"begin1",1};
  };
  magazines[] = {"fp_static_mag_metis"};
  reloadTime=8.0;
};
