if (isServer) then {exit};
private ["_veh","_Light"];
_Light = _this select 0;
_veh = getPos _Light nearestObject "Jonzie_Tow_Truck"; 
_Light setHit ["L svetlo", 1];
while {alive _veh} do 
{	
	waitUntil {_veh animationPhase "Beacons_unhide" == 1};
	_Light setHit ["L svetlo", 0];
	waitUntil {_veh animationPhase "Beacons_unhide" == 0};
	_Light setHit ["L svetlo", 1];
	sleep 0.5;
};