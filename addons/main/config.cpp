#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "Brazzer";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.98;
        requiredAddons[] = {};
    };
};

class CfgMods {
    class PREFIX {
        dir = "@Phoenix-Gaming";
        name = "Phoenix Gaming";
        picture = "";
        hidePicture = "true";
        hideName = "true";
        actionName = "";
        action = "";
        description = "Client Side Mod";
    };
};

#include "CfgEventHandlers.hpp"
