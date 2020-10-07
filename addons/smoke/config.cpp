#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Splendid Smoke";
        author = "Zabuza";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.98;
        requiredAddons[] = {"A3_Data_F", "A3_Weapons_F"};
    };
};

class CfgCloudlets {
    class Default;

    class SmokeShellWhite: Default {
		moveVelocity[] = {0.2, 0.5, 0.1};
		size[] = {0.46, 4.5, 18};
		MoveVelocityVar[] = {0.7, 0.4, 0.7};
	};
};

#include "CfgEventHandlers.hpp"
