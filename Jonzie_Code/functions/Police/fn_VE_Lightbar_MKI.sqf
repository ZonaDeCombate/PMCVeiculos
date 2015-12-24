if (isDedicated) exitWith {};
private["_Lightbar"];
_veh_l = _this select 0;
_Lightbar = "Jonzie_Lightbar_Hwy" createVehicleLocal [0,0,100];
_distance = 0;_height = 0;_LeftRight = 0;_type = typeOf _veh_l;
switch (_type) do
{
	case "Jonzie_Charger": {_height = _height + 1.434;_distance = _distance + -0.4;_LeftRight = _LeftRight + 0;};
	case "Jonzie_Charger_PD": {_height = _height + 1.434;_distance = _distance + -0.4;_LeftRight = _LeftRight + 0;};
	case "Jonzie_Highway": {_height = _height + 2;_distance = _distance + -0.43;_LeftRight = _LeftRight + 0;};
};
_Lightbar attachTo [_veh_l,[_LeftRight,_distance,_height]];
_Blue_Lightsource = "Jonzie_Light_Blue" createVehicleLocal [0,0,100];
_Red_Lightsource = "Jonzie_Light_Red" createVehicleLocal [0,0,100];
while {alive _veh_l} do
{
	if (_veh_l animationPhase "secondary" == 1 && getdammage _veh_l < 0.9) then
	{
		_Lightbar animate ["Lightbar", 1];
		_Blue_Lightsource attachTo [_Lightbar, [0.48, 0.11, -0.24] ];
		sleep 0.2;
		_Blue_Lightsource attachTo [_Lightbar, [0, 0, -100000] ];
		_Red_Lightsource attachTo [_Lightbar, [-0.48, 0.11, -0.24] ];	
		sleep 0.2;
		_Red_Lightsource attachTo [_Lightbar, [0, 0, -100000] ];
	} 
	else 
	{
	_Lightbar animate ["Lightbar", 0];
	waitUntil {(_veh_l animationPhase "secondary" == 1 && getdammage _veh_l < 0.9)};
	};
	_Lightbar animate ["Lightbar", 0];
	waitUntil {(_veh_l animationPhase "secondary" == 1 && getdammage _veh_l < 0.9)};
};