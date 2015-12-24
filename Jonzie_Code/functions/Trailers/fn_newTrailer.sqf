/*
_newTrailer = _this select 0;
_Debug = "Sign_Arrow_Large_F" createVehicleLocal (getpos _newTrailer);
_Debug attachTo [_newTrailer,[0,10,0]];
_Truck = nearestObject [_Debug, "Jonzie_Public_Prime_Mover"];
deleteVehicle _Debug;

_trailerArray pushBack _newTrailer;
_Truck setVariable ["trailers", _trailerArray, true];
*/
private ["_Truck", "_Debug", "_nearest", "_newTrailer"];
_Truck = _this select 0;
_newTrailer = _this select 0;
_TrailerCount = 0;
_trailerArray = [];
_Debug = "Sign_Arrow_Large_F" createVehicleLocal [0,0,100];
_Debug attachTo [_Truck,[0,-10,0]];
while {_TrailerCount <= 10} do 
{
_nearest = nearestObject [_Debug, "Jonzie_Public_Trailer_Base"];
if(_nearest isKindOf "Jonzie_Public_Trailer_Base" && (_nearest distance _Debug) <= 5 && _nearest != _newTrailer && _TrailerCount <= 10 && _nearest animationPhase "Pin" == 1) then {_newTrailer = nearestObject [_Debug, "Jonzie_Public_Trailer_Base"];_trailerArray pushBack _newTrailer; sleep 0.1;_Debug attachTo [_newTrailer,[0,-10,0]];};
_TrailerCount = _TrailerCount + 1;
sleep 0.1;
};
_Truck setVariable ["trailers", _trailerArray, true];
deleteVehicle _Debug;
if (hasInterface && !isServer) then {{[_Truck, _x] spawn Jonzie_fnc_Trailer_Ligths; } forEach _trailerArray;};
{[_Truck, _x] remoteExecCall ["Jonzie_fnc_giveOwner", 2]; } forEach _trailerArray;
[_Truck] spawn Jonzie_fnc_Tow_help;
//_trailerhint = _Truck getVariable "trailers";
//hint format ["%1",_trailerhint];