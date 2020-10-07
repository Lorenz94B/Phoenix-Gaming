#define MAINPREFIX x
#define PREFIX brz

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCH
#define BETA ##VERSION##-##beta
#define RC ##VERSION##-##RC

#define REQUIRED_VERSION 1.98
#define COMPONENT_NAME QUOTE(PHX - COMPONENT)

#include "\x\cba\addons\main\script_macros_common.hpp"

#undef PREP
#define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#define PREP_2(subFolder,fncName) [QPATHTOF(functions\subFolder\DOUBLES(fnc,fncName).sqf), QFUNC(DOUBLES(subFolder,fncName))] call CBA_fnc_compileFunction
