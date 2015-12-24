if (isServer) then {exit};
private["_car"];
_car = _this select 0;
[_car,1] execVM "\Jonzie_Code\functions\Ambulance\Scripts\Lightbar\Sirens.sqf";



_car execVM "\Jonzie_Code\functions\Ambulance\Scripts\Lightbar\Lightbar.sqf";
_car animate ["Light1_off",0];
_car animate ["Light1_on",10000];
_car animate ["Light2_on",10000];
_car animate ["Light3_on",10000];
_car animate ["Light4_on",10000];
_car animate ["Light5",10000];
_car animate ["Light7",10000];
_car animate ["Light9",10000];
exit;

