_car = _this select 0;
_truck = _this select 1;

waitUntil {(_car distance _truck) <= 7};

		while {(_car distance _truck) <= 8} do
			{
				_angle = - ((_truck animationPhase "lift") / 10);
				waitUntil {_angle != (- ((_truck animationPhase "lift") / 10))};
				_car setvectorUp [0,_angle,1]; 
				sleep 0.01;
			};