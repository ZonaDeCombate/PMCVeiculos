if (isDedicated) exitWith {};
private["_veh_l"];
_veh_l = _this select 0;
_Blue_Lightsource = "Jonzie_Light_Blue" createVehicleLocal [0,0,100];
_Red_Lightsource = "Jonzie_Light_Blue" createVehicleLocal [0,0,100];
_Blue_Tex = "#(argb,8,8,3)color(0,0,1,1.0,co)";
_Blue_rvmat = "a3\data_f\lights\car_beacon_blue_emit.rvmat";
_Red_Tex = "#(argb,8,8,3)color(1,0,0,1.0,co)";
_Red_rvmat = "a3\data_f\lights\car_beacon_red_emit.rvmat";
_White_Tex = "#(argb,8,8,3)color(1,1,1,1.0,co)";
_White_rvmat = "a3\data_f\lights\car_headlight_emit.rvmat";
_Orange_Tex = "#(argb,8,8,3)color(1,0.501961,0,1.0,co)";
_Orange_rvmat = "a3\data_f\lights\car_beacon_orange_emit.rvmat";
_Off_Tex = "jonzie_carpack\universal_cars\tex\glass.paa";
_Off_rvmat = "a3\data_f\default_alpha.rvmat";
while {alive _veh_l} do
{
	if (_veh_l animationPhase "secondary" == 1 && getdammage _veh_l < 0.9) then
	{
		_veh_l setobjecttexture [8,_Blue_Tex];
		_veh_l setObjectMaterial [8,_Blue_rvmat];
		_veh_l setobjecttexture [10,_White_Tex];
		_veh_l setObjectMaterial [10,_White_rvmat];
		_veh_l setobjecttexture [12,_Orange_Tex];
		_veh_l setObjectMaterial [12,_Orange_rvmat];
		_veh_l setobjecttexture [14,_Red_Tex];
		_veh_l setObjectMaterial [14,_Red_rvmat];			
		_Blue_Lightsource attachTo [_veh_l, [-0.33, 0, -0.01] ];
		sleep 0.09;
		_veh_l setobjecttexture [8,_Off_Tex];
		_veh_l setObjectMaterial [8,_Off_rvmat];
		_veh_l setobjecttexture [10,_Off_Tex];
		_veh_l setObjectMaterial [10,_Off_rvmat];
		_veh_l setobjecttexture [12,_Off_Tex];
		_veh_l setObjectMaterial [12,_Off_rvmat];
		_veh_l setobjecttexture [14,_Off_Tex];
		_veh_l setObjectMaterial [14,_Off_rvmat];	
		_Blue_Lightsource attachTo [_veh_l, [0, 0, -100000] ];
		sleep 0.1;
		_veh_l setobjecttexture [9,_Blue_Tex];
		_veh_l setObjectMaterial [9,_Blue_rvmat];
		_veh_l setobjecttexture [11,_White_Tex];
		_veh_l setObjectMaterial [11,_White_rvmat];
		_veh_l setobjecttexture [13,_Orange_Tex];
		_veh_l setObjectMaterial [13,_Orange_rvmat];
		_veh_l setobjecttexture [15,_Red_Tex];
		_veh_l setObjectMaterial [15,_Red_rvmat];			
		_Red_Lightsource attachTo [_veh_l, [0.33, 0, -0.01] ];
		sleep 0.09;
		_veh_l setobjecttexture [9,_Off_Tex];
		_veh_l setObjectMaterial [9,_Off_rvmat];
		_veh_l setobjecttexture [11,_Off_Tex];
		_veh_l setObjectMaterial [11,_Off_rvmat];
		_veh_l setobjecttexture [13,_Off_Tex];
		_veh_l setObjectMaterial [13,_Off_rvmat];
		_veh_l setobjecttexture [15,_Off_Tex];
		_veh_l setObjectMaterial [15,_Off_rvmat];	
		_Red_Lightsource attachTo [_veh_l, [0, 0, -100000] ];
		sleep 0.1;
	} 
	else 
	{
	waitUntil {(_veh_l animationPhase "secondary" == 1 && getdammage _veh_l < 0.9)};
	};
	waitUntil {(_veh_l animationPhase "secondary" == 1 && getdammage _veh_l < 0.9)};
};