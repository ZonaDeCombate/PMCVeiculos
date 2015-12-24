
waitUntil {!(isNil {_this getVariable "colour"})};
_colour = _this getVariable "colour";



_this setObjectTexture [0, ["\jonzie_supercars\tex\Ford Skins\car_05.paa", 
"\jonzie_supercars\tex\Ford Skins\car_06.paa", 
"\jonzie_supercars\tex\Ford Skins\car_12.paa", 
"\jonzie_supercars\tex\Ford Skins\car_12b.paa", 
"\jonzie_supercars\tex\Ford Skins\car_16.paa",
"\jonzie_supercars\tex\Ford Skins\car_17.paa",
"\jonzie_supercars\tex\Ford Skins\car_17b.paa",
"\jonzie_supercars\tex\Ford Skins\car_17c.paa",
"\jonzie_supercars\tex\Ford Skins\car_18.paa",
"\jonzie_supercars\tex\Ford Skins\car_18b.paa",
"\jonzie_supercars\tex\Ford Skins\car_18c.paa",
"\jonzie_supercars\tex\Ford Skins\car_18d.paa",
"\jonzie_supercars\tex\Ford Skins\car_55.paa",
"\jonzie_supercars\tex\Ford Skins\car_55b.paa"] select _colour];

waitUntil {!(alive _this)};
_this setObjectTexture [0,"\Jonzie_Carpack\Universal_Cars\tex\burned.paa"];
_this setObjectMaterial [0,"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Car_mat_paint.rvmat"];