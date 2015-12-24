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
			init="(_this select 0) execVM ""\Jonzie_Code\functions\Universal_Cars\Plate_Skins.sqf""";
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
			"\Jonzie_Carpack\Universal_Cars\number_plates\z.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\c.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\-.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\p.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\m.paa",
			"\Jonzie_Carpack\Universal_Cars\number_plates\c.paa",
			"",
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
		displayName="[ZC] Veículos PMC";
	};
};
class cfgMods
{
	author="76561198020285021";
	timepacked="1450104867";
};
