if (isServer) then {exit};

private["_car"];
_car = _this select 0;
[_car,1] execVM "\Jonzie_Code\functions\Ambulance\Ambulance_Sirens.sqf";