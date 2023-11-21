class CfgPatches {
	class CarLockExtension {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts", "ND_MISSIONS"};
	};
};

class CfgMods {
	class FixFillBottle {
		dir = "FixFillBottle";
		name = "FixFillBottle";
		type = "mod";
		dependencies[] = {"World", "ND_MISSIONS"};
		
		class defs {
			class worldScriptModule
			{
				value = "";
				files[] =
				{
					"FixFillBottle/Scripts/4_World"
				};
			};
		};
	};
};
