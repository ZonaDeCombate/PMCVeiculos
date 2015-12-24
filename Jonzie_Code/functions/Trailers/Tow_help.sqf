if (isServer) then {exit};
private ["_veh", "_Debug", "_A_trailer", "_B_trailer", "_C_trailer", "_D_trailer", "_E_trailer", "_F_trailer", "_speed", "_dir", "_velX", "_velY", "_velZ", "_velXM", "_velYM", "_speedBoost", "_speedBoostR","_velXM2","_velYM2","_dir2","_velX2","_velY2","_velZ2","_velXM3","_velYM3","_dir3","_velX3","_velY3","_velZ3","_velXM4","_velYM4","_dir4","_velX4","_velY4","_velZ4","_velXM5","_velYM5","_dir5","_velX5","_velY5","_velZ5","_velXM6","_velYM6","_dir6","_velX6","_velY6","_velZ6","_velXM7","_velYM7","_dir7","_velX7","_velY7","_velZ7"];
_veh = nearestObject [player, "Jonzie_Public_Prime_Mover"];
_veh_damage = getDammage _veh; 
_Debug = "Sign_Arrow_Large_F" createVehicleLocal (getpos _veh);
_Debug attachTo [_veh,[0,-7,0]];
_A_trailer = (getpos _Debug) nearestObject "Jonzie_Trailer_Base";
if(isNull _A_trailer) exitWith{};
_Debug attachTo [_A_trailer,[0,-7,0]];
_B_trailer = (getpos _Debug) nearestObject "Jonzie_Trailer_Base";
_Debug attachTo [_B_trailer,[0,-7,0]];
_C_trailer = (getpos _Debug) nearestObject "Jonzie_Trailer_Base";
_Debug attachTo [_C_trailer,[0,-7,0]];
_D_trailer = (getpos _Debug) nearestObject "Jonzie_Trailer_Base";
_Debug attachTo [_D_trailer,[0,-7,0]];
_E_trailer = (getpos _Debug) nearestObject "Jonzie_Trailer_Base";
_Debug attachTo [_E_trailer,[0,-7,0]];
_F_trailer = (getpos _Debug) nearestObject "Jonzie_Trailer_Base";
[[owner _veh, _A_trailer],"Server_fnc_giveOwner",false,false] call BIS_fnc_MP;
[[owner _veh, _B_trailer],"Server_fnc_giveOwner",false,false] call BIS_fnc_MP;
[[owner _veh, _C_trailer],"Server_fnc_giveOwner",false,false] call BIS_fnc_MP;
[[owner _veh, _D_trailer],"Server_fnc_giveOwner",false,false] call BIS_fnc_MP;
[[owner _veh, _E_trailer],"Server_fnc_giveOwner",false,false] call BIS_fnc_MP;
[[owner _veh, _F_trailer],"Server_fnc_giveOwner",false,false] call BIS_fnc_MP;
deleteVehicle _Debug;
_speed = speed _veh;
_dir = direction _veh;
_velX = velocity _veh select 0;
_velY = velocity _veh select 1;
_velZ = velocity _veh select 2;
_velXM = velocityModelSpace _veh select 0;
_velYM = velocityModelSpace _veh select 1;
_speedBoost = 0.3;
_speedBoostR = -1.0;
_A_trailer setObjectTexture [0, "#(argb,8,8,3)color(0,1,0,1.0,CO)"];_B_trailer setObjectTexture [0, "#(argb,8,8,3)color(0,1,0,1.0,CO)"];_C_trailer setObjectTexture [0, "#(argb,8,8,3)color(0,1,0,1.0,CO)"];_D_trailer setObjectTexture [0, "#(argb,8,8,3)color(0,1,0,1.0,CO)"];_E_trailer setObjectTexture [0, "#(argb,8,8,3)color(0,1,0,1.0,CO)"];_F_trailer setObjectTexture [0, "#(argb,8,8,3)color(0,1,0,1.0,CO)"];
if (_veh animationPhase "Debug" == 1) exitWith{};
_A_trailer setObjectTexture [0, "#(argb,8,8,3)color(1,1,0,1.0,CO)"];_B_trailer setObjectTexture [0, "#(argb,8,8,3)color(1,1,0,1.0,CO)"];_C_trailer setObjectTexture [0, "#(argb,8,8,3)color(1,1,0,1.0,CO)"];_D_trailer setObjectTexture [0, "#(argb,8,8,3)color(1,1,0,1.0,CO)"];_E_trailer setObjectTexture [0, "#(argb,8,8,3)color(1,1,0,1.0,CO)"];_F_trailer setObjectTexture [0, "#(argb,8,8,3)color(1,1,0,1.0,CO)"];
_veh execVM "\Jonzie_Code\functions\Trailers\Trailer_Ligths.sqf";
sleep 0.2;
_veh setDamage _veh_damage;
_veh animate ["Debug", 1];
while {alive _veh} do 
{		
		_A_trailer setObjectTexture [0, "#(argb,8,8,3)color(1,0,0,1.0,CO)"];_B_trailer setObjectTexture [0, "#(argb,8,8,3)color(1,0,0,1.0,CO)"];_C_trailer setObjectTexture [0, "#(argb,8,8,3)color(1,0,0,1.0,CO)"];_D_trailer setObjectTexture [0, "#(argb,8,8,3)color(1,0,0,1.0,CO)"];_E_trailer setObjectTexture [0, "#(argb,8,8,3)color(1,0,0,1.0,CO)"];_F_trailer setObjectTexture [0, "#(argb,8,8,3)color(1,0,0,1.0,CO)"];
		if(_A_trailer animationPhase "Pin" == 1 && _veh isKindOf "Jonzie_Public_Prime_Mover" && isTouchingGround _veh && _veh animationPhase "IndicatorSpeed" < 2) then
		{
			if (_A_trailer animationPhase "Pin" == 1 && (getPos _A_trailer) distance (getPos _veh) > 75) then {_A_trailer animate ["Pin", 0];_A_trailer animate ["Turntable",0];_A_trailer animate ["Hitch_Hide",0];_veh animate ["Turntable_2",0];_veh animate ["Hitch_Hide",0];};
			if(_A_trailer animationPhase "Pin" == 1 && _veh animationPhase "IndicatorRPM" > 1000 && _veh animationPhase "IndicatorSpeed" < 2) then 
			{
				_velXM2 = velocityModelSpace _A_trailer select 0;
				_velYM2 = velocityModelSpace _A_trailer select 1;
				_dir2 = direction _A_trailer;
				_velX2 = velocity _A_trailer select 0;
				_velY2 = velocity _A_trailer select 1;
				_velZ2 = velocity _A_trailer select 2;
				_veh setVelocity [(((sin(_dir)) * _speedBoost) + _velX),(((cos(_dir)) * _speedBoost) + _velY),_velZ];
				_A_trailer setVelocity [(((sin(_dir2)) * _speedBoost) + _velX2),(((cos(_dir2)) * _speedBoost) + _velY2),_velZ2];
			};
			if(_veh animationPhase "reverse_light" == -1 && _veh animationPhase "IndicatorRPM" > 1000 && _veh animationPhase "IndicatorSpeed" < 2) then 
			{
				_velXM2 = velocityModelSpace _A_trailer select 0;
				_velYM2 = velocityModelSpace _A_trailer select 1;
				_dir2 = direction _A_trailer;
				_velX2 = velocity _A_trailer select 0;
				_velY2 = velocity _A_trailer select 1;
				_velZ2 = velocity _A_trailer select 2;
				_A_trailer setVelocity [(((sin(_dir2)) * _speedBoostR) + _velX2),(((cos(_dir2)) * _speedBoostR) + _velY2),_velZ2];
				_veh setVelocity [(((sin(_dir)) * _speedBoostR) + _velX),(((cos(_dir)) * _speedBoostR) + _velY),_velZ];
			};
			if(_B_trailer animationPhase "Pin" == 1 && _veh animationPhase "IndicatorRPM" > 1000 && _veh animationPhase "IndicatorSpeed" < 2) then 
			{
				_velXM3 = velocityModelSpace _B_trailer select 0;
				_velYM3 = velocityModelSpace _B_trailer select 1;
				_dir3 = direction _B_trailer;
				_velX3 = velocity _B_trailer select 0;
				_velY3 = velocity _B_trailer select 1;
				_velZ3 = velocity _B_trailer select 2;
				_B_trailer setVelocity [(((sin(_dir3)) * _speedBoost) + _velX3),(((cos(_dir3)) * _speedBoost) + _velY3),_velZ3];
			};
			if(_B_trailer animationPhase "Pin" == 1 && _veh animationPhase "reverse_light" == -1 && _veh animationPhase "IndicatorRPM" > 1000 && _veh animationPhase "IndicatorSpeed" < 2) then 
			{
				_velXM3 = velocityModelSpace _B_trailer select 0;
				_velYM3 = velocityModelSpace _B_trailer select 1;
				_dir3 = direction _B_trailer;
				_velX3 = velocity _B_trailer select 0;
				_velY3 = velocity _B_trailer select 1;
				_velZ3 = velocity _B_trailer select 2;
				_B_trailer setVelocity [(((sin(_dir3)) * _speedBoostR) + _velX3),(((cos(_dir3)) * _speedBoostR) + _velY3),_velZ3];
			};
			if(_C_trailer animationPhase "Pin" == 1 && _veh animationPhase "IndicatorRPM" > 1000 && _veh animationPhase "IndicatorSpeed" < 2) then 
			{
				_velXM4 = velocityModelSpace _C_trailer select 0;
				_velYM4 = velocityModelSpace _C_trailer select 1;
				_dir4 = direction _C_trailer;
				_velX4 = velocity _C_trailer select 0;
				_velY4 = velocity _C_trailer select 1;
				_velZ4 = velocity _C_trailer select 2;
				_C_trailer setVelocity [(((sin(_dir4)) * _speedBoost) + _velX4),(((cos(_dir4)) * _speedBoost) + _velY4),_velZ4];
			};
			if(_C_trailer animationPhase "Pin" == 1 && _veh animationPhase "reverse_light" == -1 && _veh animationPhase "IndicatorRPM" > 1000 && _veh animationPhase "IndicatorSpeed" < 2) then 
			{
				_velXM4 = velocityModelSpace _C_trailer select 0;
				_velYM4 = velocityModelSpace _C_trailer select 1;
				_dir4 = direction _C_trailer;
				_velX4 = velocity _C_trailer select 0;
				_velY4 = velocity _C_trailer select 1;
				_velZ4 = velocity _C_trailer select 2;
				_C_trailer setVelocity [(((sin(_dir4)) * _speedBoostR) + _velX4),(((cos(_dir4)) * _speedBoostR) + _velY4),_velZ4];
			};
			if(_D_trailer animationPhase "Pin" == 1 && _veh animationPhase "IndicatorRPM" > 1000 && _veh animationPhase "IndicatorSpeed" < 2) then 
			{
				_velXM5 = velocityModelSpace _D_trailer select 0;
				_velYM5 = velocityModelSpace _D_trailer select 1;
				_dir5 = direction _D_trailer;
				_velX5 = velocity _D_trailer select 0;
				_velY5 = velocity _D_trailer select 1;
				_velZ5 = velocity _D_trailer select 2;
				_D_trailer setVelocity [(((sin(_dir5)) * _speedBoost) + _velX5),(((cos(_dir5)) * _speedBoost) + _velY5),_velZ5];
			};
			if(_D_trailer animationPhase "Pin" == 1 && _veh animationPhase "reverse_light" == -1 && _veh animationPhase "IndicatorRPM" > 1000 && _veh animationPhase "IndicatorSpeed" < 2) then 
			{
				_velXM5 = velocityModelSpace _D_trailer select 0;
				_velYM5 = velocityModelSpace _D_trailer select 1;
				_dir5 = direction _D_trailer;
				_velX5 = velocity _D_trailer select 0;
				_velY5 = velocity _D_trailer select 1;
				_velZ5 = velocity _D_trailer select 2;
				_D_trailer setVelocity [(((sin(_dir5)) * _speedBoostR) + _velX5),(((cos(_dir5)) * _speedBoostR) + _velY5),_velZ5];
			};
			if(_E_trailer animationPhase "Pin" == 1 && _veh animationPhase "IndicatorRPM" > 1000 && _veh animationPhase "IndicatorSpeed" < 2) then 
			{
				_velXM6 = velocityModelSpace _E_trailer select 0;
				_velYM6 = velocityModelSpace _E_trailer select 1;
				_dir6 = direction _E_trailer;
				_velX6 = velocity _E_trailer select 0;
				_velY6 = velocity _E_trailer select 1;
				_velZ6 = velocity _E_trailer select 2;
				_E_trailer setVelocity [(((sin(_dir6)) * _speedBoost) + _velX6),(((cos(_dir6)) * _speedBoost) + _velY6),_velZ6];
			};
			if(_E_trailer animationPhase "Pin" == 1 && _veh animationPhase "reverse_light" == -1 && _veh animationPhase "IndicatorRPM" > 1000 && _veh animationPhase "IndicatorSpeed" < 2) then 
			{
				_velXM6 = velocityModelSpace _E_trailer select 0;
				_velYM6 = velocityModelSpace _E_trailer select 1;
				_dir6 = direction _E_trailer;
				_velX6 = velocity _E_trailer select 0;
				_velY6 = velocity _E_trailer select 1;
				_velZ6 = velocity _E_trailer select 2;
				_E_trailer setVelocity [(((sin(_dir6)) * _speedBoostR) + _velX6),(((cos(_dir6)) * _speedBoostR) + _velY6),_velZ6];
			};
			if(_F_trailer animationPhase "Pin" == 1 && _veh animationPhase "IndicatorRPM" > 1000 && _veh animationPhase "IndicatorSpeed" < 2) then 
			{
				_velXM7 = velocityModelSpace _F_trailer select 0;
				_velYM7 = velocityModelSpace _F_trailer select 1;
				_dir7 = direction _F_trailer;
				_velX7 = velocity _F_trailer select 0;
				_velY7 = velocity _F_trailer select 1;
				_velZ7 = velocity _F_trailer select 2;
				_F_trailer setVelocity [(((sin(_dir7)) * _speedBoost) + _velX7),(((cos(_dir7)) * _speedBoost) + _velY7),_velZ7];
			};
			if(_F_trailer animationPhase "Pin" == 1 && _veh animationPhase "reverse_light" == -1 && _veh animationPhase "IndicatorRPM" > 1000 && _veh animationPhase "IndicatorSpeed" < 2) then 
			{
				_velXM7 = velocityModelSpace _F_trailer select 0;
				_velYM7 = velocityModelSpace _F_trailer select 1;
				_dir7 = direction _F_trailer;
				_velX7 = velocity _F_trailer select 0;
				_velY7 = velocity _F_trailer select 1;
				_velZ7 = velocity _F_trailer select 2;
				_F_trailer setVelocity [(((sin(_dir7)) * _speedBoostR) + _velX7),(((cos(_dir7)) * _speedBoostR) + _velY7),_velZ7];
			};			
	};
	sleep 1.5;
	if(_A_trailer animationPhase "Pin" == 0 ) exitWith {execVM "\Jonzie_Code\functions\Trailers\Trailers_End.sqf"; _veh animate ["Debug", 0];};
};