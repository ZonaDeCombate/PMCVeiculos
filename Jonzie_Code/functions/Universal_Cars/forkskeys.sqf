if (typeOf vehicle player != "jonzie_forklift") exitWith {};


titleText ["Keys are Page Up = Forks up, Page Down = Forks down, End = Tilt back, Home = tilt forward", "PLAIN DOWN"];
forksdokeydown =
	{
		_key = _this select 1;
		_return = false;
		
		switch _key do
		{
		 case 201: 
			{
				_val = vehicle player animationPhase "fork_push";
				_valu = _val + 0.01;
				if (_valu >= 1) then {_valu = 1};
				vehicle player animate ["Fork_push",_valu];
				_val_2 = vehicle player animationPhase "Fork";
				_valu_2 = _val_2 + 0.01;
				if (_valu_2 >= 1) then {_valu_2 = 1};
				vehicle player animate ["Fork",_valu_2];
				vehicle player animate ["Ctrl_Fork", 1];
				_return = true;
				{[vehicle player, _x] remoteExecCall ["Jonzie_fnc_giveOwner", 2]; }forEach nearestObjects [vehicle player, ["LandVehicle","Static","ThingX","Air","Ship"], 3];
				
			};
			
		 case 209: 
			{
				_val = vehicle player animationPhase "fork_push";
				_valu = _val - 0.01;
				if (_valu <= 0) then {_valu = 0};
				vehicle player animate ["Fork_push",_valu];
				_val_2 = vehicle player animationPhase "Fork";
				_valu_2 = _val_2 - 0.01;
				if (_valu_2 <= 0) then {_valu_2 = 0};
				vehicle player animate ["Fork",_valu_2];
				vehicle player animate ["Ctrl_Fork", -1];
				_return = true;
			};
			
		 case 199: 
			{
				_val = vehicle player animationPhase "fork_tilt";
				_valu = _val + 0.01;
				if (_valu >= 1) then {_valu = 1};
				vehicle player animate ["Fork_tilt",_valu];
				_return = true;
			};
			
		 case 207: 
			{
				_val = vehicle player animationPhase "fork_tilt";
				_valu = _val - 0.01;
				if (_valu <= 0) then {_valu = 0};
				vehicle player animate ["Fork_tilt",_valu];
				_return = true;
			};
			
			vehicle player animate ["Ctrl_Fork", 0];
		};
		
		_return;
	};


waituntil {!(IsNull (findDisplay 46))};
_forkskeys = (FindDisplay 46) DisplayAddEventHandler ["keydown","_this call forksdokeyDown"];

waitUntil {typeOf vehicle player != "jonzie_forklift"};

(finddisplay 46) displayremoveeventhandler ["keydown",_forkskeys];