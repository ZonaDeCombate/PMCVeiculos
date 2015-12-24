//[_this select 0, ['Door_1_rot', 'Door_2_rot'], 'AutoDoor_trigger'] execVM '\Jonzie_Code\functions\Mic\Auto_Doors.sqf'
//For NerdsRPG - nerdsrpg.com - by Adam Duke // Jones
//#include "defines.hpp"
if(!(isServer)) exitWith {};

_building = _this select 0;
_doors = _this select 1;
_trigger = _this select 2;
_doorPos = _building modelToWorld (_building selectionPosition _trigger);

#define AUTO_DOOR_DIST 5
#define AUTO_DOOR_SLEEP 2
#define AUTO_DOOR_LOOP 1

[] spawn {
	while {true} do 
	{
		_near = nearestObjects [(_doorPos), ["Man"], AUTO_DOOR_DIST]; 
		
		waitUntil{!(isNull(_near))};
		
		if(!(count _near == 0)) then {
			_near = _near select 0;

			if (isPlayer(_near) && (_near distance _doorPos) < AUTO_DOOR_DIST) then 
			{
				{
					_building animate [_x, 1];
				} forEach _doors;
			  
				sleep AUTO_DOOR_SLEEP;
			  
				{
					_building animate [_x, 0];
				} forEach _doors;
			};
		};

		sleep 2;
	};
};