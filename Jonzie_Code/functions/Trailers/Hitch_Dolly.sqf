if (isServer) then {exit};
private ["_veh","_Dolly","_Debug","_trailer"];
_Dolly = _this select 0;
_veh = nearestObject [player, "Jonzie_Public_Prime_Mover"];
_Debug = "Sign_Arrow_Large_F" createVehicleLocal (getpos _Dolly);
_Debug attachTo [_Dolly,[0,10,0]];
_trailer = (getpos _Debug) nearestObject "Jonzie_Public_Trailer_Base";
_trailer animate ["Turntable_2",1];
_trailer animate ["Hitch_Hide",1];
if ((getPos _Debug) distance (getPos _veh) < 4) then 
{
	deleteVehicle _Debug;
	_veh animate ["Turntable_2",1];
	_veh animate ["Hitch_Hide",1];
	sleep 0.5;
};
deleteVehicle _Debug;