class fp_static_weap_tow : missiles_titan {
  scope = {{ SCOPE.PUBLIC }};
  displayName = "BGM-71 TOW";
  canLock = 2;
  class StandardSound {
    begin1[] = {"\FP_Static_Weapons\tow\sounds\tow_fire_3p",1.41254,1,1100};
    soundBegin[] = {"begin1",1};
  };
  magazines[] = {"fp_static_mag_tow"};
  reloadTime=8.0;
};
