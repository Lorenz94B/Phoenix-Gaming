#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Blast Refract";
        author = "Taro";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.98;
        requiredAddons[] = {"A3_Data_F", "A3_Data_F_ParticleEffects"};
    };
};

class CfgCloudlets {
	class Default;

	class blast_wave_effect: Default {
		angleVar = 1;
		animationName = "";
		animationSpeed[] = {1};
		beforeDestroyScript = "";
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		colorVar[] = {0, 0, 0, 0};
		color[] = {{0.1, 0.1, 0.1, 1}, {0.25, 0.25, 0.25, 1}, {0.5, 0.5, 0.5, 1}, {0, 0, 0, 1}, {0, 0, 0, 0.5}, {0, 0, 0, 0.3}};
		interval =  3*10;
		lifeTime = 0.4;
		lifeTimeVar = 0;
		MoveVelocityVar[] = {0.2, 0.5, 0.2};
		moveVelocity[] = {0, 0, 0};
		onTimerScript = "";
		particleFSFrameCount = 1;
		particleFSIndex = 0;
		particleFSLoop = 0;
		particleFSNtieth = 1;
		particleShape = "\A3\data_f\ParticleEffects\Universal\refract";
		particleType = "Billboard";
		positionVar[] = {0.40000001, 0.1, 0.40000001};
		randomDirectionIntensity = 0.2;
		randomDirectionIntensityVar = 0;
		randomDirectionPeriod = 0.2;
		randomDirectionPeriodVar = 0;
		rotationVelocity = 0;
		rotationVelocityVar = 90;
		rubbing = 0.1;
		sizeVar = 0.5;
		size[] = {1, 2, 5, 8, 12, 17};
		timerPeriod = 1;
		volume = 7.9000001;
		weight = 10;
		};
	class blast_wave_effect_small: blast_wave_effect {
		lifeTime = 0.5;
		size[] = {1, 2, 5, 8, 12, 17};
	};
	class blast_wave_effect_medium: blast_wave_effect {
		lifeTime = 0.5;
		size[] = {1, 8, 20, 35, 50, 70};
	};
	class blast_wave_effect_large: blast_wave_effect {
		lifeTime = 0.5;
		size[] = {1, 16, 40, 70, 100, 140};
	};
	class blast_wave_effect_very_large: blast_wave_effect {
		lifeTime = 0.8;
		size[] = {1, 35, 80, 140, 200, 280};
	};
};

class IEDMineBigExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class IEDMineSmallExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class SencondaryExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class MineNondirectionalExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class MineNondirectionalExplosionSmall {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class ExplosionEffects {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class BasicAmmoExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class MineExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class ATMineExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class BoundingMineExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class DirectionalMineExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class DirectionalMineExplosionBig {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class HERocketExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class HEShellExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class ArtyShellExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class HelicopterExplosionEffects {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class HelicopterExplosionEffects2 {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class VehicleExplosionEffectsBig {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_very_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class VehicleExplosionEffects {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class RocketExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class Demo_Charge_Explode {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class M136_Explode {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class 40mm_HE_Explode {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class GrenadeExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class 80mm_Explode {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class MortarExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class 155mm_Explode {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class ATMissileExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class AAMissileExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class ATRocketExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class BombExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_very_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class AA_Explode {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class Hellfire_Explode {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class SABOT_Explode {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class MK82_Explode {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_very_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class MLRS_Explode {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_very_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class HERoundExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class 25mm_Explode {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class ExploAmmoExplosion {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class 30mmExplode {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

class 120mm_HE {
	class blast_wave_refract {
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval =  3*1;
		lifeTime = 0.9;
	};
};

#include "CfgEventHandlers.hpp"
