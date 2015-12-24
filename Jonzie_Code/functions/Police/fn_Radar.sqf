private["_veh","_radardir","_Beam","_Beam2","_tag","_tag2","_dbest","_tagbest","_getspeed1","_dfast","_tagfast","_getspeed2","_best1","_best2","_best3","_fast1","_fast2","_fast3","_besttext1","_besttext2","_besttext3","_fasttext1","_fasttext2","_fasttext3","_speederid","_speederspeed"];
_veh = _this select 0;
_radardir ="";
_speederspeed = 0;
_speederid = 0;
_veh setobjecttexture [24,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"];
_veh setobjecttexture [23,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"];
_veh setobjecttexture [22,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"];
_veh setobjecttexture [21,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"]; 
_veh setobjecttexture [20,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"]; 
_veh setobjecttexture [19,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"];
_veh setobjecttexture [18,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"]; 
_veh setobjecttexture [17,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"]; 
_veh setobjecttexture [16,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"];
while {alive _veh} do 
{
	if (vehicle player isKindOf "Man") exitWith {};
	if (_veh animationPhase "Radar" == 1 && getdammage _veh < 0.7) then 
	{
		if (_veh animationPhase "Addon_19" == 0 && _radardir != "Front") then 
		{
			_Beam = "#lightpoint" createVehicleLocal getpos _veh;
			_Beam lightAttachObject [ _veh, [ 0.0, 60.0, 0.75 ] ];
			_Beam setLightBrightness 0.0001;
			_Beam setLightAmbient[ 1.0, 0, 0 ];
			_Beam setLightColor[ 1.0, 0, 0 ];
			_Beam2 = "#lightpoint" createVehicleLocal getpos _veh;
			_Beam2 lightAttachObject [ _veh, [ 0.0, 200.0, 0.75 ] ];
			_Beam2 setLightBrightness 0.0001;
			_Beam2 setLightAmbient[ 1.0, 0, 0 ];
			_Beam2 setLightColor[ 1.0, 0, 0 ];
			_radardir = "Front";
		};
		if (_veh animationPhase "Addon_19" == 1 && _radardir != "Rear") then
		{
			_Beam = "#lightpoint" createVehicleLocal getpos _veh;
			_Beam lightAttachObject [ _veh, [ 0.0, -60.0, 0.75 ] ];
			_Beam setLightBrightness 0.0001;
			_Beam setLightAmbient[ 1.0, 0, 0 ];
			_Beam setLightColor[ 1.0, 0, 0 ];
			_Beam2 = "#lightpoint" createVehicleLocal getpos _veh;
			_Beam2 lightAttachObject [ _veh, [ 0.0, -200.0, 0.75 ] ];
			_Beam2 setLightBrightness 0.0001;
			_Beam2 setLightAmbient[ 1.0, 0, 0 ];
			_Beam2 setLightColor[ 1.0, 0, 0 ];
			_radardir = "Rear";
		};
		_tag2 = nearestObject [_Beam2, "LandVehicle"];
		_tag = nearestObject [_Beam, "LandVehicle"];
		_getspeed3 = speed _veh;
		_tagPatrol = ceil(_getspeed3);
		_Patrol1 = 0;
		_Patrol2 = 0;
		_Patrol3 = _tagPatrol;
		while {_Patrol3 > 9} do {_Patrol3 = _Patrol3 - 10; _Patrol2 = _Patrol2 + 1; if (_Patrol2 > 9) then { _Patrol1 = _Patrol1 + 1; _Patrol2 = 0}};
		if (_Patrol1 < 1) then {_Patrol1 = 0;};
		if (_Patrol2 < 1) then {_Patrol2 = 0;};
		if (_Patrol3 < 1) then {_Patrol3 = 0;};	
		_Patroltext1 = format ["\Jonzie_Carpack\Universal_Cars\Numbers\%1.paa", _Patrol1]; 
		_Patroltext2 = format ["\Jonzie_Carpack\Universal_Cars\Numbers\%1.paa", _Patrol2]; 
		_Patroltext3 = format ["\Jonzie_Carpack\Universal_Cars\Numbers\%1.paa", _Patrol3];
		_veh setobjecttexture [18, _Patroltext1 ]; 
		_veh setobjecttexture [17, _Patroltext2 ]; 
		_veh setobjecttexture [16, _Patroltext3 ];	
		if (isNull driver _tag) then
		{
			_veh setobjecttexture [24,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"];
			_veh setobjecttexture [23,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"];
			_veh setobjecttexture [22,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"];			
			_tagfast = 0;
			_tagbest = 0;
			_speederid = "";
			_speederspeed = 0;
			_best1 = 0;
			_best2 = 0;
			_best3 = 0;
			_fast1 = 0;
			_fast2 = 0;
			_fast3 = 0;			
		}
		else 
		{
			if(isNull _tag) then {_tag = _tag2};
			if(isNull _tag2) then {_tag2 = _tag};
			_dbest = driver _tag;
			_getspeed1 = speed _tag;
			_tagbest = ceil(_getspeed1);
			_dfast =  driver _tag2;
			_getspeed2 = speed _tag2;
			_tagfast = ceil(_getspeed2);			
			if (_tagfast > _speederspeed) then {_speederspeed = _tagfast; _speederid = _dfast;}else{_tagfast = _speederspeed; _dfast = _speederid;};
			if (isNull _dbest) then {_dbest = "";_tagbest = 0};
			if (_tagbest < 1) then {_tagbest = 0;};
			if (_tagfast < 1) then {_tagfast = 0;};
			_best1 = 0;
			_best2 = 0;
			_best3 = _tagbest;
			_fast1 = 0;
			_fast2 = 0;
			_fast3 = _tagfast;		
			while {_best3 > 9} do {_best3 = _best3 - 10; _best2 = _best2 + 1; if (_best2 > 9) then { _best1 = _best1 + 1; _best2 = 0}};
			while {_fast3 > 9} do {_fast3 = _fast3 - 10; _fast2 = _fast2 + 1; if (_fast2 > 9) then { _fast1 = _fast1 + 1; _fast2 = 0}};	
			_besttext1 = format ["\Jonzie_Carpack\Universal_Cars\Numbers\%1.paa", _best1]; 
			_besttext2 = format ["\Jonzie_Carpack\Universal_Cars\Numbers\%1.paa", _best2]; 
			_besttext3 = format ["\Jonzie_Carpack\Universal_Cars\Numbers\%1.paa", _best3]; 
			_veh setobjecttexture [24, _besttext1 ]; 
			_veh setobjecttexture [23, _besttext2 ]; 
			_veh setobjecttexture [22, _besttext3 ];	
			_fasttext1 = format ["\Jonzie_Carpack\Universal_Cars\Numbers\%1.paa", _fast1]; 
			_fasttext2 = format ["\Jonzie_Carpack\Universal_Cars\Numbers\%1.paa", _fast2]; 
			_fasttext3 = format ["\Jonzie_Carpack\Universal_Cars\Numbers\%1.paa", _fast3];
			_veh setobjecttexture [21, _fasttext1 ]; 
			_veh setobjecttexture [20, _fasttext2 ]; 
			_veh setobjecttexture [19, _fasttext3 ]; 
		};
		sleep 0.5;
	} 
	else 
	{
		_veh setobjecttexture [24,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"];
		_veh setobjecttexture [23,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"];
		_veh setobjecttexture [22,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"];
		_veh setobjecttexture [21,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"]; 
		_veh setobjecttexture [20,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"]; 
		_veh setobjecttexture [19,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"];
		_veh setobjecttexture [18,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"]; 
		_veh setobjecttexture [17,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"]; 
		_veh setobjecttexture [16,"\Jonzie_Carpack\Universal_Cars\Numbers\0.paa"];
		_speederid = "";
		_speederspeed = 0;	
		waitUntil {sleep 3; (_veh animationPhase "Radar" == 1 && getdammage _veh < 0.7)};
	};
};