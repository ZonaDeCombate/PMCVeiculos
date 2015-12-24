if(!hasInterface) exitWith {};
if(!local _this) exitWith {};
private ["_trailer", "_truck"];
_truck = _this select 0;
_trailer = _this select 1;
if((_trailer getVariable "Trailer_Lights") == 1) exitWith {};
sleep 1;
while {alive _trailer && _trailer animationPhase "Pin" == 1} do 
{
		
		if((_trailer getVariable "Trailer_Lights") == 0) then {_trailer setVariable ["Trailer_Lights", 1, TRUE];};
		if(_trailer animationPhase "Pin" == 1 && _trailer isKindOf "Jonzie_Public_Trailer_Base" && _truck animationPhase "Brake_Pedal" > 0.01) then 
		{
			_trailer animate ["Brake_Lights",1];
		};
		if(_trailer animationPhase "Pin" == 1 && _trailer isKindOf "Jonzie_Public_Trailer_Base" && _truck animationPhase "Brake_Pedal" == 0) then 
		{
			_trailer animate ["Brake_Lights",0];
		};		
		if(_trailer animationPhase "Pin" == 1 && _trailer isKindOf "Jonzie_Public_Trailer_Base" && isLightOn _truck) then
		{
			_trailer animate ["Tail_Lights",1];
		};		
		if(_trailer animationPhase "Pin" == 1 && _trailer isKindOf "Jonzie_Public_Trailer_Base" && !isLightOn _truck) then
		{
			_trailer animate ["Tail_Lights",0];
		};
		if(_trailer animationPhase "Pin" == 1 && _trailer isKindOf "Jonzie_Public_Trailer_Base" && _truck animationPhase "Indicator" == 1) then
		{
			_trailer animate ["Indicator",1];
		};
		if(_trailer animationPhase "Pin" == 1 && _trailer isKindOf "Jonzie_Public_Trailer_Base" && _truck animationPhase "Indicator_2" == 1) then
		{
			_trailer animate ["Indicator_2",1];
		};
		if(_trailer animationPhase "Pin" == 1 && _trailer isKindOf "Jonzie_Public_Trailer_Base" && _truck animationPhase "Indicator" == 0) then
		{
			_trailer animate ["Indicator",0];
		};
		if(_trailer animationPhase "Pin" == 1 && _trailer isKindOf "Jonzie_Public_Trailer_Base" && _truck animationPhase "Indicator_2" == 0) then
		{
			_trailer animate ["Indicator_2",0];
		};
	sleep 0.1;
};
_trailer animate ["Brake_Lights",0];
_trailer animate ["Tail_Lights",0];
_trailer animate ["Indicator",0];
_trailer animate ["Indicator_2",0];
_trailer setVariable ["Trailer_Lights", 0, TRUE];