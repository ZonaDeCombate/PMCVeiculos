if (!hasInterface) exitWith {};
private ["_veh","_Light"];
_Light = _this select 0;
_veh = getPos _Light nearestObject "Jonzie_Raptor"; 
_Light setHit ["L svetlo", 1];
while {alive _veh} do 
{	
	waitUntil {_veh animationPhase "AUX_Roof" == 1};
	_Light setHit ["L svetlo", 0];
	waitUntil {_veh animationPhase "AUX_Roof" == 0};
	_Light setHit ["L svetlo", 1];
	sleep 2;
};
_Light setHit ["L svetlo", 1];