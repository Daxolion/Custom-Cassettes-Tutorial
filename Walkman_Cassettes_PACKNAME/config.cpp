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
		picture = "Walkman/gui/logo.paa";
		logoSmall = "Walkman/gui/logo.paa";
		logo = "Walkman/gui/logo.paa";
		logoOver = "Walkman/gui/logo.paa";
		tooltip = "The Walkman Mod - Additional Cassettes by YOURNAME";
		
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
				files[] = {"Walkman/scripts/common","Walkman/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Walkman/scripts/common","Walkman/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Walkman/scripts/common","Walkman/scripts/5_Mission"};
			};
			class imageSets
			{
				files[] = {"Walkman/gui/imagesets/cassette.imageset"};
			};
			
		};
	};
};

//dont edit
class CfgSoundShaders
{
	//dontedit
	class Cassette_Base_Shader;
	
	//edit
	class Custom_Cassette_SoundShader_Base: Cassette_Base_Shader
	{
		//dontedit )"","",""
		samples[] = {};
		frequency = 1;
		
		//edit
		range = 80;
		volume = 1;
	};
};

class CfgSoundSets
{
	//dontedit
	class Cassette_Base_SoundSet;
	
	//edit
	class Custom_Cassette_Base_SoundSet: Cassette_Base_SoundSet
	{
		soundShaders[] = {"Custom_Cassette_SoundShader_Base"};
	};
};