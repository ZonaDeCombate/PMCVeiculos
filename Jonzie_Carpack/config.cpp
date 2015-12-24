class CfgPatches
{
	class Jonzie_Carpack
	{
		units[]=
		{
			""
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Soft_F"
		};
	};
};
class CfgVehicles
{
	class Land_Offices_01_V1_F;
	class Items_base_F;
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				disableSoundAttenuation=1;
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitFuel;
			class HitEngine;
			class HitGlass1
			{
			};
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class Truck_F: Car_F
	{
		class HitPoints: HitPoints
		{
			class HitRGlass;
			class HitLGlass;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitBody;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitEngine;
		};
		class ViewPilot;
		class EventHandlers;
		class AnimationSources;
	};
	class Jonzie_Public_Car_Base: Car_F
	{
		mapSize=6.8600001;
		scope=1;
		author="Jonzie";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		class Turrets
		{
		};
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\Jonzie_Code\functions\Universal_Cars\Random_Skins.sqf"",(_this select 0) execVM ""\Jonzie_Code\functions\Universal_Cars\Plate_Skins.sqf""";
			getin="(_this select 0) execVM ""\Jonzie_Code\functions\Universal_Cars\Indicators.sqf""";
		};
		class AnimationSources: AnimationSources
		{
			class Light
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Lightbar
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Fake
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Doors
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class AUX
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class HitLFWheel
			{
				source="Hit";
				hitpoint="HitLFWheel";
				raw=1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint="HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint="HitLF2Wheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint="HitRF2Wheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint="HitLBWheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint="HitRBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint="HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint="HitRMWheel";
			};
			class HitGlass1
			{
				source="Hit";
				hitpoint="HitGlass1";
				raw=1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint="HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint="HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint="HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint="HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint="HitGlass6";
			};
			class HitGlass7: HitGlass1
			{
				hitpoint="HitGlass7";
			};
			class HitGlass8: HitGlass1
			{
				hitpoint="HitGlass8";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=0.125;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.125;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.125;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.125;
				passThrough=0;
			};
			class HitFuel
			{
				armor=500;
				material=-1;
				name="palivo";
				visual="";
				passThrough=0.2;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				name="motor";
				visual="";
				passThrough=0.2;
			};
			class HitBody: HitBody
			{
				visual="Body";
				passThrough=1;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.25;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.25;
			};
			class HitGlass6: HitGlass6
			{
				armor=0.25;
			};
			class HitGlass7
			{
				armor=0.1;
				material=-1;
				name="glass7";
				visual="glass7";
				passThrough=0;
				explosionShielding=2;
			};
			class HitGlass8
			{
				armor=0.1;
				material=-1;
				name="glass8";
				visual="glass8";
				passThrough=0;
				explosionShielding=2;
			};
		};
		_generalMacro="Jonzie_Public_Car_Base";
		displayName="Jonzie_Public_Car_Base";
		nameSound="Car_Base_Sound";
		price=2980;
		photo="\Jonzie_Carpack\Universal_Cars\tex\Debug.paa";
		picture="\Jonzie_Carpack\Universal_Cars\tex\Debug.paa";
		class Library
		{
			libTextDesc="";
		};
		colourchart="1";
		vehicleClass="Jonzie_Vehicles";
		precision=10;
		model="";
		accuracy=1.25;
		transportSoldier=3;
		transportMaxBackpacks=0;
		armor=100;
		cost=50000;
		weapons[]=
		{
			"SportCarHorn"
		};
		coefInside=2;
		coefInsideHeur=2;
		coefSpeedInside=2;
		audible=6;
		sensitivity=2.5;
		sensitivityEar=0.0074999998;
		insideSoundCoef=0.5;
		outsideSoundFilter=0;
		insideDetectCoef=0.5;
		occludeSoundsWhenIn=0.5;
		obstructSoundsWhenIn=1;
		obstructSoundLFRatio=1;
		occludeSoundLFRatio=1;
		hiddenSelections[]=
		{
			"Body",
			"Lett_1",
			"Lett_2",
			"Lett_3",
			"num_1",
			"num_2",
			"num_3",
			"num_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\Jonzie_Carpack\Universal_Cars\tex\37dbcb77.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\j.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\o.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\n.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\z.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\i.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\e.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\9.paa",
			"",
			""
		};
		class TransportItems
		{
		};
		showNVGCargo[]={0,1};
		soundAttenuationCargo[]={1,0};
		brakeDistance=50;
		turnCoef=3.5;
		canFloat="false";
		fireResistance=5;
		wheelDestroyRadiusCoef=0.75;
		driverAction="driver_offroad01";
		cargoAction[]=
		{
			"passenger_low01"
		};
		cargoIsCoDriver[]={1,0};
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2"
		};
		attenuationEffectType="OpenCarAttenuation";
		engineStartSpeed=0.23999999;
		soundEngineOnInt[]=
		{
			"Jonzie_Sounds\Universal_Cars\Start",
			0.31622776,
			1
		};
		soundEngineOnExt[]=
		{
			"Jonzie_Sounds\Universal_Cars\Start",
			0.39810717,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"Jonzie_Sounds\Universal_Cars\Stop",
			0.31622776,
			1
		};
		soundEngineOffExt[]=
		{
			"Jonzie_Sounds\Universal_Cars\Stop",
			0.39810717,
			1,
			200
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\Offroad_01\Offroad_01-int-openclose",
			0.44668359,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\Offroad_01\Offroad_01-int-openclose",
			0.44668359,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_01",
			1,
			1,
			150
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_02",
			1,
			1,
			150
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_03",
			1,
			1,
			150
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_04",
			1,
			1,
			150
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",
			1,
			1,
			100
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",
			1,
			1,
			100
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",
			1,
			1,
			100
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",
			1,
			1,
			100
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",
			1,
			1,
			100
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",
			1,
			1,
			100
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\Idle",
					0.31622776,
					1,
					100
				};
				frequency="0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume="engineOn*camPos*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class Engine
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\1000",
					0.31622776,
					1,
					200
				};
				frequency="0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume="engineOn*camPos*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\2000",
					0.35481337,
					1,
					225
				};
				frequency="0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume="engineOn*camPos*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\3000",
					0.35481337,
					1,
					250
				};
				frequency="0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume="engineOn*camPos*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\4000",
					0.39810717,
					1,
					275
				};
				frequency="0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume="engineOn*camPos*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\5000",
					0.44668359,
					1,
					300
				};
				frequency="0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume="engineOn*camPos*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\6000",
					0.50118721,
					1,
					300
				};
				frequency="0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume="engineOn*camPos*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\7000",
					0.56234133,
					1,
					300
				};
				frequency="0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume="engineOn*camPos*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\Idle",
					0.50118721,
					1,
					200
				};
				frequency="0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\1000",
					0.56234133,
					1,
					250
				};
				frequency="0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\2000",
					0.63095737,
					1,
					275
				};
				frequency="0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\3000",
					0.70794576,
					1,
					300
				};
				frequency="0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\4000",
					0.79432821,
					1,
					325
				};
				frequency="0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\5000",
					0.89125091,
					1,
					350
				};
				frequency="0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\6000",
					1,
					1,
					375
				};
				frequency="0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_Thrust_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\7000",
					1.1220185,
					1,
					400
				};
				frequency="0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\Idle",
					0.2238721,
					1
				};
				frequency="0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\1000",
					0.025118863,
					1
				};
				frequency="0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\2000",
					0.17782794,
					1
				};
				frequency="0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\3000",
					0.31622776,
					1
				};
				frequency="0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\4000",
					0.35481337,
					1
				};
				frequency="0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\5000",
					0.39810717,
					1
				};
				frequency="0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\6000",
					0.39810717,
					1
				};
				frequency="0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\7000",
					0.44668359,
					1
				};
				frequency="0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume="engineOn*(1-camPos)*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\Idle",
					0.31622776,
					1
				};
				frequency="0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\1000",
					0.35481337,
					1
				};
				frequency="0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\2000",
					0.39810717,
					1
				};
				frequency="0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\3000",
					0.44668359,
					1
				};
				frequency="0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\4000",
					0.50118721,
					1
				};
				frequency="0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\5000",
					0.56234133,
					1
				};
				frequency="0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\6000",
					0.63095737,
					1
				};
				frequency="0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_Thrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\HQ\202\7000",
					0.70794576,
					1
				};
				frequency="0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
		};
		class RenderTargets
		{
			class commander_display
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.5;
				};
			};
			class commander_2_display
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.5;
				};
			};
			class driver_display
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.5;
				};
			};
			class Rear_Camera
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.5;
				};
			};
		};
		driverLeftHandAnimName="steering_wheel";
		driverRightHandAnimName="steering_wheel";
		thrustDelay=0.5;
		brakeIdleSpeed=1.78;
		maxSpeed=157;
		fuelCapacity=3.3333333;
		wheelCircumference=2.8050001;
		antiRollbarForceCoef=1.9;
		antiRollbarForceLimit=5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=150;
		idleRpm=400;
		redRpm=3500;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.575,
				"N",
				0,
				"D1",
				2.5,
				"D2",
				2,
				"D3",
				1.5,
				"D4",
				1
			};
			TransmissionRatios[]=
			{
				"Low",
				2.3
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			gearUpMaxCoef=0.80000001;
			gearDownMaxCoef=0.5;
			gearUpMinCoef=0.44999999;
			gearDownMinCoef=0.15000001;
			transmissionDelay=2;
		};
		simulation="carx";
		differentialType="rear_open";
		dampersBumpCoef=3;
		enginePower=200;
		maxOmega=370;
		peakTorque=370;
		torqueCurve[]=
		{
			{0,0},
			{0.025,0.85000002},
			{0.30000001,0.89999998},
			{0.5,0.94999999},
			{0.69999999,1},
			{0.80000001,0.89999998},
			{0.89999998,0.80000001},
			{1,0.5}
		};
		changeGearMinEffectivity[]={1,0.15000001,1,1,1,1,1,1};
		latency=1.5;
		switchTime=0.31;
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.3;
		clutchStrength=20;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=0.5;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		dustBackLeftPos="wheel_1_2_bound";
		dustBackRightPos="wheel_2_2_bound";
		dustFrontLeftPos="wheel_1_1_bound";
		dustFrontRightPos="wheel_2_1_bound";
		secondaryExplosion="false";
		numberPhysicalWheels=4;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=30;
				MOI=2.8;
				dampingRate=0.5;
				dampingRateDamaged=5;
				dampingRateDestroyed=5000;
				maxBrakeTorque=900;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.16;
				mMaxDroop=0.1;
				sprungMass=400;
				springStrength=36631;
				springDamperRate=1920;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,0.80000001},
					{0.5,0.80000001},
					{1,0.80000001}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				frictionVsSlipGraph[]=
				{
					{0,0.55000001},
					{0.5,0.60000002},
					{1,1}
				};
				maxHandBrakeTorque=3000;
			};
			class RF: LF
			{
				boneName="wheel_2_1";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				frictionVsSlipGraph[]=
				{
					{0,0.55000001},
					{0.5,0.60000002},
					{1,1}
				};
				maxHandBrakeTorque=3000;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustEffectOffroad";
			};
			class Exhaust2
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="ExhaustEffectOffroad";
			};
			class Exhaust3
			{
				position="exhaust3_pos";
				direction="exhaust3_dir";
				effect="ExhaustEffectOffroad";
			};
			class Exhaust4
			{
				position="exhaust4_pos";
				direction="exhaust4_dir";
				effect="ExhaustEffectOffroad";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"Jonzie_carpack\Universal_cars\tex\Jonzie_car_paint_old.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_damage.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_destruct.rvmat",
				"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Car_paint.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_damage.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_destruct.rvmat",
				"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Car_mat_paint.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_damage.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_destruct.rvmat",
				"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Car_paint_old_XB.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Car_paint_old_XB_damage.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_destruct.rvmat",
				"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Highway_Patrol.rvmat",
				"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Highway_Patrol_damage.rvmat",
				"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Body_destruct.rvmat"
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1300,1300,2200};
				ambient[]={5,5,7};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=80;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=80;
				useFlare=0;
				dayLight=1;
				flareSize=1;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class Right2: Right
			{
				position="R_light_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="L_light_flare";
				useFlare=1;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right",
				"Left2",
				"Right2"
			}
		};
	};
	class Jonzie_Public_truck_base: Truck_F
	{
		mapSize=12.09;
		author="Jonzie";
		_generalMacro="Jonzie_Public_truck_base";
		displayName="Jonzie_Public_truck_base";
		colourchart="1";
		vehicleClass="Jonzie_Vehicles";
		model="";
		HeadAimDown=5;
		picture="\A3\soft_f_beta\Truck_02\data\UI\Truck_02_covered_CA.paa";
		Icon="\A3\soft_f_beta\Truck_02\data\UI\Map_Truck_02_CA.paa";
		cost=50000;
		audible=30;
		sensitivity=2.5;
		sensitivityEar=0.0074999998;
		weapons[]=
		{
			"TruckHorn3"
		};
		coefInside=2;
		coefInsideHeur=2;
		coefSpeedInside=2;
		insideSoundCoef=0.5;
		outsideSoundFilter=0;
		insideDetectCoef=0.5;
		occludeSoundsWhenIn=0.5;
		obstructSoundsWhenIn=1;
		obstructSoundLFRatio=1;
		occludeSoundLFRatio=1;
		magazines[]={};
		armor=100;
		damageResistance=0.0024300001;
		accuracy=0.30000001;
		terrainCoef=2;
		wheelCircumference=3.776;
		turnCoef=3.7;
		steerAheadSimul=0.5;
		steerAheadPlan=0.38;
		scope=1;
		transportSoldier=1;
		transportAmmo=0;
		transportRepair=0;
		secondaryExplosion="false";
		collisionEffect="";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		initCargoAngleY=185;
		attenuationEffectType="CarAttenuation";
		class EventHandlers
		{
			Init="(_this select 0) execVM ""\Jonzie_Code\functions\Universal_Cars\Random_Skins.sqf"",(_this select 0) execVM ""\Jonzie_Code\functions\Universal_Cars\Plate_Skins.sqf""";
			GetIn="(_this select 0) execVM ""\Jonzie_Code\functions\Universal_Cars\Indicators.sqf""";
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				name="wheel_1_1_steering";
				armor=1;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				name="wheel_1_2_steering";
				armor=1;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLMWheel: HitLMWheel
			{
				name="wheel_1_3_steering";
				armor=1;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLBWheel: HitLBWheel
			{
				name="wheel_1_4_steering";
				armor=1;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRFWheel: HitRFWheel
			{
				name="wheel_2_1_steering";
				armor=1;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				name="wheel_2_2_steering";
				armor=1;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRMWheel: HitRMWheel
			{
				name="wheel_2_3_steering";
				armor=1;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRBWheel: HitRBWheel
			{
				name="wheel_2_4_steering";
				armor=1;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitFuel
			{
				armor=500;
				material=-1;
				name="palivo";
				visual="";
				passThrough=0.2;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				name="motor";
				visual="";
				passThrough=0.2;
			};
			class HitBody: HitBody
			{
				visual="Body";
				passThrough=1;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.25;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.25;
			};
			class HitGlass6: HitGlass6
			{
				armor=0.25;
			};
			class HitGlass7
			{
				armor=0.1;
				material=-1;
				name="glass7";
				visual="glass7";
				passThrough=0;
				explosionShielding=2;
			};
			class HitGlass8
			{
				armor=0.1;
				material=-1;
				name="glass8";
				visual="glass8";
				passThrough=0;
				explosionShielding=2;
			};
		};
		class AnimationSources: AnimationSources
		{
			class HitLFWheel
			{
				source="Hit";
				hitpoint="HitLFWheel";
				raw=1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint="HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint="HitLF2Wheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint="HitRF2Wheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint="HitLBWheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint="HitRBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint="HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint="HitRMWheel";
			};
			class HitGlass1
			{
				source="Hit";
				hitpoint="HitGlass1";
				raw=1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint="HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint="HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint="HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint="HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint="HitGlass6";
			};
			class HitGlass7: HitGlass1
			{
				hitpoint="HitGlass7";
			};
			class HitGlass8: HitGlass1
			{
				hitpoint="HitGlass8";
			};
			class Lift
			{
				source="user";
				animPeriod=4;
				initPhase=0;
			};
			class Slide
			{
				source="user";
				animPeriod=5;
				initPhase=0;
			};
			class Ram
			{
				source="user";
				animPeriod=21;
				initPhase=0;
			};
			class Ram_push
			{
				source="user";
				animPeriod=11;
				initPhase=0;
			};
			class Ramp
			{
				source="user";
				animPeriod=11;
				initPhase=0;
			};
			class Fake
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Wood
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Logs
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Lights
			{
				source="user";
				animPeriod=0.5;
			};
			class L_Slide
			{
				source="user";
				animPeriod=2;
			};
			class R_Slide
			{
				source="user";
				animPeriod=2;
			};
			class Left
			{
				source="user";
				animPeriod=2e-006;
			};
			class Right
			{
				source="user";
				animPeriod=2e-006;
			};
			class lightbar
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AUX
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Curtain
			{
				source="user";
				animPeriod=10;
				initPhase=0;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"Jonzie_carpack\Universal_cars\tex\Jonzie_car_paint_old.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_damage.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_destruct.rvmat",
				"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Car_paint.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_damage.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_destruct.rvmat",
				"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Car_mat_paint.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_damage.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_destruct.rvmat",
				"Jonzie_Carpack\Universal_Cars\tex\Jonzie_Car_paint_old_XB.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_damage.rvmat",
				"Jonzie_carpack\Universal_cars\tex\Jonzie_Body_destruct.rvmat"
			};
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\getin",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\getout",
			0.56234133,
			1,
			20
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\int_start",
			0.39810717,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\ext_start",
			0.63095737,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\int_stop",
			0.39810717,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\ext_stop",
			0.63095737,
			1,
			200
		};
		Crash0[]=
		{
			"",
			1,
			1,
			100
		};
		Crash1[]=
		{
			"",
			1,
			1,
			100
		};
		Crash2[]=
		{
			"",
			1,
			1,
			100
		};
		Crash3[]=
		{
			"",
			1,
			1,
			100
		};
		Crash4[]=
		{
			"",
			1,
			1,
			100
		};
		ArmorCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		WoodCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_00",
					0.35481337,
					1,
					200
				};
				frequency="0.95	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*camPos*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_01",
					0.39810717,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_02",
					0.39810717,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_03",
					0.44668359,
					1,
					250
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_04",
					0.50118721,
					1,
					300
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_05",
					0.50118721,
					1,
					300
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_06",
					0.56234133,
					1,
					300
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*camPos*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_00",
					0.50118721,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_01",
					0.50118721,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_02",
					0.56234133,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_03",
					0.63095737,
					1,
					250
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_04",
					0.79432821,
					1,
					350
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_05",
					0.89125091,
					1,
					350
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_06",
					1,
					1,
					400
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_00",
					0.2238721,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_01",
					0.25118864,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_02",
					0.2818383,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_03",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_04",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_05",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_06",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_00",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_01",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_02",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_03",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_04",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_05",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_06",
					0.70794576,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2",
					0.79432821,
					1,
					120
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					1.2589254,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.50118721,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustEffectHTruck";
			};
		};
		wheelDamageThreshold=0.69999999;
		wheelDestroyThreshold=0.99000001;
		wheelDamageRadiusCoef=0.94999999;
		wheelDestroyRadiusCoef=0.69999999;
		class TransportItems
		{
		};
		thrustDelay=0.5;
		brakeIdleSpeed=1.78;
		maxSpeed=110;
		fuelCapacity=28.264841;
		fuelConsumptionRate=26;
		antiRollbarForceCoef=0;
		antiRollbarForceLimit=5;
		antiRollbarSpeedMin=0;
		antiRollbarSpeedMax=20;
		idleRpm=600;
		redRpm=3000;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.2309999,
				"N",
				0,
				"D1",
				2.957,
				"D2",
				1.858,
				"D3",
				1.311,
				"D4",
				1,
				"D5",
				0.65200001
			};
			TransmissionRatios[]=
			{
				"High",
				5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.5;
		};
		simulation="carx";
		dampersBumpCoef=6;
		differentialType="Rear_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=55;
		enginePower=362;
		maxOmega=314.16;
		peakTorque=1100;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.89999998,0.89999998,0.89999998,0.89999998,0.89999998};
		torqueCurve[]=
		{
			{0,0},
			{0.185,0.713},
			{0.34999999,0.97500002},
			{0.5,1},
			{0.75,0.97500002},
			{0.85000002,0.755},
			{1,0.62699997}
		};
		switchTime=0.31;
		class Wheels
		{
			class L1
			{
				boneName="wheel_1_1";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=80;
				MOI=40;
				dampingRate=0.079999998;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=9000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				mMaxDroop=0.15000001;
				sprungMass=3000;
				springStrength=250000;
				springDamperRate=25000;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				boneName="wheel_1_2";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=4000;
			};
			class L3: L2
			{
				boneName="wheel_1_3";
				steering=0;
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
				maxHandBrakeTorque=4000;
			};
			class R1: L1
			{
				boneName="wheel_2_1";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class R2: L2
			{
				boneName="wheel_2_2";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				side="right";
				maxHandBrakeTorque=4000;
			};
			class R3: R2
			{
				boneName="wheel_2_3";
				steering=0;
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				maxHandBrakeTorque=4000;
			};
		};
		class RenderTargets
		{
			class mirrors_1
			{
				renderTarget="rendertarget0";
				class mirror_1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
			class mirrors_2
			{
				renderTarget="rendertarget1";
				class mirror_2
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=1.5;
				};
			};
			class mirrors_3
			{
				renderTarget="rendertarget2";
				class mirror_3
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
			class mirrors_4
			{
				renderTarget="rendertarget3";
				class mirror_4
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
			class mirrors_5
			{
				renderTarget="rendertarget4";
				class mirror_5
				{
					pointPosition="PIP4_pos";
					pointDirection="PIP4_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
			class mirrors_6
			{
				renderTarget="rendertarget5";
				class mirror_6
				{
					pointPosition="PIP5_pos";
					pointDirection="PIP5_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=1.5;
				};
			};
			class mirrors_7
			{
				renderTarget="rendertarget6";
				class mirror_7
				{
					pointPosition="PIP6_pos";
					pointDirection="PIP6_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
		};
		driverRightHandAnimName="";
		driverAction="Truck_02_Driver";
		cargoAction[]=
		{
			"passenger_apc_narrow_generic01",
			"passenger_injured_medevac_truck02"
		};
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1",
			"Compartment1",
			"Compartment2"
		};
		extCameraPosition[]={0,2,-13};
		typicalCargo[]=
		{
			"c_man_1",
			"c_man_1",
			"c_man_1"
		};
		hasGunner=0;
		getInAction="GetInMantis";
		getOutAction="GetOutMedium";
		cargoIsCoDriver[]={1,1,0};
		cargoGetInAction[]=
		{
			"GetInMantis",
			"GetInMantis",
			"GetInHemttBack"
		};
		cargoGetOutAction[]=
		{
			"GetOutMedium",
			"GetOutMedium",
			"GetOutHighZamak"
		};
		showNVGCargo[]={0,1};
		soundAttenuationCargo[]={1,0};
		class ViewPilot: ViewPilot
		{
			initAngleX=30;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=90;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=80;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class Right2: Right
			{
				useFlare=1;
				position="R_light_flare";
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0.5;
					quadratic=100;
					hardLimitStart=0.5;
					hardLimitEnd=1;
				};
			};
			class Left2: Left
			{
				useFlare=1;
				position="L_light_flare";
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0.5;
					quadratic=100;
					hardLimitStart=0.5;
					hardLimitEnd=1;
				};
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right",
				"Left2",
				"Right2"
			}
		};
		class Turrets
		{
		};
		hiddenSelections[]=
		{
			"Body",
			"Lett_1",
			"Lett_2",
			"Lett_3",
			"num_1",
			"num_2",
			"num_3",
			"num_4",
			"Curtain_Skin"
		};
		hiddenSelectionsTextures[]=
		{
			"\Jonzie_Carpack\Universal_Cars\tex\37dbcb77.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\j.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\o.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\n.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\z.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\i.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\e.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\9.paa",
			"\jonzie_tow_truck\tex\skin_0.paa"
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_Truck_02_lib";
		};
	};
	class Jonzie_Public_Prime_Mover: Jonzie_Public_truck_base
	{
		author="Jonzie";
		scope=1;
		_generalMacro="Jonzie_Prime_Mover";
		displayName="Jonzie_Prime_Mover";
		vehicleClass="Jonzie_Vehicles";
		model="";
		fuelCapacity=350;
		maxSpeed=143;
		wheelCircumference=6.27;
		driverLeftHandAnimName="steering_wheel";
		driverLeftLegAnimName="Brake";
		driverRightLegAnimName="Accelerator";
		differentialType="Rear_limited";
		clutchStrength=55;
		idleRpm=600;
		redRpm=3000;
		maxOmega=287.98001;
		enginePower=544;
		peakTorque=4500;
		coefInside=2;
		coefInsideHeur=2;
		coefSpeedInside=2;
		audible=6;
		sensitivity=2.5;
		sensitivityEar=0.0074999998;
		insideSoundCoef=0.5;
		outsideSoundFilter=0;
		insideDetectCoef=0.5;
		occludeSoundsWhenIn=0.5;
		obstructSoundsWhenIn=1;
		obstructSoundLFRatio=1;
		occludeSoundLFRatio=1;
		weapons[]=
		{
			"Jonzie_horn_TruckHorn"
		};
		torqueCurve[]=
		{
			{0,0.2},
			{0.278,0.5},
			{0.34999999,0.85000002},
			{0.461,0.94999999},
			{0.60000002,1},
			{0.69999999,0.94999999},
			{0.80000001,0.69999999},
			{1,0.40000001}
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\Idle.ogg",
					0.35481337,
					1,
					200
				};
				frequency="0.95	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*camPos*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\1000.ogg",
					0.39810717,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\1500.ogg",
					0.39810717,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\2000.ogg",
					0.44668359,
					1,
					250
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\3000.ogg",
					0.50118721,
					1,
					300
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\3500.ogg",
					0.50118721,
					1,
					300
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\4000.ogg",
					0.56234133,
					1,
					300
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*camPos*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\Idle.ogg",
					0.50118721,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\1000.ogg",
					0.50118721,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\1500.ogg",
					0.56234133,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\2000.ogg",
					0.63095737,
					1,
					250
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\3000.ogg",
					0.79432821,
					1,
					350
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\3500.ogg",
					0.89125091,
					1,
					350
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\4000.ogg",
					1,
					1,
					400
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\Idle.ogg",
					0.2238721,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\1000.ogg",
					0.25118864,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\1500.ogg",
					0.2818383,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\2000.ogg",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\3000.ogg",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\3500.ogg",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\4000.ogg",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\Idle.ogg",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\1000.ogg",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\1500.ogg",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\2000.ogg",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\3000.ogg",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\3500.ogg",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"Jonzie_Sounds\Cummins_ISX\4000.ogg",
					0.70794576,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
		};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-8.9700003,
				"N",
				0,
				"D1",
				5,
				"D2",
				2.75,
				"D3",
				1.4,
				"D4",
				0.94999999,
				"D5",
				0.71399999
			};
			TransmissionRatios[]=
			{
				"High",
				4.5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		class RenderTargets
		{
			class Left_mirror
			{
				renderTarget="rendertarget1";
				class mirror
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
			class Right_mirror
			{
				renderTarget="rendertarget2";
				class mirror
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
			class Left_Small_mirror
			{
				renderTarget="rendertarget3";
				class mirror
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
			class Right_Small_mirror
			{
				renderTarget="rendertarget4";
				class mirror
				{
					pointPosition="PIP4_pos";
					pointDirection="PIP4_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
			class Reversing_Camera
			{
				renderTarget="rendertarget5";
				class Camera
				{
					pointPosition="PIP5_pos";
					pointDirection="PIP5_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="Jonzie_ExhaustTruckEffect";
			};
			class Exhaust2
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="Jonzie_ExhaustTruckEffect";
			};
		};
		class EventHandlers
		{
			init="(_this select 0) execVM ""\Jonzie_Code\functions\Universal_Cars\Random_Skins.sqf"",(_this select 0) execVM ""\Jonzie_Code\functions\Universal_Cars\Plate_Skins.sqf"",_this execVM ""\Jonzie_Code\functions\Trailers\Prime_Mover_Start.sqf""";
			engine="[_this select 0] spawn Jonzie_fnc_newTrailer,[_this select 0] spawn Jonzie_fnc_Tow_help,if (isServer) then {{[vehicle (_this select 0), _x] call Jonzie_fnc_Cargo; }forEach ((vehicle (_this select 0)) getVariable 'trailers')};";
			GetIn="(_this select 0) execVM ""\Jonzie_Code\functions\Universal_Cars\Indicators.sqf"",[_this select 0] spawn Jonzie_fnc_newTrailer;";
		};
		numberPhysicalWheels=6;
		class Wheels
		{
			class L1
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=80;
				MOI=40;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=25000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				mMaxDroop=0.15000001;
				sprungMass=2000;
				springStrength=94000;
				springDamperRate=9000;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				sprungMass=6734;
				springStrength=168358;
				springDamperRate=26937;
				maxCompression=0;
				mMaxDroop=0;
				maxHandBrakeTorque=4000;
			};
			class L3: L2
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
			};
			class R1: L1
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class R2: L2
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				side="right";
			};
			class R3: L2
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
			};
		};
	};
	class Jonzie_Public_Trailer_Base: Truck_F
	{
		HeadAimDown=5;
		cost=50000;
		audible=30;
		insideDetectCoef=0.5;
		insideSoundCoef=0.031622801;
		sensitivity=2.5;
		sensitivityEar=0.0074999998;
		weapons[]=
		{
			"TruckHorn3"
		};
		coefInside=2;
		coefInsideHeur=2;
		coefSpeedInside=2;
		outsideSoundFilter=0;
		occludeSoundsWhenIn=0.5;
		obstructSoundsWhenIn=1;
		obstructSoundLFRatio=1;
		occludeSoundLFRatio=1;
		magazines[]={};
		armor=320;
		damageResistance=0.0024300001;
		accuracy=0.30000001;
		terrainCoef=2;
		wheelCircumference=3.776;
		turnCoef=3.7;
		steerAheadSimul=0.5;
		steerAheadPlan=0.38;
		transportSoldier=0;
		transportAmmo=0;
		transportRepair=0;
		secondaryExplosion="false";
		collisionEffect="";
		initCargoAngleY=185;
		attenuationEffectType="CarAttenuation";
		class HitPoints: HitPoints
		{
			class HitWheel_1_1: HitLFWheel
			{
				name="wheel_1_1_steering";
			};
			class HitWheel_1_2: HitLBWheel
			{
				name="wheel_1_2_steering";
			};
			class HitWheel_1_3: HitLMWheel
			{
				name="wheel_1_3_steering";
			};
			class HitWheel_1_4: HitLF2Wheel
			{
				name="wheel_1_4_steering";
			};
			class HitWheel_1_5: HitLF2Wheel
			{
				name="wheel_1_5_steering";
			};
			class HitWheel_1_6: HitLF2Wheel
			{
				name="wheel_1_6_steering";
			};
			class HitWheel_1_7: HitLF2Wheel
			{
				name="wheel_1_7_steering";
			};
			class HitWheel_1_8: HitLF2Wheel
			{
				name="wheel_1_8_steering";
			};
			class HitWheel_1_9: HitLF2Wheel
			{
				name="wheel_1_9_steering";
			};
			class HitWheel_1_10: HitLF2Wheel
			{
				name="wheel_1_10_steering";
			};
			class HitWheel_1_11: HitLF2Wheel
			{
				name="wheel_1_11_steering";
			};
			class HitWheel_1_12: HitLF2Wheel
			{
				name="wheel_1_12_steering";
			};
			class HitWheel_2_1: HitRFWheel
			{
				name="wheel_2_1_steering";
			};
			class HitWheel_2_2: HitRBWheel
			{
				name="wheel_2_2_steering";
			};
			class HitWheel_2_3: HitRMWheel
			{
				name="wheel_2_3_steering";
			};
			class HitWheel_2_4: HitRF2Wheel
			{
				name="wheel_2_4_steering";
			};
			class HitWheel_2_5: HitRF2Wheel
			{
				name="wheel_2_5_steering";
			};
			class HitWheel_2_6: HitRF2Wheel
			{
				name="wheel_2_6_steering";
			};
			class HitWheel_2_7: HitRF2Wheel
			{
				name="wheel_2_7_steering";
			};
			class HitWheel_2_8: HitRF2Wheel
			{
				name="wheel_2_8_steering";
			};
			class HitWheel_2_9: HitRF2Wheel
			{
				name="wheel_2_9_steering";
			};
			class HitWheel_2_10: HitRF2Wheel
			{
				name="wheel_2_10_steering";
			};
			class HitWheel_2_11: HitRF2Wheel
			{
				name="wheel_2_11_steering";
			};
			class HitWheel_2_12: HitRF2Wheel
			{
				name="wheel_2_12_steering";
			};
		};
		class AnimationSources
		{
			class HitWheel_1_1
			{
				source="Hit";
				hitpoint="HitWheel_1_1";
				raw=1;
			};
			class HitWheel_1_2: HitWheel_1_1
			{
				hitpoint="HitWheel_1_2";
			};
			class HitWheel_1_3: HitWheel_1_1
			{
				hitpoint="HitWheel_1_3";
			};
			class HitWheel_1_4: HitWheel_1_1
			{
				hitpoint="HitWheel_1_4";
			};
			class HitWheel_1_5: HitWheel_1_1
			{
				hitpoint="HitWheel_1_5";
			};
			class HitWheel_1_6: HitWheel_1_1
			{
				hitpoint="HitWheel_1_6";
			};
			class HitWheel_1_7: HitWheel_1_1
			{
				hitpoint="HitWheel_1_7";
			};
			class HitWheel_1_8: HitWheel_1_1
			{
				hitpoint="HitWheel_1_8";
			};
			class HitWheel_1_9: HitWheel_1_1
			{
				hitpoint="HitWheel_1_9";
			};
			class HitWheel_1_10: HitWheel_1_1
			{
				hitpoint="HitWheel_1_10";
			};
			class HitWheel_1_11: HitWheel_1_1
			{
				hitpoint="HitWheel_1_11";
			};
			class HitWheel_1_12: HitWheel_1_1
			{
				hitpoint="HitWheel_1_12";
			};
			class HitWheel_2_1: HitWheel_1_1
			{
				hitpoint="HitWheel_2_1";
			};
			class HitWheel_2_2: HitWheel_1_1
			{
				hitpoint="HitWheel_2_2";
			};
			class HitWheel_2_3: HitWheel_1_1
			{
				hitpoint="HitWheel_2_3";
			};
			class HitWheel_2_4: HitWheel_1_1
			{
				hitpoint="HitWheel_2_4";
			};
			class HitWheel_2_5: HitWheel_1_1
			{
				hitpoint="HitWheel_2_5";
			};
			class HitWheel_2_6: HitWheel_1_1
			{
				hitpoint="HitWheel_2_6";
			};
			class HitWheel_2_7: HitWheel_1_1
			{
				hitpoint="HitWheel_2_7";
			};
			class HitWheel_2_8: HitWheel_1_1
			{
				hitpoint="HitWheel_2_8";
			};
			class HitWheel_2_9: HitWheel_1_1
			{
				hitpoint="HitWheel_2_9";
			};
			class HitWheel_2_10: HitWheel_1_1
			{
				hitpoint="HitWheel_2_10";
			};
			class HitWheel_2_11: HitWheel_1_1
			{
				hitpoint="HitWheel_2_11";
			};
			class HitWheel_2_12: HitWheel_1_1
			{
				hitpoint="HitWheel_2_12";
			};
		};
		soundGetIn[]=
		{
			"",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"",
			0.56234133,
			1,
			20
		};
		soundEngineOnInt[]=
		{
			"",
			0.39810717,
			1
		};
		soundEngineOnExt[]=
		{
			"",
			0.63095737,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"",
			0.39810717,
			1
		};
		soundEngineOffExt[]=
		{
			"",
			0.63095737,
			1,
			200
		};
		Crash0[]=
		{
			"",
			1,
			1,
			100
		};
		Crash1[]=
		{
			"",
			1,
			1,
			100
		};
		Crash2[]=
		{
			"",
			1,
			1,
			100
		};
		Crash3[]=
		{
			"",
			1,
			1,
			100
		};
		Crash4[]=
		{
			"",
			1,
			1,
			100
		};
		ArmorCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		WoodCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"",
					0.35481337,
					1,
					200
				};
				frequency="0.95	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*camPos*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"",
					0.39810717,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"",
					0.39810717,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"",
					0.44668359,
					1,
					250
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					300
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					300
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"",
					0.56234133,
					1,
					300
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*camPos*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"",
					0.50118721,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"",
					0.56234133,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"",
					0.63095737,
					1,
					250
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"",
					0.79432821,
					1,
					350
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"",
					0.89125091,
					1,
					350
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"",
					1,
					1,
					400
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"",
					0.2238721,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"",
					0.25118864,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"",
					0.2818383,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"",
					0.70794576,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2",
					0.79432821,
					1,
					120
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					1.2589254,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.50118721,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
		};
		class Exhausts
		{
		};
		wheelDamageThreshold=0.69999999;
		wheelDestroyThreshold=0.99000001;
		wheelDamageRadiusCoef=0.94999999;
		wheelDestroyRadiusCoef=0.69999999;
		class TransportItems
		{
		};
		thrustDelay=0.5;
		brakeIdleSpeed=1.78;
		maxSpeed=105;
		fuelCapacity=350;
		fuelConsumptionRate=26;
		antiRollbarForceCoef=0;
		antiRollbarForceLimit=5;
		antiRollbarSpeedMin=0;
		antiRollbarSpeedMax=20;
		idleRpm=600;
		redRpm=3000;
		simulation="carx";
		dampersBumpCoef=6;
		differentialType="Rear_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=55;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0.2},
			{0.278,0.5},
			{0.34999999,0.85000002},
			{0.461,0.94999999},
			{0.60000002,1},
			{0.69999999,0.94999999},
			{0.80000001,0.69999999},
			{1,0.40000001}
		};
		switchTime=0.31;
		driverRightHandAnimName="";
		driverAction="Truck_02_Driver";
		cargoAction[]=
		{
			"passenger_apc_narrow_generic01"
		};
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1",
			"Compartment1",
			"Compartment2"
		};
		extCameraPosition[]={0,2,-13};
		typicalCargo[]=
		{
			"c_man_1",
			"c_man_1",
			"c_man_1"
		};
		hasGunner=0;
		getInAction="GetInMantis";
		getOutAction="GetOutMedium";
		cargoIsCoDriver[]={1,1,0};
		cargoGetInAction[]=
		{
			"GetInMantis",
			"GetInMantis",
			"GetInHemttBack"
		};
		cargoGetOutAction[]=
		{
			"GetOutMedium",
			"GetOutMedium",
			"GetOutHighZamak"
		};
		showNVGCargo[]={0,1};
		soundAttenuationCargo[]={1,0};
		class ViewPilot: ViewPilot
		{
			initAngleX=30;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class Reflectors
		{
		};
		aggregateReflectors[]={};
		class Turrets
		{
		};
		hiddenSelections[]=
		{
			"Body",
			"Lett_1",
			"Lett_2",
			"Lett_3",
			"num_1",
			"num_2",
			"num_3",
			"num_4",
			"Curtain_Skin"
		};
		hiddenSelectionsTextures[]=
		{
			"\Jonzie_Carpack\Universal_Cars\tex\37dbcb77.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\j.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\o.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\n.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\z.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\i.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\e.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\9.paa",
			"\Jonzie_Trailer_Pack\tex\skin_0.paa"
		};
		scope=1;
		displayName="Jonzie_Public_Trailer_Base";
		model="";
		mapSize=9.4499998;
		author="Jonzie";
		_generalMacro="Jonzie_Public_Trailer_Base";
		photo="\Jonzie_Carpack\Universal_Cars\tex\Debug.paa";
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\Jonzie_Code\functions\Universal_Cars\Random_Skins.sqf"",(_this select 0) execVM ""\Jonzie_Code\functions\Universal_Cars\Plate_Skins.sqf"",[_this select 0] execVM ""\Jonzie_Code\functions\Trailers\Trailers_Start.sqf""";
		};
		getInRadius=0.001;
		class RenderTargets
		{
		};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				0,
				"N",
				0,
				"D1",
				0,
				"D2",
				0,
				"D3",
				0,
				"D4",
				0,
				"D5",
				0,
				"D6",
				0,
				"D7"
			};
			TransmissionRatios[]=
			{
				"manual",
				0
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		class Library
		{
			libTextDesc="Trailers for Semi Trucks";
		};
		side=3;
		faction="CIV_F";
		crew="C_man_1";
		enginePower=200;
		maxOmega=260;
		peakTorque=1300;
		picture="\A3\soft_f_beta\Truck_02\data\UI\Truck_02_transport_CA.paa";
		Icon="\A3\soft_f_beta\Truck_02\data\UI\Map_Truck_02_dump_CA.paa";
		castCargoShadow=1;
		engineStartSpeed=1.5;
		class Wheels
		{
			class L1
			{
				boneName="wheel_1_1";
				steering=0;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=80;
				MOI=40;
				dampingRate=0.079999998;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=0;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				mMaxDroop=0.15000001;
				sprungMass=583;
				springStrength=83333;
				springDamperRate=13333;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				boneName="wheel_1_2";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
			};
			class L3: L1
			{
				boneName="wheel_1_3";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
			};
			class R1: L1
			{
				boneName="wheel_2_1";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				side="right";
			};
			class R2: L1
			{
				boneName="wheel_2_2";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				side="right";
			};
			class R3: L1
			{
				boneName="wheel_2_3";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				side="right";
			};
		};
		class UserActions
		{
			class Dolly_Up
			{
				displayName="Dolly Up";
				radius=5;
				position="Dolly_Pos";
				onlyforplayer=0;
				condition="this animationPhase ""Dolly"" == 0";
				statement="this animate [""Dolly"", 1];this animate [""Dolly_Handle_spin"", 1];this animate [""Dolly_Handle_hide"", 1];this animate [""Dolly_Handle_unhide"", 1]";
			};
			class Dolly_Down
			{
				displayName="Dolly Down";
				radius=5;
				position="Dolly_Pos";
				onlyforplayer=0;
				condition="this animationPhase ""Dolly"" == 1;";
				statement="this animate [""Dolly"", 0];this animate [""Dolly_Handle_spin"", 0];this animate [""Dolly_Handle_hide"", 0];this animate [""Dolly_Handle_unhide"", 0]";
			};
			class Pin_Down
			{
				displayName="Hitch Trailer";
				radius=5;
				position="Dolly_Pos";
				onlyforplayer=0;
				condition="this animationPhase ""Pin"" == 0";
				statement="[this] execVM ""\Jonzie_Code\functions\Trailers\Hitch.sqf""";
			};
			class Pin_Up
			{
				displayName="Unhitch Trailer";
				radius=5;
				position="Dolly_Pos";
				onlyforplayer=0;
				condition="this animationPhase ""Pin"" == 1";
				statement="[this] execVM ""\Jonzie_Code\functions\Trailers\Unhitch.sqf""";
			};
		};
	};
	class Jonzie_Dolly: Jonzie_Public_Trailer_Base
	{
		scope=1;
		displayName="Dolly";
		model="";
		author="Jonzie";
		_generalMacro="Jonzie_Dolly";
		photo="\Jonzie_Carpack\Universal_Cars\tex\Debug.paa";
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\Jonzie_Code\functions\Universal_Cars\Random_Skins.sqf"",(_this select 0) execVM ""\Jonzie_Code\functions\Universal_Cars\Plate_Skins.sqf"",[_this select 0] execVM ""\Jonzie_Code\functions\Trailers\Dolly_Start.sqf""";
		};
		class UserActions: UserActions
		{
			class Con_Ass
			{
				displayName="Connection Assistant";
				radius=5;
				position="Dolly_Pos";
				onlyforplayer=0;
				condition="this animationPhase ""Dolly"" > -0.5;this animationPhase ""Pin"" == 0;";
				statement="[this] execVM ""\Jonzie_Code\functions\Trailers\Con_Ass.sqf"";";
			};
			class Dolly_Up
			{
				displayName="Dolly Up";
				radius=5;
				position="Dolly_Pos";
				onlyforplayer=0;
				condition="this animationPhase ""Dolly"" == 0";
				statement="this animate [""Dolly"", 1];this animate [""Dolly_Handle_spin"", 1];this animate [""Dolly_Handle_hide"", 1];this animate [""Dolly_Handle_unhide"", 1]";
			};
			class Dolly_Down
			{
				displayName="Dolly Down";
				radius=5;
				position="Dolly_Pos";
				onlyforplayer=0;
				condition="this animationPhase ""Dolly"" == 1;";
				statement="this animate [""Dolly"", 0];this animate [""Dolly_Handle_spin"", 0];this animate [""Dolly_Handle_hide"", 0];this animate [""Dolly_Handle_unhide"", 0]";
			};
			class Pin_Down
			{
				displayName="Hitch Trailer";
				radius=5;
				position="Dolly_Pos";
				onlyforplayer=0;
				condition="this animationPhase ""Pin"" == 0";
				statement="this animate [""Pin"", 1];this animate [""Hitch_Hide"", 1];[this] execVM ""\Jonzie_Code\functions\Trailers\Hitch_Dolly.sqf""";
			};
			class Pin_Up
			{
				displayName="Unhitch Trailer";
				radius=5;
				position="Dolly_Pos";
				onlyforplayer=0;
				condition="this animationPhase ""Pin"" == 1";
				statement="this animate [""Pin"",0];this animate [""Hitch_Hide"", 0];[this] execVM ""\Jonzie_Code\functions\Trailers\Trailers_End.sqf"";[this] execVM ""\Jonzie_Code\functions\Trailers\Dolly_End.sqf""";
			};
		};
		class Library
		{
			libTextDesc="Flat Bed used for transporting shipping container and other objects.";
		};
		colourchart="0";
		wheelCircumference=2.444;
	};
	class Jonzie_Trailer_A: Jonzie_Public_Trailer_Base
	{
		scope=1;
		displayName="Jonzie_Trailer_A";
		model="";
		author="Jonzie";
		_generalMacro="Jonzie_Trailer_A";
		photo="\Jonzie_Carpack\Universal_Cars\tex\Debug.paa";
		class Library
		{
			libTextDesc="Trailer A";
		};
		colourchart="0";
		wheelCircumference=3.776;
	};
	class Jonzie_Trailer_B: Jonzie_Public_Trailer_Base
	{
		scope=1;
		displayName="Jonzie_Trailer_B";
		model="";
		author="Jonzie";
		_generalMacro="Jonzie_Trailer_B";
		photo="\Jonzie_Carpack\Universal_Cars\tex\Debug.paa";
		class Library
		{
			libTextDesc="Trailer B";
		};
		colourchart="0";
		wheelCircumference=3.776;
	};
	class Land_LampAirport_off_F;
	class Jonzie_Items_base: Items_base_F
	{
		mapSize=0.55599999;
		author="Jonzie";
		_generalMacro="Jonzie_Items_base";
		scope=1;
		scopeCurator=1;
		displayName="Jonzie_Items_base";
		model="";
		icon="iconObject_2x3";
		vehicleClass="Jonzie_Objects";
		class AnimationSources
		{
			class Fake
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
		};
	};
	class Jonzie_Driving_Light_White: Land_LampAirport_off_F
	{
		author="Jonzie";
		_generalMacro="Jonzie_Driving_Light_White";
		scope=1;
		scopeCurator=0;
		displayName="Lightforce Driving Lights";
		model="\Jonzie_Carpack\Universal_Cars\Proxies\Jonzie_Driving_Lights.p3d";
		hiddenSelections[]=
		{
			"Hit_light"
		};
		hiddenSelectionsTextures[]=
		{
			"\Jonzie_Carpack\Universal_Cars\tex\lightforce_white.paa"
		};
		aggregateReflectors[]=
		{
			
			{
				"Driving_Light"
			}
		};
		class AnimationSources
		{
			class Fake
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Hit_Glass
			{
				source="Hit";
				hitpoint="Hit_Glass";
				raw=1;
			};
		};
		class EventHandlers
		{
			init="_this execVM ""\Jonzie_Code\functions\Universal_Cars\Truck_Ligths.sqf""";
		};
		class HitPoints
		{
			class Hit_Glass
			{
				armor=0.25;
				material=-1;
				name="Hit_Glass";
				visual="";
				passThrough=0;
				explosionShielding=2;
			};
		};
		class Reflectors
		{
			class Driving_Light
			{
				color[]={8000,8000,8000};
				ambient[]={20,20,20};
				position="Light_1";
				direction="Light_1_end";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=15;
				outerAngle=140;
				coneFadeCoef=10;
				intensity=75;
				useFlare=1;
				dayLight=1;
				flareSize=1;
				flareMaxDistance=1800;
				blinking=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0.1;
					quadratic=0;
					hardLimitStart=800;
					hardLimitEnd=1800;
				};
			};
		};
	};
	class Jonzie_Driving_Light_Red: Jonzie_Driving_Light_White
	{
		author="Jonzie";
		_generalMacro="Jonzie_Driving_Light_Red";
		hiddenSelectionsTextures[]=
		{
			"\Jonzie_Carpack\Universal_Cars\tex\Lightforce_Red.paa"
		};
		class Reflectors
		{
			class Driving_Light
			{
				color[]={8000,500,500};
				ambient[]={50,10,10};
				position="Light_1";
				direction="Light_1_end";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=10;
				outerAngle=100;
				coneFadeCoef=10;
				intensity=50;
				useFlare=1;
				dayLight=1;
				flareSize=1;
				flareMaxDistance=1800;
				blinking=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0.1;
					quadratic=0;
					hardLimitStart=800;
					hardLimitEnd=1800;
				};
			};
		};
	};
	class Jonzie_Driving_Lights_Raptor: Jonzie_Driving_Light_White
	{
		author="Jonzie";
		_generalMacro="Jonzie_Driving_Lights_Raptor";
		displayName="Raptor Driving Light";
		model="\Jonzie_Carpack\Universal_Cars\Proxies\Jonzie_Driving_Lights_Raptor.p3d";
		class EventHandlers
		{
			init="_this execVM ""\Jonzie_Code\functions\Universal_Cars\Raptor_Ligtht.sqf""";
		};
	};
	class Jonzie_Light_Yellow: Land_LampAirport_off_F
	{
		author="Jonzie";
		_generalMacro="Jonzie_Light_Yellow";
		scope=1;
		scopeCurator=0;
		displayName="Light Yellow";
		model="\Jonzie_Carpack\Universal_Cars\Proxies\Jonzie_Light_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		aggregateReflectors[]=
		{
			
			{
				"Driving_Light"
			}
		};
		class AnimationSources
		{
			class Fake
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Hit_Glass
			{
				source="Hit";
				hitpoint="Hit_Glass";
				raw=1;
			};
		};
		class EventHandlers
		{
			init="_this execVM ""\Jonzie_Code\functions\Tow_Truck\Truck_Ligths.sqf""";
		};
		class HitPoints
		{
			class Hit_Glass
			{
				armor=0.25;
				material=-1;
				name="Hit_Glass";
				visual="";
				passThrough=0;
				explosionShielding=2;
			};
		};
		class Reflectors
		{
			class Driving_Light
			{
				color[]={900,900,0};
				ambient[]={5,5,0};
				position="Light_1";
				direction="Light_1_end";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=90;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=80;
				useFlare=1;
				dayLight=1;
				flareSize=1;
				flareMaxDistance=400;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
		};
	};
	class Jonzie_Light_Yellow_2: Jonzie_Light_Yellow
	{
		model="\Jonzie_Carpack\Universal_Cars\Proxies\Jonzie_Light_2.p3d";
	};
	class Jonzie_Light_White: Land_LampAirport_off_F
	{
		author="Jonzie";
		_generalMacro="Jonzie_Light_White";
		scope=1;
		scopeCurator=0;
		displayName="Light White";
		model="\Jonzie_Carpack\Universal_Cars\Proxies\Jonzie_Light_3.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		aggregateReflectors[]=
		{
			
			{
				"Driving_Light"
			}
		};
		class AnimationSources
		{
			class Fake
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Hit_Glass
			{
				source="Hit";
				hitpoint="Hit_Glass";
				raw=1;
			};
		};
		class EventHandlers
		{
			init="_this execVM ""\Jonzie_Code\functions\Tow_Truck\Work_Ligths.sqf""";
		};
		class HitPoints
		{
			class Hit_Glass
			{
				armor=0.25;
				material=-1;
				name="Hit_Glass";
				visual="";
				passThrough=0;
				explosionShielding=2;
			};
		};
		class Reflectors
		{
			class Driving_Light
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="Light_1";
				direction="Light_1_end";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=75;
				useFlare=1;
				dayLight=1;
				flareSize=1;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=60;
					hardLimitEnd=80;
				};
			};
		};
	};
	class Jonzie_Light_Blue: Land_LampAirport_off_F
	{
		author="Jonzie";
		_generalMacro="Jonzie_Light_Blue";
		scope=1;
		scopeCurator=0;
		displayName="Light Blue";
		model="\Jonzie_Carpack\Universal_Cars\Proxies\Jonzie_Light_4.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		aggregateReflectors[]=
		{
			
			{
				"Driving_Light"
			}
		};
		class AnimationSources
		{
			class Fake
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
		};
		class HitPoints
		{
			class Hit_Glass
			{
				armor=0.25;
				material=-1;
				name="Hit_Glass";
				visual="";
				passThrough=0;
				explosionShielding=2;
			};
		};
		class Reflectors
		{
			class Driving_Light
			{
				color[]={0,0,50};
				ambient[]={0,0,50};
				position="Light_1";
				direction="Light_1_end";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=360;
				outerAngle=360;
				coneFadeCoef=0;
				intensity=1;
				useFlare=0;
				dayLight=1;
				flareSize=0.15000001;
				class Attenuation
				{
					start=0;
					constant=0.5;
					linear=0;
					quadratic=0.5;
					hardLimitStart=1;
					hardLimitEnd=70;
				};
			};
		};
	};
	class Jonzie_Light_Red: Land_LampAirport_off_F
	{
		author="Jonzie";
		_generalMacro="Jonzie_Light_Red";
		scope=1;
		scopeCurator=0;
		displayName="Light Red";
		model="\Jonzie_Carpack\Universal_Cars\Proxies\Jonzie_Light_4.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		aggregateReflectors[]=
		{
			
			{
				"Driving_Light"
			}
		};
		class AnimationSources
		{
			class Fake
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Hit_Glass
			{
				source="Hit";
				hitpoint="Hit_Glass";
				raw=1;
			};
		};
		class HitPoints
		{
			class Hit_Glass
			{
				armor=0.25;
				material=-1;
				name="Hit_Glass";
				visual="";
				passThrough=0;
				explosionShielding=2;
			};
		};
		class Reflectors
		{
			class Driving_Light
			{
				color[]={50,0,0};
				ambient[]={50,0,0};
				position="Light_1";
				direction="Light_1_end";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=360;
				outerAngle=360;
				coneFadeCoef=0;
				intensity=1;
				useFlare=0;
				dayLight=1;
				flareSize=0.15000001;
				class Attenuation
				{
					start=0;
					constant=0.5;
					linear=0;
					quadratic=0.5;
					hardLimitStart=1;
					hardLimitEnd=70;
				};
			};
		};
	};
};
class CfgCloudlets
{
	class Default;
	class JonzieSmokeTruck: Default
	{
		interval="(0.05 - 0.0497 * intensity)/2";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="2 * (engineOn interpolate [0,1,4,1])";
		moveVelocity[]=
		{
			"speedX * 6",
			"speedY * 6",
			"speedZ * 6"
		};
		rotationVelocity=1;
		weight=1.15;
		volume=1;
		rubbing=0.40000001;
		size[]={0.1,0.40000001,0.60000002,0.75,0.85000002,0.92000002,1};
		sizeCoef="4 * (engineOn interpolate [0,1,4,1])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.1},
			{0.30000001,0.30000001,0.30000001,0.079999998},
			{0.30000001,0.30000001,0.30000001,0.039999999},
			{0.30000001,0.30000001,0.30000001,0.02},
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.30000001,0.30000001,0.30000001,0.0040000002},
			{0.30000001,0.30000001,0.30000001,0.0020000001},
			{0.30000001,0.30000001,0.30000001,0.001}
		};
		colorCoef[]=
		{
			0.2,
			0.2,
			0.2,
			"(intensity * 1.3 * engineOn) + (4 * (1 - engineOn))"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=1;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.18000001;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class JonzieSmokeTruckRefract: Default
	{
		interval="(0.05 - 0.049 * intensity)/2";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.2;
		moveVelocity[]=
		{
			"speedX * 2",
			"speedY * 2",
			"speedZ * 2"
		};
		rotationVelocity=1;
		weight=1.1;
		volume=1.5;
		rubbing=0.1;
		size[]={0.2,1};
		sizeCoef=1;
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.30000001},
			{0.30000001,0.30000001,0.30000001,0.18000001},
			{0.30000001,0.30000001,0.30000001,0.059999999}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.25,0.25,0.25};
		rotationVelocityVar=20;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};
class Jonzie_ExhaustTruckEffect
{
	class ExhaustsEffect01
	{
		simulation="particles";
		type="JonzieSmokeTruck";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="JonzieSmokeTruckRefract";
	};
};
class CfgVehicleClasses
{
	class Jonzie_Vehicles
	{
		displayName="Jonzie's Vehicles";
	};
	class Jonzie_Objects
	{
		displayName="Jonzie's Objects";
	};
};
class cfgMods
{
	author="76561198020285021";
	timepacked="1450104867";
};
