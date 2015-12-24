private["_veh_l"];
_veh_l = _this;
_lightblue = "#lightpoint" createVehicleLocal getpos _veh_l; 
_lightblue setLightColor [0, 0, 255];
_lightblue setLightBrightness 0.4;
_lightblue setLightAmbient [0, 0, 255];
_lightblue lightAttachObject [_veh_l, [0.5, -0.3, 1.75]];
_lightblue setLightAttenuation [0, 0, 0, 0.8];
_lightblue setLightFlareMaxDistance 500;
_lightblue setLightFlareSize 0.0;
_lightblue setLightIntensity 1;
_lightblue setLightUseFlare true;
_lightblue setLightDayLight true;


_lightred = "#lightpoint" createVehicleLocal getpos _veh_l; 
_lightred setLightColor [255, 0, 0];
_lightred setLightBrightness 0.4;
_lightred setLightAmbient [255, 0, 0];
_lightred lightAttachObject [_veh_l, [-0.5, -0.3, 1.75]];
_lightred setLightAttenuation [0, 0, 0, 0.8];
_lightred setLightFlareMaxDistance 500;
_lightred setLightFlareSize 0.0;
_lightred setLightIntensity 1;
_lightred setLightUseFlare true;
_lightred setLightDayLight true;

_lightblue setLightColor [0, 0, 0];
_lightblue setLightAmbient [0, 0, 0];
_lightred setLightColor [0, 0, 0];
_lightred setLightAmbient [0, 0, 0];
while {alive _veh_l} do{
	if (_veh_l animationPhase "ani_siren" > 0 && getdammage _veh_l < 0.9) then 
	{
		
	} 
	else 
	{
	waitUntil {(_veh_l animationPhase "ani_siren" > 0 && getdammage _veh_l < 0.9)};
	};
};
exit;