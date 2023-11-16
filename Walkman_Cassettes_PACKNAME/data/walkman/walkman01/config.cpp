class CfgPatches
{
	//edit
	class Walkman_Cassettes_Patches_PACKNAME_WALKMAN01
	{
		//edit
		units[] = {"Walkman01"};
		
		//dontedit
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"DZ_Data","DZ_Radio","DZ_Gear_Tools","DZ_Characters","DZ_Scripts","Walkman"};
	};
};

class CfgVehicles
{
	//dontedit
	class Walkman;
	
	//edit
	//duplicate
	class Walkman01: Walkman
	{
		//edit
		displayName = "Walkman01";
		descriptionShort = "A Walkman is a small cassette player which people carry around so that they can listen to music, for example while they are travelling. Volume = 0.2";
		model = "Walkman_Cassette\data\walkman\walkman01\cassette.p3d";
		weight = 400;
		itemSize[] = {1,2};
		class Walkman
		{
			//edit 0.1 - 1.0
			MaxVolume = 1.0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"Walkman_Cassette\data\walkman\walkman01\walkman01.rvmat"}},{0.7,{"Walkman_Cassette\data\walkman\walkman01\walkman01.rvmat"}},{0.5,{"Walkman_Cassette\data\walkman\walkman01\walkman01_damage.rvmat"}},{0.3,{"Walkman_Cassette\data\walkman\walkman01\walkman01_damage.rvmat"}},{0.0,{"Walkman_Cassette\data\walkman\walkman01\walkman01_destruct.rvmat"}}};
				};
			};
		};		
	};
};