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
                    armor = 12;
                };
                class Chest {
                    armor = 12;
                };
                class Diaphragm {
                    armor = 12;
                };
                class Neck {
                    armor = 2;
                };
            };
        };
    };

    class rhs_6b23_digi: rhs_6b23 {};

    class rhs_6b23_digi_6sh92: rhs_6b23 {};

    class rhs_6b23_digi_6sh92_headset_mapcase: rhs_6b23 {};

    class rhs_6b23_digi_6sh92_radio: rhs_6b23 {};

    class rhs_6b23_digi_6sh92_vog_headset: rhs_6b23 {};

    class rhs_6b23_digi_rifleman: rhs_6b23 {};

    class rhs_6b23_digi_sniper: rhs_6b23 {};
};

#include "CfgEventHandlers.hpp"
