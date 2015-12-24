
waitUntil {!(isNil {_this getVariable "colour"})};
_colour = _this getVariable "colour";



_this setObjectTexture [7, ["\jonzie_supercars\tex\7251c951.paa", 
"\jonzie_supercars\tex\7251c951.paa",  
"\jonzie_supercars\tex\Ford Skins\car_12 rims.paa", 
"\jonzie_supercars\tex\Ford Skins\car_12 rims.paa", 
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\jonzie_supercars\tex\Ford Skins\car_17 rims.paa", 
"\jonzie_supercars\tex\Ford Skins\car_17 rims.paa", 
"\jonzie_supercars\tex\Ford Skins\car_17c rims.paa", 
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa"] select _colour];

waitUntil {!(alive _this)};
_this setObjectTexture [0,"\Jonzie_Carpack\Universal_Cars\tex\burned.paa"];
_this setObjectMaterial [0,"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Car_mat_paint.rvmat"];