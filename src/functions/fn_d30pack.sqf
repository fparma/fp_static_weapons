[_this select 0] spawn {
  private ["_t"];
  _t=_this select 0;
  if (_t animationPhase "rightT" == 0) then {
    {_x action ["Eject", _t];unassignVehicle _x}foreach (crew _t);
    _t lock true;
    {_t animate [_x select 0, _x select 1]}foreach [["rightT",2.3],["leftT",0],["szpilki",0.7]];
    sleep 2;
    {_t animate [_x select 0, _x select 1]}foreach [["rightW",-1.1],["leftW",-1.1]];
    _t animate ["mainTurretT",-(_t animationPhase "mainTurret")];
    _t animate ["mainGunT",-(_t animationPhase "mainGun")-0.165];
  } else {
    {_t animate [_x select 0, _x select 1]}foreach [["rightW",-1.7],["leftW",-1.7]];
    sleep 1;
    {_t animate [_x select 0, _x select 1]}foreach [["rightT",0],["leftT",-2.3]];
    sleep 3;
    _t lock false;
    _t animate ["szpilki",0];
    _t animate ["mainTurretT",0];
    _t animate ["mainGunT",0];
  };
};
