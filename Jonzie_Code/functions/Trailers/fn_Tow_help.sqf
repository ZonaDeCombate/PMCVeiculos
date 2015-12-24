if(!hasInterface) exitWith {};
if(!local _this) exitWith {};
private ["_Truck", "_Debug", "_x", "_speed", "_dir", "_velX", "_velY", "_velZ", "_velXM", "_velYM", "_speedBoost", "_speedBoostR","_velXM2","_velYM2","_dir2","_velX2","_velY2","_velZ2"];
_Truck = _this select 0;
_speedBoost = 0.2;
_speedBoostR = -0.2;
_speedBoostJake = -0.25;
sleep 1;
while {isEngineOn _Truck} do 
{
	{
		if(_x animationPhase "Pin" == 1 && _Truck animationPhase "reverse_light" > 0 && _Truck animationPhase "Accelerator_Pedal" > 0 && _Truck animationPhase "IndicatorSpeed" < 2) then 
		{
			_speed = speed _Truck;
			_dir = direction _Truck;
			_velX = velocity _Truck select 0;
			_velY = velocity _Truck select 1;
			_velZ = velocity _Truck select 2;
			_velXM = velocityModelSpace _Truck select 0;
			_velYM = velocityModelSpace _Truck select 1;
			_velXM2 = velocityModelSpace _x select 0;
			_velYM2 = velocityModelSpace _x select 1;
			_dir2 = direction _x;
			_velX2 = velocity _x select 0;
			_velY2 = velocity _x select 1;
			_velZ2 = velocity _x select 2;
			_Truck setVelocity [(((sin(_dir)) * _speedBoost) + _velX),(((cos(_dir)) * _speedBoost) + _velY),_velZ];
			_x setVelocity [(((sin(_dir2)) * _speedBoost) + _velX2),(((cos(_dir2)) * _speedBoost) + _velY2),_velZ2];
		};
		if(_x animationPhase "Pin" == 1 && _Truck animationPhase "reverse_light" == -1 && _Truck animationPhase "Accelerator_Pedal" > 0 && _Truck animationPhase "IndicatorSpeed" < 2) then
		{
			_speed = speed _Truck;
			_dir = direction _Truck;
			_velX = velocity _Truck select 0;
			_velY = velocity _Truck select 1;
			_velZ = velocity _Truck select 2;
			_velXM = velocityModelSpace _Truck select 0;
			_velYM = velocityModelSpace _Truck select 1;
			_velXM2 = velocityModelSpace _x select 0;
			_velYM2 = velocityModelSpace _x select 1;
			_dir2 = direction _x;
			_velX2 = velocity _x select 0;
			_velY2 = velocity _x select 1;
			_velZ2 = velocity _x select 2;
			_Truck setVelocity [(((sin(_dir)) * _speedBoost) + _velX),(((cos(_dir)) * _speedBoostR) + _velY),_velZ];
			_x setVelocity [(((sin(_dir2)) * _speedBoostR) + _velX2),(((cos(_dir2)) * _speedBoostR) + _velY2),_velZ2];
		};
		if(_Truck animationPhase "IndicatorRPM" > 700 && _Truck animationPhase "reverse_light" > 0 && _Truck animationPhase "AUX_Jake" == 1 && _Truck animationPhase "Accelerator_Pedal" == 0) then
		{
			_speed = speed _Truck;
			_dir = direction _Truck;
			_velX = velocity _Truck select 0;
			_velY = velocity _Truck select 1;
			_velZ = velocity _Truck select 2;
			_velXM = velocityModelSpace _Truck select 0;
			_velYM = velocityModelSpace _Truck select 1;
			_velXM2 = velocityModelSpace _x select 0;
			_velYM2 = velocityModelSpace _x select 1;
			_dir2 = direction _x;
			_velX2 = velocity _x select 0;
			_velY2 = velocity _x select 1;
			_velZ2 = velocity _x select 2;
			_x setVelocity [(((sin(_dir2)) * _speedBoostJake) + _velX2),(((cos(_dir2)) * _speedBoostJake) + _velY2),_velZ2];
			_Truck setVelocity [(((sin(_dir)) * _speedBoostJake) + _velX),(((cos(_dir)) * _speedBoostJake) + _velY),_velZ];		
		};
		_Distance = (getPos _Truck) distance (getPos _x);
		if(_x animationPhase "Pin" == 1 && _Distance > 60) then {[_x] execVM "\Jonzie_Code\functions\Trailers\Unhitch.sqf";sleep 0.6;_Truck animate ["Hitch_Hide",0];};
	}forEach (_Truck getVariable "trailers");
	waitUntil {!IsNull driver _Truck && _Truck animationPhase "IndicatorSpeed" < 2 && getdammage _Truck < 0.9 && _Truck animationPhase "Accelerator_Pedal" > 0};
	
	sleep 0.1;
};