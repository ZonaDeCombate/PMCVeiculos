if(!hasInterface) exitWith {};
params ["_veh_s","_actions"];

while {alive _veh_s} do 
{
	if (!IsNull driver _veh_s && _veh_s animationPhase "Lightbar" == 5 && getdammage _veh_s < 0.9) then 
	{
		if (_veh_s animationPhase "Lightbar" == 5) then 
		{
		if(_veh_s animationPhase "Lightbar" < 4.5) exitWith {};
		_veh_s say3D "Jonzie_Siren";
		sleep 9.89;
		};
	} 
	else 
	{
		if (IsNull driver _veh_s && _veh_s animationPhase "Lightbar" == 5 && getdammage _veh_s < 0.9) then {_veh_s animate ["Lightbar", 4];};
		waitUntil {!IsNull driver _veh_s && _veh_s animationPhase "Lightbar" == 5 && getdammage _veh_s < 0.9};
	};
	waitUntil {!IsNull driver _veh_s && _veh_s animationPhase "Lightbar" == 5 && getdammage _veh_s < 0.9};	
};