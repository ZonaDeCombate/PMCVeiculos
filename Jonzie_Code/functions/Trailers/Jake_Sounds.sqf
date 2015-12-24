if (isServer) then {exit};
private ["_veh", "_Debug"];
_veh = _this;
_Debug  = "Land_PenBlack_F" createVehicleLocal [0,0,0];
_Debug attachTo [_veh, [0, 0, 0]];
_Debug attachTo [_veh, [0, 0, 0], "Auto_Jake"];
while {alive _veh} do 
{		
	if(_veh animationPhase "IndicatorRPM" > 700 && _veh animationPhase "reverse_light" > 0 && _veh animationPhase "AUX_Jake" == 1 && _veh animationPhase "Accelerator_Pedal" == 0) then
	{
	_Debug say3d "Jonzie_Jake_Brake";
	sleep 19.3;
	};
	waitUntil {_veh animationPhase "IndicatorRPM" > 700 && _veh animationPhase "reverse_light" > 0 && _veh animationPhase "AUX_Jake" == 1 && _veh animationPhase "Accelerator_Pedal" == 0}; 
};