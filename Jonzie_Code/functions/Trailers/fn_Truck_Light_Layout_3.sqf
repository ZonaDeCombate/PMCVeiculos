if (isServer) then {exit};
private["_car"];
_car = _this select 0;
_Spotlight_5  = "Jonzie_Driving_Light_White" createVehicle [0,0,100];
_Spotlight_5 attachTo [_car, [0, 0, 0], "Driving_Light_5"];
_Spotlight_6  = "Jonzie_Driving_Light_White" createVehicle [0,0,100];
_Spotlight_6 attachTo [_car, [0, 0, 0], "Driving_Light_6"];