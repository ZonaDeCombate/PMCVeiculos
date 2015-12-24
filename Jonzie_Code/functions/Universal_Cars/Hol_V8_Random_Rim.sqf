
waitUntil {!(isNil {_this getVariable "colour"})};
_colour = _this getVariable "colour";



_this setObjectTexture [7, ["\jonzie_supercars\tex\Holden Skins\car_02 rims.paa", 
"\jonzie_supercars\tex\Holden Skins\car_02 rims.paa", 
"\jonzie_supercars\tex\Holden Skins\car_02 rims.paa", 
"\jonzie_supercars\tex\Holden Skins\car_222 rims.paa", 
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\jonzie_supercars\tex\Holden Skins\car_21 rims.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\jonzie_supercars\tex\Holden Skins\car_23 rims.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\jonzie_supercars\tex\Holden Skins\car_222 rims.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa",
"\Jonzie_Supercars\tex\4d72f92e.paa"] select _colour];

waitUntil {!(alive _this)};
_this setObjectTexture [0,"\Jonzie_Carpack\Universal_Cars\tex\burned.paa"];
_this setObjectMaterial [0,"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Car_mat_paint.rvmat"];