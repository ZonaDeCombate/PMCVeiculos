if (isServer) then {exit};
private ["_veh", "_Debug", "_trailer", "_trailer2"];
_trailer = _this select 0;
_Debug = "Sign_Arrow_Large_F" createVehicleLocal (getpos _trailer);
_Debug attachTo [_trailer,[0,10,0]];
_veh = nearestObject [_Debug, "Jonzie_Prime_Mover"];
_trailer2 = (getpos _Debug) nearestObject "Jonzie_Public_Trailer_Base";

if ((getPos _Debug) distance (getPos _veh) < 4) then 
{
	deleteVehicle _Debug;
	sleep 0.5;
	_veh animate ["Turntable_2",0];
	_veh animate ["Hitch_Hide",0];
}else 
{
	deleteVehicle _Debug;
	sleep 0.5;
	_trailer2 animate ["Turntable_2",0];
	_trailer2 animate ["Hitch_Hide",0];
};