fnCJ_PoliceBlink = {
    Private ["_vehicle","_lightRed","_lightBlue","_lightleft","_lightright","_leftRed"];
    // _this select 0 : objVehicle
    // _this select 1 : blingspeed
    //[_carobj,0.25] spawn fnCJ_PoliceBlink;
    
    _vehicle = this select 0;  
    _lightRed = [30, 30, 30];         //color left
    _lightBlue = [30, 0, 0];         //color right
    
    _lightleft = "#lightpoint" createVehicleLocal getpos _vehicle;   
    sleep 0.2;
    _lightleft setLightColor _lightRed; 
    _lightleft setLightBrightness 0.4;  
    _lightleft setLightAmbient [0.1,0.1,1]; 
    _lightleft lightAttachObject [_vehicle, [0.5, -0.3, 1.75]];
    _lightleft setLightAttenuation [0.181, 0, 1000, 130]; 
    _lightleft setLightIntensity 10;
    _lightleft setLightFlareSize 0.38;
    _lightleft setLightFlareMaxDistance 150;
    _lightleft setLightUseFlare true;

    _lightright = "#lightpoint" createVehicleLocal getpos _vehicle;   
    sleep 0.2;
    _lightright setLightColor _lightBlue; 
    _lightright setLightBrightness 0.4;  
    _lightright setLightAmbient [0.1,0.1,1]; 
    _lightright lightAttachObject [_vehicle, [-0.5, -0.3, 1.75]];
    _lightright setLightAttenuation [0.181, 0, 1000, 130]; 
    _lightright setLightIntensity 10;
    _lightright setLightFlareSize 0.38;
    _lightright setLightFlareMaxDistance 150;
    _lightright setLightUseFlare true;
    
    _leftRed = true;  
    while{ (alive _vehicle)} do  
    {  
      if(_leftRed) then  
     {  
        _leftRed = false;  
        _lightright setLightBrightness 0.0;  
        sleep 0.05;
        _lightleft setLightBrightness 0.4;
		_vehicle setobjecttexture [14,"jonzie_carpack\universal_cars\tex\glass.paa"];
		_vehicle setObjectMaterial [14,"a3\data_f\default_alpha.rvmat"];
		_vehicle setobjecttexture [12,"#(argb,8,8,3)color(1,0,0,1.0,co)"];
		_vehicle setObjectMaterial [12,"a3\data_f\lights\car_beacon_red_emit.rvmat"];

		_vehicle setobjecttexture [15,"#(argb,8,8,3)color(1,1,1,1.0,CO)"];
		_vehicle setObjectMaterial [15,"a3\data_f\lights\car_headlight_emit.rvmat"];
		_vehicle setobjecttexture [13,"jonzie_carpack\universal_cars\tex\glass.paa"];
		_vehicle setObjectMaterial [13,"a3\data_f\default_alpha.rvmat"];		
     }  
     else  
     {  
        _leftRed = true;  
        _lightleft setLightBrightness 0.0;  
        sleep 0.05;
        _lightright setLightBrightness 0.4;
		_vehicle setobjecttexture [14,"#(argb,8,8,3)color(1,1,1,1.0,CO)"];
		_vehicle setObjectMaterial [14,"a3\data_f\lights\car_headlight_emit.rvmat"];	
		_vehicle setobjecttexture [12,"jonzie_carpack\universal_cars\tex\glass.paa"];
		_vehicle setObjectMaterial [12,"a3\data_f\default_alpha.rvmat"];

		_vehicle setobjecttexture [15,"jonzie_carpack\universal_cars\tex\glass.paa"];
		_vehicle setObjectMaterial [15,"a3\data_f\default_alpha.rvmat"];
		_vehicle setobjecttexture [13,"#(argb,8,8,3)color(1,0,0,1.0,co)"];
		_vehicle setObjectMaterial [13,"a3\data_f\lights\car_beacon_red_emit.rvmat"];		
     };  
      sleep (_this select 1);  
    };  
    deleteVehicle _lightleft;
    deleteVehicle _lightright;
}; 