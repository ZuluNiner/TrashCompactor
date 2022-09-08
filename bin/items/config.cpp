class CfgPatches
{
	class TrashCompactor
	{
		units[] = {};
		weapons[] = {};
		name = "Trash Compactor";
		author = "Z9";
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee",
			"DZ_Gear_Cooking"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class TrashCompactor: Inventory_Base
	{
		scope=2;
		displayName="Trash Compactor";
		descriptionShort="A trash compactor for getting rid of old garbage";
		model="\DZ\gear\containers\trashcan.p3d";
		carveNavmesh=1;
		weight=4000;
		canBeDigged=0;
		itemSize[]={10,8};
		class Cargo
		{
			itemsCargoSize[]={10,8};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=0;
			energyUsagePerSecond=0.00124;
			cordTextureFile="DZ\gear\camping\Data\plug_orange_CO.paa";
			plugType=2;
			compatiblePlugTypes[]={2,6};
			cordLength=10;
		};
	};
};