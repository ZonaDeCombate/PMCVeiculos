////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Thu Dec 24 16:20:56 2015 : Source 'file' date Thu Dec 24 16:20:56 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class Jonzie_Escalade : config.bin{
class CfgPatches
{
	class Jonzie_Escalade
	{
		units[] = {"Jonzie_Escalade"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F","Jonzie_Carpack","Jonzie_Code","Jonzie_Sounds"};
	};
};
class CfgVehicles
{
	class Jonzie_Public_Car_Base;
	class Jonzie_Escalade: Jonzie_Public_Car_Base
	{
		_generalMacro = "Jonzie_Escalade";
		displayName = "Cadillac Escalade ESV";
		nameSound = "Escalade";
		scope = 2;
		model = "\Jonzie_Escalade\Jonzie_Escalade";
		author = "Jonzie";
		class Library
		{
			libTextDesc = "The Escalade ESV full-size luxury SUV made by General Motors. It's 6-litre V8 engine does 0-100 in 7.3 sec and has a top speed of 230 kph.";
		};
		fuelCapacity = 10;
		transportSoldier = 5;
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\Idle.ogg",0.22387211,1,150};
				frequency = "0.9	+	((rpm/	11900) factor[(400/	11900),(1150/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(400/	11900),(700/	11900)])	*	((rpm/	11900) factor[(1100/	11900),(900/	11900)]))";
			};
			class Engine
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\1000.ogg",0.2818383,1,200};
				frequency = "0.8	+	((rpm/	11900) factor[(900/	11900),(2100/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(870/	11900),(1100/	11900)])	*	((rpm/	11900) factor[(2100/	11900),(1300/	11900)]))";
			};
			class Engine1_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\2000.ogg",0.3548134,1,240};
				frequency = "0.8	+		((rpm/	11900) factor[(1300/	11900),(3100/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(1250/	11900),(2050/	11900)])	*	((rpm/	11900) factor[(3100/	11900),(2300/	11900)]))";
			};
			class Engine2_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\3000.ogg",0.39810717,1,280};
				frequency = "0.8	+	((rpm/	11900) factor[(2200/	11900),(4100/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(2250/	11900),(3050/	11900)])	*	((rpm/	11900) factor[(4100/	11900),(3300/	11900)]))";
			};
			class Engine3_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\4000.ogg",0.4466836,1,320};
				frequency = "0.8	+	((rpm/	11900) factor[(3300/	11900),(4900/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(3250/	11900),(4050/	11900)])	*	((rpm/	11900) factor[(4870/	11900),(4200/	11900)]))";
			};
			class Engine4_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\5000.ogg",0.5011872,1,360};
				frequency = "0.8	+	((rpm/	11900) factor[(4200/	11900),(6200/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(4150/	11900),(4800/	11900)])	*	((rpm/	11900) factor[(6150/	11900),(5150/	11900)]))";
			};
			class Engine5_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\6000.ogg",0.56234133,1,420};
				frequency = "0.95	+	((rpm/	11900) factor[(5100/	11900),(6900/	11900)])*0.15";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(5100/	11900),(6100/	11900)])	*	((rpm/	11900) factor[(5700/	11900),(5400/	11900)]))";
			};
			class Engine6_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\7000.ogg",0.22387211,1,150};
				frequency = "0.9	+	((rpm/	11900) factor[(5400/	11900),(6150/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(5400/	11900),(5700/	11900)])	*	((rpm/	11900) factor[(6100/	11900),(5900/	11900)]))";
			};
			class Engine7_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\8000.ogg",0.2818383,1,200};
				frequency = "0.8	+	((rpm/	11900) factor[(5900/	11900),(7100/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(5870/	11900),(6100/	11900)])	*	((rpm/	11900) factor[(7100/	11900),(6300/	11900)]))";
			};
			class Engine8_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\9000.ogg",0.3548134,1,240};
				frequency = "0.8	+		((rpm/	11900) factor[(6300/	11900),(8100/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(6250/	11900),(7050/	11900)])	*	((rpm/	11900) factor[(8100/	11900),(7300/	11900)]))";
			};
			class Engine9_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\10000.ogg",0.39810717,1,280};
				frequency = "0.8	+	((rpm/	11900) factor[(7200/	11900),(9100/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(7250/	11900),(8050/	11900)])	*	((rpm/	11900) factor[(9100/	11900),(8300/	11900)]))";
			};
			class Engine10_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\11000.ogg",0.4466836,1,320};
				frequency = "0.8	+	((rpm/	11900) factor[(8300/	11900),(9900/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(8250/	11900),(9050/	11900)])	*	((rpm/	11900) factor[(9870/	11900),(9200/	11900)]))";
			};
			class Engine11_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\12000.ogg",0.5011872,1,360};
				frequency = "0.8	+	((rpm/	11900) factor[(9200/	11900),(11200/	11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	11900) factor[(9150/	11900),(9800/	11900)])	*	((rpm/	11900) factor[(9150/	11900),(10150/	11900)]))";
			};
			class Engine12_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\13000.ogg",0.56234133,1,420};
				frequency = "0.95	+	((rpm/	11900) factor[(10100/	11900),(11900/	11900)])*0.15";
				volume = "engineOn*camPos*((rpm/	11900) factor[(10100/	11900),(11100/	11900)])";
			};
			class IdleThrust
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\Idle.ogg",0.5011872,1,200};
				frequency = "0.9	+	((rpm/	11900) factor[(400/	11900),(1150/	11900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(400/	11900),(700/	11900)])	*	((rpm/	11900) factor[(1100/	11900),(900/	11900)]))";
			};
			class EngineThrust
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\1000.ogg",0.56234133,1,250};
				frequency = "0.8	+	((rpm/	11900) factor[(900/	11900),(2100/	11900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(870/	11900),(1100/	11900)])	*	((rpm/	11900) factor[(2100/	11900),(1300/	11900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\2000.ogg",0.63095737,1,280};
				frequency = "0.8	+		((rpm/	11900) factor[(1300/	11900),(3100/	11900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(1250/	11900),(2050/	11900)])	*	((rpm/	11900) factor[(3100/	11900),(2300/	11900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\3000.ogg",0.70794576,1,320};
				frequency = "0.8	+	((rpm/	11900) factor[(2200/	11900),(4100/	11900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(2250/	11900),(3050/	11900)])	*	((rpm/	11900) factor[(4100/	11900),(3300/	11900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\4000.ogg",0.7943282,1,360};
				frequency = "0.8	+	((rpm/	11900) factor[(3300/	11900),(4900/	11900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(3250/	11900),(4050/	11900)])	*	((rpm/	11900) factor[(4870/	11900),(4200/	11900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\5000.ogg",1,1,400};
				frequency = "0.8	+	((rpm/	11900) factor[(4200/	11900),(6200/	11900)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(4150/	11900),(4800/	11900)])	*	((rpm/	11900) factor[(6150/	11900),(5150/	11900)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\6000.ogg",1.2589254,1,450};
				frequency = "0.9	+	((rpm/	11900) factor[(5100/	11900),(6900/	11900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(5100/	11900),(6100/	11900)])	*	((rpm/	11900) factor[(5700/	11900),(5400/	11900)]))";
			};
			class Engine6_Thrust_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\7000.ogg",0.5011872,1,200};
				frequency = "0.9	+	((rpm/	11900) factor[(5400/	11900),(6150/	11900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(5400/	11900),(5700/	11900)])	*	((rpm/	11900) factor[(6100/	11900),(5900/	11900)]))";
			};
			class Engine7_Thrust_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\8000.ogg",0.56234133,1,250};
				frequency = "0.8	+	((rpm/	11900) factor[(5900/	11900),(7100/	11900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(5870/	11900),(6100/	11900)])	*	((rpm/	11900) factor[(7100/	11900),(6300/	11900)]))";
			};
			class Engine8_Thrust_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\9000.ogg",0.63095737,1,280};
				frequency = "0.8	+		((rpm/	11900) factor[(6300/	11900),(8100/	11900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(6250/	11900),(7050/	11900)])	*	((rpm/	11900) factor[(8100/	11900),(7300/	11900)]))";
			};
			class Engine9_Thrust_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\10000.ogg",0.70794576,1,320};
				frequency = "0.8	+	((rpm/	11900) factor[(7200/	11900),(9100/	11900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(7250/	11900),(8050/	11900)])	*	((rpm/	11900) factor[(9100/	11900),(8300/	11900)]))";
			};
			class Engine10_Thrust_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\11000.ogg",0.7943282,1,360};
				frequency = "0.8	+	((rpm/	11900) factor[(8300/	11900),(9900/	11900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(8250/	11900),(9050/	11900)])	*	((rpm/	11900) factor[(9870/	11900),(9200/	11900)]))";
			};
			class Engine11_Thrust_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\12000.ogg",1,1,400};
				frequency = "0.8	+	((rpm/	11900) factor[(9200/	11900),(11200/	11900)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(9150/	11900),(9800/	11900)])	*	((rpm/	11900) factor[(9150/	11900),(10150/	11900)]))";
			};
			class Engine12_Thrust_ext
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\13000.ogg",1.2589254,1,450};
				frequency = "0.9	+	((rpm/	11900) factor[(10100/	11900),(11900/	11900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	11900) factor[(10100/	11900),(11100/	11900)])";
			};
			class Idle_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\Idle.ogg",0.17782794,1};
				frequency = "0.9	+	((rpm/	11900) factor[(400/	11900),(1150/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(400/	11900),(700/	11900)])	*	((rpm/	11900) factor[(1100/	11900),(900/	11900)]))";
			};
			class Engine_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\1000.ogg",0.19952622,1};
				frequency = "0.8	+	((rpm/	11900) factor[(900/	11900),(2100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(870/	11900),(1100/	11900)])	*	((rpm/	11900) factor[(2100/	11900),(1300/	11900)]))";
			};
			class Engine1_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\2000.ogg",0.25118864,1};
				frequency = "0.8	+		((rpm/	11900) factor[(1300/	11900),(3100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(1250/	11900),(2050/	11900)])	*	((rpm/	11900) factor[(3100/	11900),(2300/	11900)]))";
			};
			class Engine2_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\3000.ogg",0.2818383,1};
				frequency = "0.8	+	((rpm/	11900) factor[(2200/	11900),(4100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(2250/	11900),(3050/	11900)])	*	((rpm/	11900) factor[(4100/	11900),(3300/	11900)]))";
			};
			class Engine3_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\4000.ogg",0.31622776,1};
				frequency = "0.8	+	((rpm/	11900) factor[(3300/	11900),(4900/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(3250/	11900),(4050/	11900)])	*	((rpm/	11900) factor[(4870/	11900),(4200/	11900)]))";
			};
			class Engine4_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\5000.ogg",0.3548134,1};
				frequency = "0.8	+	((rpm/	11900) factor[(4200/	11900),(6200/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(4150/	11900),(4800/	11900)])	*	((rpm/	11900) factor[(6150/	11900),(5150/	11900)]))";
			};
			class Engine5_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\6000.ogg",0.5011872,1};
				frequency = "0.95	+	((rpm/	11900) factor[(5100/	11900),(6900/	11900)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(5100/	11900),(6100/	11900)])	*	((rpm/	11900) factor[(5700/	11900),(5400/	11900)]))";
			};
			class Engine6_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\7000.ogg",0.17782794,1};
				frequency = "0.9	+	((rpm/	11900) factor[(5400/	11900),(6150/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(5400/	11900),(5700/	11900)])	*	((rpm/	11900) factor[(6100/	11900),(5900/	11900)]))";
			};
			class Engine7_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\8000.ogg",0.19952622,1};
				frequency = "0.8	+	((rpm/	11900) factor[(5900/	11900),(7100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(5870/	11900),(6100/	11900)])	*	((rpm/	11900) factor[(7100/	11900),(6300/	11900)]))";
			};
			class Engine8_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\9000.ogg",0.25118864,1};
				frequency = "0.8	+		((rpm/	11900) factor[(6300/	11900),(8100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(6250/	11900),(7050/	11900)])	*	((rpm/	11900) factor[(8100/	11900),(7300/	11900)]))";
			};
			class Engine9_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\10000.ogg",0.2818383,1};
				frequency = "0.8	+	((rpm/	11900) factor[(7200/	11900),(9100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(7250/	11900),(8050/	11900)])	*	((rpm/	11900) factor[(9100/	11900),(8300/	11900)]))";
			};
			class Engine10_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\11000.ogg",0.31622776,1};
				frequency = "0.8	+	((rpm/	11900) factor[(8300/	11900),(9900/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(8250/	11900),(9050/	11900)])	*	((rpm/	11900) factor[(9870/	11900),(9200/	11900)]))";
			};
			class Engine11_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\12000.ogg",0.3548134,1};
				frequency = "0.8	+	((rpm/	11900) factor[(9200/	11900),(11200/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(9150/	11900),(9800/	11900)])	*	((rpm/	11900) factor[(9150/	11900),(10150/	11900)]))";
			};
			class Engine12_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\13000.ogg",0.5011872,1};
				frequency = "0.95	+	((rpm/	11900) factor[(10100/	11900),(11900/	11900)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/	11900) factor[(10100/	11900),(11100/	11900)])";
			};
			class IdleThrust_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\Idle.ogg",0.31622776,1};
				frequency = "0.9	+	((rpm/	11900) factor[(400/	11900),(1150/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(400/	11900),(700/	11900)])	*	((rpm/	11900) factor[(1100/	11900),(900/	11900)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\1000.ogg",0.3548134,1};
				frequency = "0.8	+	((rpm/	11900) factor[(900/	11900),(2100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(870/	11900),(1100/	11900)])	*	((rpm/	11900) factor[(2100/	11900),(1300/	11900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\2000.ogg",0.39810717,1};
				frequency = "0.8	+		((rpm/	11900) factor[(1300/	11900),(3100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(1250/	11900),(2050/	11900)])	*	((rpm/	11900) factor[(3100/	11900),(2300/	11900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\3000.ogg",0.4466836,1};
				frequency = "0.8	+	((rpm/	11900) factor[(2200/	11900),(4100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(2250/	11900),(3050/	11900)])	*	((rpm/	11900) factor[(4100/	11900),(3300/	11900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\4000.ogg",0.5011872,1};
				frequency = "0.8	+	((rpm/	11900) factor[(3300/	11900),(4900/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(3250/	11900),(4050/	11900)])	*	((rpm/	11900) factor[(4870/	11900),(4200/	11900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\5000.ogg",0.56234133,1};
				frequency = "0.8	+	((rpm/	11900) factor[(4200/	11900),(6200/	11900)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(4150/	11900),(4800/	11900)])	*	((rpm/	11900) factor[(6150/	11900),(5150/	11900)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\6000.ogg",0.63095737,1};
				frequency = "0.9	+	((rpm/	11900) factor[(5100/	11900),(6900/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(5100/	11900),(6100/	11900)])	*	((rpm/	11900) factor[(5700/	11900),(5400/	11900)]))";
			};
			class Engine6_Thrust_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\7000.ogg",0.31622776,1};
				frequency = "0.9	+	((rpm/	11900) factor[(5400/	11900),(6150/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(5400/	11900),(5700/	11900)])	*	((rpm/	11900) factor[(6100/	11900),(5900/	11900)]))";
			};
			class Engine7_Thrust_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\8000.ogg",0.3548134,1};
				frequency = "0.8	+	((rpm/	11900) factor[(5900/	11900),(7100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(5870/	11900),(6100/	11900)])	*	((rpm/	11900) factor[(7100/	11900),(6300/	11900)]))";
			};
			class Engine8_Thrust_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\9000.ogg",0.39810717,1};
				frequency = "0.8	+		((rpm/	11900) factor[(6300/	11900),(8100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(6250/	11900),(7050/	11900)])	*	((rpm/	11900) factor[(8100/	11900),(7300/	11900)]))";
			};
			class Engine9_Thrust_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\10000.ogg",0.4466836,1};
				frequency = "0.8	+	((rpm/	11900) factor[(7200/	11900),(9100/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(7250/	11900),(8050/	11900)])	*	((rpm/	11900) factor[(9100/	11900),(8300/	11900)]))";
			};
			class Engine10_Thrust_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\11000.ogg",0.5011872,1};
				frequency = "0.8	+	((rpm/	11900) factor[(8300/	11900),(9900/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(8250/	11900),(9050/	11900)])	*	((rpm/	11900) factor[(9870/	11900),(9200/	11900)]))";
			};
			class Engine11_Thrust_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\12000.ogg",0.56234133,1};
				frequency = "0.8	+	((rpm/	11900) factor[(9200/	11900),(11200/	11900)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	11900) factor[(9150/	11900),(9800/	11900)])	*	((rpm/	11900) factor[(9150/	11900),(10150/	11900)]))";
			};
			class Engine12_Thrust_int
			{
				sound[] = {"\Jonzie_Escalade\Sounds\L94\13000.ogg",0.63095737,1};
				frequency = "0.9	+	((rpm/	11900) factor[(10100/	11900),(11900/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	11900) factor[(10100/	11900),(11100/	11900)])";
			};
		};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-6.167,"N",0,"D1",13.714,"D2",8.08,"D3",5.21,"D4",3.94,"D5",2.91,"D6",2.28};
			TransmissionRatios[] = {"high",3.3};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.01;
		};
		antiRollbarForceCoef = 1;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 120;
		idleRpm = 800;
		redRpm = 11900;
		differentialType = "all_open";
		maxSpeed = 230;
		acceleration = 7.3;
		maxOmega = 1246.17;
		enginePower = 301;
		peakTorque = 565;
		wheelCircumference = 6.14;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 20;
				MOI = 78.625;
				dampingRate = 0.5;
				maxBrakeTorque = 10000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				mMaxDroop = 0.15;
				sprungMass = 929;
				springStrength = 40000;
				springDamperRate = 5240;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 2.5;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
			};
			class LR: LF
			{
				boneName = "wheel_1_2";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 5000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2";
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
	timepacked = "1450106746";
};
//};
