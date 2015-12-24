if (typeOf vehicle player != "Jonzie_CH613_Bucket") exitWith {};


titleText ["Keys are Page Up = Forks up, Page Down = Forks down, End = Tilt back, Home = tilt forward", "PLAIN DOWN"];


forksdokeydown =
	{
		_key = _this select 1;
		_return = false;
		
		switch _key do
		{
		 case 72: // NUM_8 
			{
				_val = vehicle player animationPhase "Boom_1";
				_valu = _val + 0.01;
				if (_valu >= 6.3) then {_valu = 6.3};
				vehicle player animate ["Boom_1",_valu];
				_val_2 = vehicle player animationPhase "Ram_1";
				_valu_2 = _val_2 + 0.1;
				if (_valu_2 >= 6.3) then {_valu_2 = 6.3};
				vehicle player animate ["Ram_1",_valu_2];
				_val_3 = vehicle player animationPhase "Ram_1_push";
				_valu_3 = _val_2 + 0.1;
				if (_valu_3 >= 6.3) then {_valu_3 = 6.3};
				vehicle player animate ["Ram_1_push",_valu_3];
				_return = true;
			};
			
		 case 80: // NUM_2 
			{
				_val = vehicle player animationPhase "Boom_1";
				_valu = _val - 0.01;
				if (_valu <= 0) then {_valu = 0};
				vehicle player animate ["Boom_1",_valu];
				_val_2 = vehicle player animationPhase "Ram_1";
				_valu_2 = _val_2 - 0.01;
				if (_valu_2 <= 0) then {_valu_2 = 0};
				vehicle player animate ["Ram_1",_valu_2];
				_val_3 = vehicle player animationPhase "Ram_1_push";
				_valu_3 = _val_3 - 0.01;
				if (_valu_3 <= 0) then {_valu_3 = 0};
				vehicle player animate ["Ram_1_push",_valu_3];
				_return = true;
			};
			
		 case 75: // NUM_4 
			{
				_val = vehicle player animationPhase "Rotation";
				_valu = _val + 0.01;
				if (_valu >= 6.3) then {_valu = 6.3};
				vehicle player animate ["Rotation",_valu];
				_return = true;
			};
			
		 case 77: // NUM_6 
			{
				_val = vehicle player animationPhase "Rotation";
				_valu = _val - 0.01;
				if (_valu <= 0) then {_valu = 0};
				vehicle player animate ["Rotation",_valu];
				_return = true;
			};
			
		 case 73: // NUM_9
			{
				_val = vehicle player animationPhase "Boom_2";
				_valu = _val + 0.01;
				if (_valu >= 6.3) then {_valu = 6.3};
				vehicle player animate ["Boom_2",_valu];
				_return = true;
			};
			
		 case 81: // NUM_3
			{
				_val = vehicle player animationPhase "Boom_2";
				_valu = _val - 0.01;
				if (_valu <= 0) then {_valu = 0};
				vehicle player animate ["Boom_2",_valu];
				_return = true;
			};
			
		 case 199: // HOME
			{
				_val = vehicle player animationPhase "Basket_holder";
				_valu = _val + 0.01;
				if (_valu >= 6.3) then {_valu = 6.3};
				vehicle player animate ["Basket_holder",_valu];
				_return = true;
			};
			
		 case 207: // END
			{
				_val = vehicle player animationPhase "Basket_holder";
				_valu = _val - 0.01;
				if (_valu <= 0) then {_valu = 0};
				vehicle player animate ["Basket_holder",_valu];
				_return = true;
			};
			
		 case 201: // PAGEUP
			{
				_val = vehicle player animationPhase "Basket";
				_valu = _val + 0.01;
				if (_valu >= 1.82) then {_valu = 1.82};
				vehicle player animate ["Basket",_valu];
				_return = true;
			};
			
		 case 209:// PAGEDOWN
			{
				_val = vehicle player animationPhase "Basket";
				_valu = _val - 0.01;
				if (_valu <= -5.3) then {_valu = -5.3};
				vehicle player animate ["Basket",_valu];
				_return = true;
			};
			
			
		};
		_return;
	};

waituntil {!(IsNull (findDisplay 46))};
_forkskeys = (FindDisplay 46) DisplayAddEventHandler ["keydown","_this call forksdokeyDown"];

waitUntil {typeOf vehicle player != "Jonzie_CH613_Bucket"};

(finddisplay 46) displayremoveeventhandler ["keydown",_forkskeys];