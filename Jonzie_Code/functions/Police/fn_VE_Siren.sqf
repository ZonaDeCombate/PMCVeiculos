if (isDedicated) exitWith {};
private["_car"];
_car = _this select 0;
while {alive _car} do 
{
	waitUntil {_car animationPhase "Primary" == 1};
	if (!IsNull driver _car && _car animationPhase "Primary" == 1 && getdammage _car < 0.9) then 
	{
		_car say3d "aus_polsiren3";
		sleep 5.885;
	} 
	else 
	{
	if (IsNull driver _car && _car animationPhase "Primary" == 1 && getdammage _car < 0.9) then {_car animate ["Primary", 0];};
	waitUntil {!IsNull driver _car && _car animationPhase "Primary" == 1 && getdammage _car < 0.9};
	};
};