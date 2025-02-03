////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.99
//https://mikero.bytex.digital/Downloads
//'now' is Thu Jan 23 09:21:01 2025 : 'file' last modified on Tue Feb 28 19:22:53 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BadG_Book3
	{
		units[] = {"BadG_Happaner_1","BadG_Happaner_2","BadG_Richard_1","BadG_Richard_2","BadG_Cleo_1","BadG_Cleo_2","BadG_Kochbuch","BadG_Ammo"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Camping","DZ_Gear_Tools","DZ_Weapons_Melee","DZ_Weapons_Melee_Blade"};
	};
};
class cfgMods
{
	class BadG_Book3
	{
		name = "BadG_Book3";
		credits = "BadG";
		author = "Dark_Eno";
		authorID = "0";
		version = 3;
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"BadG_Book3\scripts\4_World"};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"BadG_Book3\scripts\3_Game"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"BadG_Book3\scripts\5_Mission"};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class BadG_BookBase: Inventory_Base
	{
		scope = 0;
		model = "\DZ\gear\books\Book_kniga.p3d";
		rotationFlags = 1;
		weight = 150;
		itemSize[] = {2,2};
		inventorySlot[] = {"OpenBook","Book1","Book2","Book3","Book4","Book5","Book6","Book7","Book8","Book9","Book10","Book11","Book12","Book13","Book14","Book15","Book16","Book17","Book18","Book19","Book20","Book21","Book22","Book23","Book24","Book25","Book26","Book27","Book28","Book29","Book30","Book31","Book32","Book33","Book34","Book35","Book36","Book37","Book38","Book39","Book40","Book41","Book42","Book43","Book44","Book45","Book46","Book47","Book48","Book49","Book50"};
		hiddenSelections[] = {"zbytek"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
				};
			};
		};
	};
	class BadG_Ammo: BadG_BookBase
	{
		model = "\DZ\gear\books\Book_kniga.p3d";
		author = "BadG";
		title = "Anleitung Ammo";
		file = "BadG_Book3\htmls\Ammo_Bock_3.html";
		displayName = "Anleitung Ammo";
		descriptionShort = "Tagebuch";
		scope = 2;
		hiddenSelectionsTextures[] = {"BadG_Book3\data\textures\book\Munition.paa"};
	};
	class BadG_Happaner_1: BadG_BookBase
	{
		model = "\DZ\gear\books\Book_kniga.p3d";
		author = "Happaner";
		title = "Tagebuch ";
		file = "BadG_Book3\htmls\Wissenschaflter1.html";
		displayName = "Tagebuch von DR.Happaner";
		descriptionShort = "Tagebuch";
		scope = 2;
		hiddenSelectionsTextures[] = {"BadG_Book3\data\textures\book\book_wissenschaftler.paa"};
	};
	class BadG_Happaner_2: BadG_BookBase
	{
		author = "Happaner";
		title = "Tagebuch 2";
		file = "BadG_Book3\htmls\Wissenschaflter2.html";
		displayName = "Tagebuch von DR.Happaner 2";
		descriptionShort = "Tagebuch 2";
		scope = 2;
		hiddenSelectionsTextures[] = {"BadG_Book3\data\textures\book\book_wissenschaftler.paa"};
	};
	class BadG_Richard_1: BadG_BookBase
	{
		author = "Richard Sonnbrecker";
		title = "Tagebuch";
		file = "BadG_Book3\htmls\Richard_1.html";
		displayName = "Tagebuch von Richard Sonnbrecker";
		descriptionShort = "Tagebuch";
		scope = 2;
		hiddenSelectionsTextures[] = {"BadG_Book3\data\textures\book\bookArchalogen.paa"};
	};
	class BadG_Richard_2: BadG_BookBase
	{
		author = "Richard Sonnbrecker";
		title = "Tagebuch 2";
		file = "BadG_Book3\htmls\Richard_2.html";
		displayName = "Tagebuch von Richard Sonnbrecker das zweite";
		descriptionShort = "Tagebuch 2";
		scope = 2;
		hiddenSelectionsTextures[] = {"BadG_Book3\data\textures\book\bookArchalogen.paa"};
	};
	class BadG_Cleo_1: BadG_BookBase
	{
		author = "Cleo Sonnbrecker";
		title = "Tagebuch";
		file = "BadG_Book3\htmls\Cleo_1.html";
		displayName = "Tagebuch von Cleo Sonnbrecker";
		descriptionShort = "Tagebuch";
		scope = 2;
		hiddenSelectionsTextures[] = {"BadG_Book3\data\textures\book\bookCleo.paa"};
	};
	class BadG_Cleo_2: BadG_BookBase
	{
		author = "Cleo Sonnbrecker";
		title = "Tagebuch 2";
		file = "BadG_Book3\htmls\Cleo_2.html";
		displayName = "Tagebuch von Cleo Sonnbrecker das zweite";
		descriptionShort = "Tagebuch 2";
		scope = 2;
		hiddenSelectionsTextures[] = {"BadG_Book3\data\textures\book\bookCleo2.paa"};
	};
	class BadG_Kochbuch: BadG_BookBase
	{
		author = "BadG";
		title = "Survival Kochbuch";
		file = "BadG_Book3\htmls\Kochbuch.html";
		displayName = "Survival Kochbuch";
		descriptionShort = "Tagebuch 2";
		scope = 2;
		hiddenSelectionsTextures[] = {"BadG_Book3\data\textures\book\Kochbuch.paa"};
	};
};
