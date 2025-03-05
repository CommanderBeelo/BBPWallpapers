class CfgPatches
{
	class BBPWallpapers
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.25;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"BaseBuildingPlus"
		};
	};
};
class CfgMods
{
	class BBPWallpapers
	{
		dir="BBPWallpapers";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="BBP Wallpaper Example by Beelo";
		credits="Commander Beelo";
		author="Commander Beelo";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
	};
};

class CfgVehicles
{
	class BBP_WallPaper;
	class BBP_WallPaper_Mural;
	class Beelo_BBP_Wallpaper_Example: BBP_WallPaper
	{
		scope=2;
		displayName="The WallPaper Example";
		descriptionShort="super Sweet Example wallpaper";
		hiddenSelectionsTextures[]=
		{
			"BBPWallpapers\wallpapers\WPExample.paa"
		};
	};
	class Beelo_BBP_Wallpaper_Scamtopia: BBP_WallPaper
	{
		scope=2;
		displayName="Scamtopia Corporation";
		descriptionShort="Don't buy mods from Genesis";
		hiddenSelectionsTextures[]=
		{
			"BBPWallpapers\wallpapers\WPScamtopia.paa"
		};
	};
	class Beelo_BBP_Mural_Example: BBP_WallPaper_Mural
	{
		scope=2;
		displayName="The Mural Example";
		descriptionShort="super Sweet Example";
		hiddenSelectionsTextures[]=
		{
			"BBPWallpapers\wallpapers\MExample.paa"
		};
	};
	class Beelo_Wallpaper_Mural_RedBricks: BBP_WallPaper_Mural
	{
		scope=2;
		displayName="Red Brick Mural";
		descriptionShort="Red Brick Mural";
		hiddenSelectionsTextures[]=
		{
			"BBPWallpapers\wallpapers\MRedBricks.paa"
		};
	};
	class Beelo_Wallpaper_Mural_Scamtopia: BBP_WallPaper_Mural
	{
		scope=2;
		displayName="Fuck Genesis";
		descriptionShort="Dont Buy Shit from Scamtopia, its bad for your bank account.";
		hiddenSelectionsTextures[]=
		{
			"BBPWallpapers\wallpapers\MScamtopia.paa"
		};
	};
};