
waitUntil {!(isNil {_this getVariable "colour"})};
_colour = _this getVariable "colour";



_this setObjectTexture [8, ["\jonzie_supercars\tex\Holden Skins\car_22 window.paa", 
"\jonzie_supercars\tex\Holden Skins\car_02 window.paa", 
"\jonzie_supercars\tex\Holden Skins\car_02 window.paa", 
"\jonzie_supercars\tex\Holden Skins\car_222 window.paa", 
"\jonzie_supercars\tex\Holden Skins\car_47 window.paa",
"\jonzie_supercars\tex\Holden Skins\car_08 window.paa",
"\jonzie_supercars\tex\Holden Skins\car_888 window.paa",
"\jonzie_supercars\tex\Holden Skins\car_01 window.paa",
"\jonzie_supercars\tex\Holden Skins\car_14 window.paa",
"\jonzie_supercars\tex\Holden Skins\car_19 window.paa",
"\jonzie_supercars\tex\Holden Skins\car_19e window.paa",
"\jonzie_supercars\tex\Holden Skins\car_21 window.paa",
"\jonzie_supercars\tex\Holden Skins\car_21_2 window.paa",
"\jonzie_supercars\tex\Holden Skins\car_23 window.paa",
"\jonzie_supercars\tex\Holden Skins\car_66 window.paa",
"\jonzie_supercars\tex\Holden Skins\car_66 window.paa",
"\jonzie_supercars\tex\Holden Skins\car_34 window.paa",
"\jonzie_supercars\tex\Holden Skins\car_80 window.paa",
"\jonzie_supercars\tex\Holden Skins\car_88 window.paa",
"\jonzie_supercars\tex\Holden Skins\car_97 window.paa"] select _colour];

waitUntil {!(alive _this)};
_this setObjectTexture [0,"\Jonzie_Carpack\Universal_Cars\tex\burned.paa"];
_this setObjectMaterial [0,"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Car_mat_paint.rvmat"];