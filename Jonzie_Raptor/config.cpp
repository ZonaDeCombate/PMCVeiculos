////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Thu Dec 24 16:22:17 2015 : Source 'file' date Thu Dec 24 16:22:17 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class Jonzie_Raptor : config.bin{
class CfgPatches
{
	class Jonzie_Raptor
	{
		units[] = {"Jonzie_Raptor"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F","Jonzie_Carpack","Jonzie_Code","Jonzie_Sounds"};
	};
};
class CfgVehicles
{
	class Jonzie_Public_Car_Base;
	class Jonzie_Raptor: Jonzie_Public_Car_Base
	{
		_generalMacro = "Jonzie_Raptor";
		displayName = "[ZC] Ford F150 Raptor";
		nameSound = "Jonzie_Raptor";
		scope = 2;
		model = "\Jonzie_Raptor\Jonzie_Raptor";
		author = "Jonzie";
		transportSoldier = 3;
		fuelCapacity = 5.2222223;
		cargoAction[] = {"passenger_low01"};
		class Library
		{
			libTextDesc = "The 2014 F150 SVT Raptor is an offroader. The 6.2-litre V8 engine does 0-100 in 8.0 sec and has a limited top speed  of 160 kph.";
		};
		class EventHandlers
		{
			init="(_this select 0) execVM ""\Jonzie_Raptor\scripts\full.sqf""";
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\Idle.ogg",0.22387211,1,150};
				frequency = "0.9	+	((rpm/	11900) factor[(400/	11900),(1150/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(400/	11900),(700/	11900)])	*	((rpm/	11900) factor[(1100/	11900),(900/	11900)]))";
			};
			class Engine
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\1000.ogg",0.2818383,1,200};
				frequency = "0.8	+	((rpm/	11900) factor[(900/	11900),(2100/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(870/	11900),(1100/	11900)])	*	((rpm/	11900) factor[(2100/	11900),(1300/	11900)]))";
			};
			class Engine1_ext
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\2000.ogg",0.3548134,1,240};
				frequency = "0.8	+		((rpm/	11900) factor[(1300/	11900),(3100/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(1250/	11900),(2050/	11900)])	*	((rpm/	11900) factor[(3100/	11900),(2300/	11900)]))";
			};
			class Engine2_ext
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\3000.ogg",0.39810717,1,280};
				frequency = "0.8	+	((rpm/	11900) factor[(2200/	11900),(4100/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(2250/	11900),(3050/	11900)])	*	((rpm/	11900) factor[(4100/	11900),(3300/	11900)]))";
			};
			class Engine3_ext
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\4000.ogg",0.4466836,1,320};
				frequency = "0.8	+	((rpm/	11900) factor[(3300/	11900),(4900/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(3250/	11900),(4050/	11900)])	*	((rpm/	11900) factor[(4870/	11900),(4200/	11900)]))";
			};
			class Engine4_ext
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\5000.ogg",0.5011872,1,360};
				frequency = "0.8	+	((rpm/	11900) factor[(4200/	11900),(6200/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(4150/	11900),(4800/	11900)])	*	((rpm/	11900) factor[(6150/	11900),(5150/	11900)]))";
			};
			class Engine5_ext
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\6000.ogg",0.56234133,1,420};
				frequency = "0.95	+	((rpm/	11900) factor[(5100/	11900),(6900/	11900)])*0.15";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(5100/	11900),(6100/	11900)])	*	((rpm/	11900) factor[(5700/	11900),(5400/	11900)]))";
			};
			class Engine6_ext
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\7000.ogg",0.22387211,1,150};
				frequency = "0.9	+	((rpm/	11900) factor[(5400/	11900),(6150/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(5400/	11900),(5700/	11900)])	*	((rpm/	11900) factor[(6100/	11900),(5900/	11900)]))";
			};
			class Engine7_ext
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\8000.ogg",0.2818383,1,200};
				frequency = "0.8	+	((rpm/	11900) factor[(5900/	11900),(7100/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(5870/	11900),(6100/	11900)])	*	((rpm/	11900) factor[(7100/	11900),(6300/	11900)]))";
			};
			class Engine8_ext
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\9000.ogg",0.3548134,1,240};
				frequency = "0.8	+		((rpm/	11900) factor[(6300/	11900),(8100/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(6250/	11900),(7050/	11900)])	*	((rpm/	11900) factor[(8100/	11900),(7300/	11900)]))";
			};
			class Engine9_ext
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\10000.ogg",0.39810717,1,280};
				frequency = "0.8	+	((rpm/	11900) factor[(7200/	11900),(9100/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(7250/	11900),(8050/	11900)])	*	((rpm/	11900) factor[(9100/	11900),(8300/	11900)]))";
			};
			class Engine10_ext
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\11000.ogg",0.4466836,1,320};
				frequency = "0.8	+	((rpm/	11900) factor[(8300/	11900),(9900/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(8250/	11900),(9050/	11900)])	*	((rpm/	11900) factor[(9870/	11900),(9200/	11900)]))";
			};
			class Engine11_ext
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\12000.ogg",0.5011872,1,360};
				frequency = "0.8	+	((rpm/	11900) factor[(9200/	11900),(11200/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(9150/	11900),(9800/	11900)])	*	((rpm/	11900) factor[(9150/	11900),(10150/	11900)]))";
			};
			class Engine12_ext
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\13000.ogg",0.56234133,1,420};
				frequency = "0.95	+	((rpm/	11900) factor[(10100/	11900),(11900/	11900)])*0.15";
				volume = "engineOn*camPos*((rpm/	11900) factor[(10100/	11900),(11100/	11900)])";
			};
			class Idle_int
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\Idle.ogg",0.17782794,1};
				frequency = "0.9	+	((rpm/	11900) factor[(400/	11900),(1150/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(400/	11900),(700/	11900)])	*	((rpm/	11900) factor[(1100/	11900),(900/	11900)]))";
			};
			class Engine_int
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\1000.ogg",0.19952622,1};
				frequency = "0.8	+	((rpm/	11900) factor[(900/	11900),(2100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(870/	11900),(1100/	11900)])	*	((rpm/	11900) factor[(2100/	11900),(1300/	11900)]))";
			};
			class Engine1_int
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\2000.ogg",0.25118864,1};
				frequency = "0.8	+		((rpm/	11900) factor[(1300/	11900),(3100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(1250/	11900),(2050/	11900)])	*	((rpm/	11900) factor[(3100/	11900),(2300/	11900)]))";
			};
			class Engine2_int
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\3000.ogg",0.2818383,1};
				frequency = "0.8	+	((rpm/	11900) factor[(2200/	11900),(4100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(2250/	11900),(3050/	11900)])	*	((rpm/	11900) factor[(4100/	11900),(3300/	11900)]))";
			};
			class Engine3_int
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\4000.ogg",0.31622776,1};
				frequency = "0.8	+	((rpm/	11900) factor[(3300/	11900),(4900/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(3250/	11900),(4050/	11900)])	*	((rpm/	11900) factor[(4870/	11900),(4200/	11900)]))";
			};
			class Engine4_int
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\5000.ogg",0.3548134,1};
				frequency = "0.8	+	((rpm/	11900) factor[(4200/	11900),(6200/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(4150/	11900),(4800/	11900)])	*	((rpm/	11900) factor[(6150/	11900),(5150/	11900)]))";
			};
			class Engine5_int
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\6000.ogg",0.5011872,1};
				frequency = "0.95	+	((rpm/	11900) factor[(5100/	11900),(6900/	11900)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(5100/	11900),(6100/	11900)])	*	((rpm/	11900) factor[(5700/	11900),(5400/	11900)]))";
			};
			class Engine6_int
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\7000.ogg",0.17782794,1};
				frequency = "0.9	+	((rpm/	11900) factor[(5400/	11900),(6150/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(5400/	11900),(5700/	11900)])	*	((rpm/	11900) factor[(6100/	11900),(5900/	11900)]))";
			};
			class Engine7_int
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\8000.ogg",0.19952622,1};
				frequency = "0.8	+	((rpm/	11900) factor[(5900/	11900),(7100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(5870/	11900),(6100/	11900)])	*	((rpm/	11900) factor[(7100/	11900),(6300/	11900)]))";
			};
			class Engine8_int
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\9000.ogg",0.25118864,1};
				frequency = "0.8	+		((rpm/	11900) factor[(6300/	11900),(8100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(6250/	11900),(7050/	11900)])	*	((rpm/	11900) factor[(8100/	11900),(7300/	11900)]))";
			};
			class Engine9_int
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\10000.ogg",0.2818383,1};
				frequency = "0.8	+	((rpm/	11900) factor[(7200/	11900),(9100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(7250/	11900),(8050/	11900)])	*	((rpm/	11900) factor[(9100/	11900),(8300/	11900)]))";
			};
			class Engine10_int
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\11000.ogg",0.31622776,1};
				frequency = "0.8	+	((rpm/	11900) factor[(8300/	11900),(9900/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(8250/	11900),(9050/	11900)])	*	((rpm/	11900) factor[(9870/	11900),(9200/	11900)]))";
			};
			class Engine11_int
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\12000.ogg",0.3548134,1};
				frequency = "0.8	+	((rpm/	11900) factor[(9200/	11900),(11200/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(9150/	11900),(9800/	11900)])	*	((rpm/	11900) factor[(9150/	11900),(10150/	11900)]))";
			};
			class Engine12_int
			{
				sound[] = {"Jonzie_Raptor\Sounds\6.2\13000.ogg",0.5011872,1};
				frequency = "0.95	+	((rpm/	11900) factor[(10100/	11900),(11900/	11900)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/	11900) factor[(10100/	11900),(11100/	11900)])";
			};
		};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.231,"N",0,"D1",2.957,"D2",1.858,"D3",1.311,"D4",1,"D5",0.852};
			TransmissionRatios[] = {"High",14};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		idleRpm = 800;
		redRpm = 11900;
		differentialType = "all_limited";
		maxSpeed = 160;
		acceleration = 8;
		changeGearMinEffectivity[] = {0.95,0.15,0.98,0.9,0.9,0.9,0.9};
		maxOmega = 1246.17;
		enginePower = 118;
		peakTorque = 554;
		wheelCircumference = 6.03;
		class UserActions
		{
			class AUX_Front_On
			{
				displayName = "Front Auxiliary On";
				radius = 1.5;
				position = "drivercontrols";
				onlyforplayer = 0;
				condition = "this getCargoIndex player == 0 && this animationPhase ""AUX_Front"" == 0 && this animationPhase ""Addon_3"" == 1 or driver this == player && this animationPhase ""AUX_Front"" == 0 && this animationPhase ""Addon_3"" == 1;";
				statement = "this animate [""AUX_Front"", 1];this animate [""Addon_5"", 1]";
			};
			class AUX_Front_Off
			{
				displayName = "Front Auxiliary Off";
				radius = 1.5;
				position = "drivercontrols";
				onlyforplayer = 0;
				condition = "this getCargoIndex player == 0 && this animationPhase ""AUX_Front"" == 1 && this animationPhase ""Addon_3"" == 1 or driver this == player && this animationPhase ""AUX_Front"" == 1 && this animationPhase ""Addon_3"" == 1;";
				statement = "this animate [""AUX_Front"", 0];this animate [""Addon_5"", 0]";
			};
			class AUX_Roof_On
			{
				displayName = "Roof Auxiliary On";
				radius = 1.5;
				position = "drivercontrols";
				onlyforplayer = 0;
				condition = "this getCargoIndex player == 0 && this animationPhase ""AUX_Roof"" == 0 && this animationPhase ""Addon_2"" == 1 or driver this == player && this animationPhase ""AUX_Roof"" == 0 && this animationPhase ""Addon_2"" == 1;";
				statement = "this animate [""AUX_Roof"", 1]";
			};
			class AUX_Roof_Off
			{
				displayName = "Roof Auxiliary Off";
				radius = 1.5;
				position = "drivercontrols";
				onlyforplayer = 0;
				condition = "this getCargoIndex player == 0 && this animationPhase ""AUX_Roof"" == 1 && this animationPhase ""Addon_2"" == 1 or driver this == player && this animationPhase ""AUX_Roof"" == 1 && this animationPhase ""Addon_2"" == 1;";
				statement = "this animate [""AUX_Roof"", 0]";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1300,1300,2200};
				ambient[] = {5,5,7};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 1;
				flareSize = 1;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Right2: Right
			{
				position = "R_light_flare";
				useFlare = 1;
			};
			class Left2: Left
			{
				position = "L_light_flare";
				useFlare = 1;
			};
			class LeftSpotlight
			{
				color[] = {8000,8000,8000};
				ambient[] = {20,20,20};
				position = "LeftSpotlight";
				direction = "LeftSpotlight_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 10;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 1;
				flareSize = 1;
				flareMaxDistance = 1800;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0.1;
					quadratic = 0;
					hardLimitStart = 800;
					hardLimitEnd = 1800;
				};
			};
			class RightSpotlight: LeftSpotlight
			{
				position = "RightSpotlight";
				direction = "RightSpotlight_end";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		aggregateReflectors[] = {{ "Left","Right","Left2","Right2" }};
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper_land";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 20;
				MOI = 5.3;
				dampingRate = 0.5;
				maxBrakeTorque = 5000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				MaxDroop = 0.09;
				sprungMass = 365;
				springStrength = 36631;
				springDamperRate = 1920;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 25;
				latStiffY = 18000;
				frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper_land";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 5000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper_land";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper_land";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 5000;
			};
		};
	};
};
class cfgMods
{
	author = "76561198020285021";
	timepacked = "1450108613";
};
//};
