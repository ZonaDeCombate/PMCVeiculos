//Connection Assistant By Jonzie
if (isServer) then {exit};
private ["_Dolly", "_Debug", "_Dolly_Connection", "_Dolly_B_trailer", "_Con_Ass", "_speed", "_dir", "_velX", "_velY", "_velZ", "_velXM", "_velYM", "_speedBoost", "_speedBoostR","_velXM2","_velYM2","_dir","_velX2","_velY2","_velZ2","_velXM3","_velYM3","_dir","_velX3","_velY3","_velZ3","_velXM4","_velYM4","_dir","_velX4","_velY4","_velZ4","_velXM5","_velYM5","_dir","_velX5","_velY5","_velZ5","_velXM6","_velYM6","_dir","_velX6","_velY6","_velZ6","_velXM7","_velYM7","_dir","_velX7","_velY7","_velZ7"];
_Dolly = _this select 0;
_Debug = "Sign_Arrow_Large_F" createVehicleLocal (getpos _Dolly);
_Debug attachTo [_Dolly,[0,18.88,0]];
_Dolly_Connection = (getpos _Debug) nearestObject "Jonzie_Public_Trailer_Base";
if(isNull _Dolly_Connection) exitWith{};
_Debug attachTo [_Dolly,[0,-7,0]];
_Dolly_B_trailer = (getpos _Debug) nearestObject "Jonzie_Public_Trailer_Base";
deleteVehicle _Debug;
_speed = speed _Dolly;
_dir = direction _Dolly;
_velX = velocity _Dolly select 0;
_velY = velocity _Dolly select 1;
_velZ = velocity _Dolly select 2;
_velXM = velocityModelSpace _Dolly select 0;
_velYM = velocityModelSpace _Dolly select 1;
_speedBoost = 1.3;
_Con_Ass = true;
while {_Con_Ass} do 
{		
			_jonzie = (getPos _Dolly) distance (getPos _Dolly_Connection);
			_Dolly setVelocity [(((sin(_dir)) * _speedBoost) + _velX),(((cos(_dir)) * _speedBoost) + _velY),_velZ];
			if (_Dolly_Connection animationPhase "Turntable_2" == 1) then {_Dolly_Connection animate ["Turntable_2",0];_Dolly_Connection animate ["Hitch_Hide",0];if(true) exitWith {};};
			if(_Dolly_B_trailer animationPhase "Pin" == 1) then 
			{
				_velXM3 = velocityModelSpace _Dolly_B_trailer select 0;
				_velYM3 = velocityModelSpace _Dolly_B_trailer select 1;
				_velX3 = velocity _Dolly_B_trailer select 0;
				_velY3 = velocity _Dolly_B_trailer select 1;
				_velZ3 = velocity _Dolly_B_trailer select 2;
				_Dolly_B_trailer setVelocity [(((sin(_dir)) * _speedBoost) + _velX3),(((cos(_dir)) * _speedBoost) + _velY3),_velZ3];
			};
			if(((getPos _Dolly) distance (getPos _Dolly_Connection) < 10.6) && _Dolly isKindOf "Jonzie_Dolly_Tri") then  
			{
				_Dolly attachTo [_Dolly_Connection, [0, -10.42, -0.3] ];
				detach _Dolly;
				_Con_Ass = False;
				exit;
			};
			if(((getPos _Dolly) distance (getPos _Dolly_Connection) < 9.6) && _Dolly isKindOf "Jonzie_Dolly_Bi") then  
			{
				_Dolly attachTo [_Dolly_Connection, [0, -9.44, -0.3] ];
				detach _Dolly;
				_Con_Ass = False;
				exit;
			};
			sleep 0.1;
};