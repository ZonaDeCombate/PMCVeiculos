_Bridge = _this;
_Bridge_pt1 = "Jonzie_Bridge_pt1" createVehicleLocal [0,0,100];
_Bridge_pt1 attachTo [_Bridge, [0, 40.2, 1.61] ];
_Bridge_pt2 = "Jonzie_Bridge_pt2" createVehicleLocal [0,0,100];
_Bridge_pt2 attachTo [_Bridge, [0, -39.3, -0.725] ];
detach _Bridge_pt1;
detach _Bridge_pt2;
_Bridge setPos getPos _Bridge;
_Bridge_pt1 setPos getPos _Bridge_pt1;
_Bridge_pt2 setPos getPos _Bridge_pt2;