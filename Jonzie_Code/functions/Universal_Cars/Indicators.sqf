if (vehicle player isKindOf "Man") exitWith {};
if (driver vehicle player != player) exitWith {};


Indicatordokeydown =
	{
		_key = _this select 1;
		_return = false;
		
		switch _key do
		{
		 case 16: // Q 
			{
				if (vehicle player animationPhase "Indicator" == 0) then {vehicle player animate ["Indicator",0];vehicle player animate ["Indicator_2",0];vehicle player animate ["Indicator_Stalk",0];vehicle player animate ["Indicator",1];vehicle player animate ["Indicator_2",0];vehicle player animate ["Indicator_Stalk",-1];};
				if (vehicle player animationPhase "Indicator" == 1) then {vehicle player animate ["Indicator",0];vehicle player animate ["Indicator_2",0];vehicle player animate ["Indicator_Stalk",0];vehicle player animate ["Indicator",0];vehicle player animate ["Indicator_2",0];vehicle player animate ["Indicator_Stalk",0];};
			};
			
		 case 18: // E 
			{
				if (vehicle player animationPhase "Indicator_2" == 0) then {vehicle player animate ["Indicator",0];vehicle player animate ["Indicator_2",0];vehicle player animate ["Indicator_Stalk",0];vehicle player animate ["Indicator_2",1];vehicle player animate ["Indicator",0];vehicle player animate ["Indicator_Stalk",1];};
				if (vehicle player animationPhase "Indicator_2" == 1) then {vehicle player animate ["Indicator",0];vehicle player animate ["Indicator_2",0];vehicle player animate ["Indicator_Stalk",0];vehicle player animate ["Indicator_2",0];vehicle player animate ["Indicator",0];vehicle player animate ["Indicator_Stalk",0];};
			};
			
		 case 19: // R 
			{
				if (vehicle player animationPhase "Indicator" == 0 && vehicle player animationPhase "Indicator_2" == 0) then {vehicle player animate ["Indicator",0];vehicle player animate ["Indicator_2",0];vehicle player animate ["Indicator_Stalk",0];vehicle player animate ["Indicator",1];vehicle player animate ["Indicator_2",1];vehicle player animate ["Indicator_Stalk",0];vehicle player animate ["Indicator_Stalk",0];};
				if (vehicle player animationPhase "Indicator" == 1 && vehicle player animationPhase "Indicator_2" == 1 ) then {vehicle player animate ["Indicator",0];vehicle player animate ["Indicator_2",0];vehicle player animate ["Indicator_Stalk",0];vehicle player animate ["Indicator",0];vehicle player animate ["Indicator_2",0];vehicle player animate ["Indicator_Stalk",0];};
			};
		};
		_return;
	};

waituntil {!(IsNull (findDisplay 46))};
_Indicators = (FindDisplay 46) DisplayAddEventHandler ["keydown","_this call Indicatordokeydown"];

waitUntil {vehicle player isKindOf "Man"};

(finddisplay 46) displayremoveeventhandler ["keydown",_Indicators];