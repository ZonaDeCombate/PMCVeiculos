if (isServer) then {exit};
private["_car"];
_car = _this select 0;
_Spotlight  = "Jonzie_Driving_Lights_Raptor" createVehicleLocal [0,0,100];
_Spotlight attachTo [_car, [0, 0, 0], "Light_1"];
_Spotlight_2  = "Jonzie_Driving_Lights_Raptor" createVehicleLocal [0,0,100];
_Spotlight_2 attachTo [_car, [0, 0, 0], "Light_2"];  
_Spotlight_3  = "Jonzie_Driving_Lights_Raptor" createVehicleLocal [0,0,100];
_Spotlight_3 attachTo [_car, [0, 0, 0], "Light_3"];  
_Spotlight_4  = "Jonzie_Driving_Lights_Raptor" createVehicleLocal [0,0,100];
_Spotlight_4 attachTo [_car, [0, 0, 0], "Light_4"];
_Spotlight_5  = "Jonzie_Driving_Lights_Raptor" createVehicleLocal [0,0,100];
_Spotlight_5 attachTo [_car, [0, 0, 0], "Light_5"];
_Spotlight_6  = "Jonzie_Driving_Lights_Raptor" createVehicleLocal [0,0,100];
_Spotlight_6 attachTo [_car, [0, 0, 0], "Light_6"];  