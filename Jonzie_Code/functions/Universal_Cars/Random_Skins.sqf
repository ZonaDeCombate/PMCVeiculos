sleep 2;
if (isNil {_this getVariable "skin"}) then { 
	if(local _this && {isNil {_this getVariable "Red"}&& isNil {_this getVariable "Green"}&& isNil {_this getVariable "Blue"}}) then
	{
		_decimal = ["0","0.1", "0.2", "0.3", "0.4", "0.5", "0.6", "0.7", "0.8", "0.9", "1"];
		_rnd_R = floor random 11;
		_rnd_G = floor random 11;
		_rnd_B = floor random 11;
		_Red = _decimal select _rnd_R;
		_Green = _decimal select _rnd_G;
		_Blue = _decimal select _rnd_B;
		_this setVariable ["Red", _Red, TRUE];
		_this setVariable ["Green", _Green, TRUE];  
		_this setVariable ["Blue", _Blue, TRUE];
	};
	waitUntil {!(isNil {_this getVariable "Red"})};
	_Red = _this getVariable "Red";
	waitUntil {!(isNil {_this getVariable "Green"})};
	_Green = _this getVariable "Green";
	waitUntil {!(isNil {_this getVariable "Blue"})};
	_Blue = _this getVariable "Blue";
	_this setObjectTexture [0, format ["#(argb,8,8,3)color(%1,%2,%3,1.0,CO)",_Red,_Green,_Blue]];
} else {
	waitUntil {!(isNil {_this getVariable "skin"})};
	_this setObjectTexture [0, format ["%1", _this getVariable "skin"]];
};