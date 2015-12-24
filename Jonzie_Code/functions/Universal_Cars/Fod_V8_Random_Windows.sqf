
waitUntil {!(isNil {_this getVariable "colour"})};
_colour = _this getVariable "colour";



_this setObjectTexture [8, ["\jonzie_supercars\tex\Ford Skins\car_05 window.paa", 
"\jonzie_supercars\tex\Ford Skins\car_06 window.paa", 
"\jonzie_supercars\tex\Ford Skins\car_12 window.paa", 
"\jonzie_supercars\tex\Ford Skins\car_12b window.paa", 
"\jonzie_supercars\tex\Ford Skins\car_16 window.paa",
"\jonzie_supercars\tex\Ford Skins\car_17 window.paa",
"\jonzie_supercars\tex\Ford Skins\car_17 window.paa",
"\jonzie_supercars\tex\Ford Skins\car_17c window.paa",
"\jonzie_supercars\tex\Ford Skins\car_18 window.paa",
"\jonzie_supercars\tex\Ford Skins\car_18b window.paa",
"\jonzie_supercars\tex\Ford Skins\car_18b window.paa",
"\jonzie_supercars\tex\Ford Skins\car_18b window.paa",
"\jonzie_supercars\tex\Ford Skins\car_55 window.paa",
"\jonzie_supercars\tex\Ford Skins\car_55b window.paa"] select _colour];

waitUntil {!(alive _this)};
_this setObjectTexture [0,"\Jonzie_Carpack\Universal_Cars\tex\burned.paa"];
_this setObjectMaterial [0,"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Car_mat_paint.rvmat"];