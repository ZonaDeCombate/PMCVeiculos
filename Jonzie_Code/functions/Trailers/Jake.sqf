if (isServer) then {exit};
private ["_veh"];
_veh = _this;
while {alive _veh} do 
{		
	if(_veh animationPhase "IndicatorRPM" < 3000 && _veh animationPhase "AUX_Jake" == 1) then
	{
		_veh animate ["Jake", 0];
	};
	if(_veh animationPhase "IndicatorRPM" > 3000 && _veh animationPhase "AUX_Jake" == 1) then
	{
		_veh animate ["Jake", 1];
	};
	sleep 1;
	waitUntil {_veh animationPhase "IndicatorRPM" > 700 && _veh animationPhase "reverse_light" > 0 && _veh animationPhase "AUX_Jake" == 1 && _veh animationPhase "Accelerator_Pedal" == 0}; 
};