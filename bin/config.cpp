class CfgMods
{
	class TrashCompactor
	{
		type = "mod";
		dir = "TrashCompactor";
		name = "TrashCompactor";
		author = "Z9";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"TrashCompactor/scripts/4_World"};
			};
		};
	};
};

class CfgPatches
{
	class TrashCompactorScripts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};