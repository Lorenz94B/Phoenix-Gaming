#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "Brazzer";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.98;
        requiredAddons[] = {"rhs_infantry"};
    };
};

class CfgWeapons {
    class ItemCore;

    class Vest_Camo_Base: ItemCore {
        class ItemInfo;
	};

    class rhs_6b23: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Abdomen {
                    armor = 16;
                };
                class Chest {
                    armor = 16;
                };
                class Diaphragm {
                    armor = 16;
                };
                class Neck {
                    armor = 4;
                };
            };
        };
    };
};

#include "CfgEventHandlers.hpp"
