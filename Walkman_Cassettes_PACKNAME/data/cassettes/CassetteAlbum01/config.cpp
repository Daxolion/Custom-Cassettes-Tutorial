class CfgPatches
{
	//edit
	class Walkman_Cassettes_Patches_PACKNAME_CASSETTENAME
	{
		//edit
		units[] = {"CassetteAlbum01","CassetteName01"};
		
		//dontedit
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"DZ_Data","DZ_Radio","DZ_Gear_Tools","DZ_Characters","DZ_Scripts","Walkman"};
	};
};

class CfgVehicles
{
	//dontedit
	class Cassette_Base;
	
	//edit
	//duplicate
	class CassetteName01: Cassette_Base
	{
		//edit
		displayName = "CassetteName - 01";
		
		//dontedit
		model = "\dz\gear\radio\cassette.p3d";
		
		//edit
		hiddenSelectionsTextures[] = {"Walkman_Cassettes_PACKNAME\data\cassettes\CassetteAlbum01\CassetteName01.paa"};
		class CfgCassette
		{
			//edit
			soundSet = "SoundSet_CassetteName01";
		};
		
	};
	class CassetteName02: Cassette_Base
	{
		//edit
		displayName = "CassetteName - 02";
		
		//dontedit
		model = "\dz\gear\radio\cassette.p3d";
		
		//edit
		hiddenSelectionsTextures[] = {"Walkman_Cassettes_PACKNAME\data\cassettes\CassetteAlbum01\CassetteName02.paa"};
		class CfgCassette
		{
			//edit
			soundSet = "SoundSet_CassetteName02";
		};
		
	};
	class CassetteAlbum01: Cassette_Base
	{
		scope = 2;
		displayName = "CassetteName - Album";
		hiddenSelectionsTextures[] = {"Walkman_Cassettes_PACKNAME\data\cassettes\CassetteAlbum01\CassetteAlbum01.paa"};
		class CfgCassette
		{
			isPlaylist = 1;
			soundSets[] = {"SoundSet_CassetteName01","SoundSet_CassetteName02"};
		};
	};
};

class CfgSoundSets
{
	//dontedit
	class Mods_SoundSet_Base;
	
	//edit
	//duplicate
	class SoundSet_CassetteName01
	{
		//edit
		soundShaders[] = {"Shader_CassetteName01"};
	};
	
	//edit
	//duplicate
	class SoundSet_CassetteName02
	{
		//edit
		soundShaders[] = {"Shader_CassetteName02"};
	};
};
class CfgSoundShaders
{
	//dontedit
	class Cassette_SoundShader_Base;
	
	//edit
	//duplicate
	class Shader_CassetteName01: Cassette_SoundShader_Base
	{
		//edit without .ogg Filename and end
		samples[] = {{"Walkman_Cassettes_PACKNAME\data\cassettes\CassetteAlbum01\CassetteName01",1}};
	};
	
	//edit
	//duplicate
	class Shader_CassetteName02: Cassette_SoundShader_Base
	{
		//edit without .ogg Filename and end
		samples[] = {{"Walkman_Cassettes_PACKNAME\data\cassettes\CassetteAlbum01\CassetteName02",1}};
	};
	
};

