if (isServer) then {exit};
private["_car"];
_car = _this select 0;
_Spotlight_2  = "Jonzie_Driving_Light_White" createVehicle [0,0,100];
_Spotlight_2 attachTo [_car, [0, 0, 0], "Driving_Light_2"];  
_Spotlight_3  = "Jonzie_Driving_Light_White" createVehicle [0,0,100];
_Spotlight_3 attachTo [_car, [0, 0, 0], "Driving_Light_3"];