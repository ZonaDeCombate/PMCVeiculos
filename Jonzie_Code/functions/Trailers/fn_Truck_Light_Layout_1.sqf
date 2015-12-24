if (isServer) then {exit};
private["_car"];
_car = _this select 0;
_Spotlight  = "Jonzie_Driving_Light_White" createVehicle [0,0,100];
_Spotlight attachTo [_car, [0, 0, 0], "Driving_Light_1"];
_Spotlight_4  = "Jonzie_Driving_Light_White" createVehicle [0,0,100];
_Spotlight_4 attachTo [_car, [0, 0, 0], "Driving_Light_4"];