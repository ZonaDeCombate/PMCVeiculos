
waitUntil {!(isNil {_this getVariable "colour"})};
_colour = _this getVariable "colour";



_this setObjectTexture [0, ["\jonzie_supercars\tex\Holden Skins\car_22.paa", 
"\jonzie_supercars\tex\Holden Skins\car_02.paa", 
"\jonzie_supercars\tex\Holden Skins\car_02 anzac.paa", 
"\jonzie_supercars\tex\Holden Skins\car_222.paa", 
"\jonzie_supercars\tex\Holden Skins\car_47.paa",
"\jonzie_supercars\tex\Holden Skins\car_08.paa",
"\jonzie_supercars\tex\Holden Skins\car_888.paa",
"\jonzie_supercars\tex\Holden Skins\car_01.paa",
"\jonzie_supercars\tex\Holden Skins\car_14.paa",
"\jonzie_supercars\tex\Holden Skins\car_19.paa",
"\jonzie_supercars\tex\Holden Skins\car_19e.paa",
"\jonzie_supercars\tex\Holden Skins\car_21.paa",
"\jonzie_supercars\tex\Holden Skins\car_21_2.paa",
"\jonzie_supercars\tex\Holden Skins\car_23.paa",
"\jonzie_supercars\tex\Holden Skins\car_66.paa",
"\jonzie_supercars\tex\Holden Skins\car_47 stanley.paa",
"\jonzie_supercars\tex\Holden Skins\car_34.paa",
"\jonzie_supercars\tex\Holden Skins\car_80.paa",
"\jonzie_supercars\tex\Holden Skins\car_88.paa",
"\jonzie_supercars\tex\Holden Skins\car_97.paa"] select _colour];

waitUntil {!(alive _this)};
_this setObjectTexture [0,"\Jonzie_Carpack\Universal_Cars\tex\burned.paa"];
_this setObjectMaterial [0,"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Car_mat_paint.rvmat"];