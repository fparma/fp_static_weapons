class MK19_Gunner : Crew {
  file = "\FP_Static_Weapons\mk19\anim\MK19_Gunner.rtm";
  connectTo[]={"Static_Dead",1};  //ToDo: own death anim?
  leftHandIKBeg = true;
  leftHandIKCurve[] = {1};
  leftHandIKEnd = true;
  rightHandIKCurve[] = {1};
  righHandIKBeg = true;
  righHandIKEnd = true;
};
