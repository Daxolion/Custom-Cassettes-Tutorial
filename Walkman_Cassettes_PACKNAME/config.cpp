class CfgPatches
{
	//edit
	class Walkman_Cassettes_Patches_PACKNAME
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"DZ_Data","DZ_Radio","DZ_Gear_Tools","DZ_Characters","DZ_Scripts","Walkman"};
	};
};

class CfgMods
{
	//edit
	class Walkman_Cassettes_PACKNAME
	{
		//dontedit
		version = "1.0";
		dir = "Walkman_Cassettes";
		name = "Walkman_Cassettes";
		credits = "Daxolion";
		
		//edit
		author = "YOURNAME";
		authorID = "YOUR STEAMID64"; 
		
		//dontedit
		action = "URL OPEN BY CLICK";
		hideName = 0;
		hidePicture = 0;
		picture = "Walkman_Cassettes/gui/imagesets/logo.paa";
		logoSmall = "Walkman_Cassettes/gui/imagesets/logo.paa";
		logo = "Walkman_Cassettes/gui/imagesets/logo.paa";
		logoOver = "Walkman_Cassettes/gui/imagesets/logo.paa";
		tooltip = "The Walkman Mod Additional Cassettes";
		
		//edit
		overview = "PACKNAME";
		
		//dontedit
		extra = 0;
		type = "mod";
		dependencies[] = { "Game", "World", "Mission", "GUI" };
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Walkman_Cassettes/scripts/common","Walkman/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Walkman_Cassettes/scripts/common","Walkman/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Walkman_Cassettes/scripts/common","Walkman/scripts/5_Mission"};
			};
			class imageSets
			{
				files[] = {"Walkman_Cassettes/gui/imagesets/cassette.imageset"};
			};
			
		};
	};
};

//dont edit
class CfgSoundShaders
{
	class Cassette_SoundShader_Base
	{
		samples[] = {};
		frequency = 1;
		range = 80;
		volume = 1;
	};
};