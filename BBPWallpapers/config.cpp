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
	class Beelo_Wallpaper: BBP_WallPaper
	{
		hiddenSelectionsTextures[]=
		{
			"BBPWallpapers\wallpapers\wallpaper_example.paa"
		};
	};
	
	class Beelo_Wallpaper_Mural: BBP_WallPaper_Mural
	{
		hiddenSelectionsTextures[]=
		{
			"BBPWallpapers\wallpapers\wallpaper_mural_example_1.paa"
		};
	};
};