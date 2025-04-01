class CfgFunctions
{
	class SCRT
	{
		class Common
		{
			class common_paradropVehicle { file = QPATHTOFOLDER(Common\fn_common_paradropVehicle.sqf); };
		};

		class Encounter
		{
			class encounter_police { file = QPATHTOFOLDER(Encounter\fn_encounter_police.sqf); };
			class encounter_vehicleMove { file = QPATHTOFOLDER(Encounter\fn_encounter_vehicleMove.sqf); };
			class encounter_vehiclePatrol { file = QPATHTOFOLDER(Encounter\fn_encounter_vehiclePatrol.sqf); };
			class encounter_postAmbush { file = QPATHTOFOLDER(Encounter\fn_encounter_postAmbush.sqf); };
			class encounter_HeliSlingloadCargo { file = QPATHTOFOLDER(Encounter\fn_encounter_HeliSlingloadCargo.sqf); };
			class encounter_frontlineSkirmish { file = QPATHTOFOLDER(Encounter\fn_encounter_frontlineSkirmish.sqf); };
		};

		class Garrison
		{
			class garrison_rollOversizeVehicle { file = QPATHTOFOLDER(Garrison\fn_garrison_rollOversizeVehicle.sqf); };
		};

		class Outpost
		{
			class outpost_createRoadblock { file = QPATHTOFOLDER(Outpost\fn_outpost_createRoadblock.sqf); };
			class outpost_createAaDistance { file = QPATHTOFOLDER(Outpost\fn_outpost_createAaDistance.sqf); };
			class outpost_createAtDistance { file = QPATHTOFOLDER(Outpost\fn_outpost_createAtDistance.sqf); };
		};

		class Rivals
		{
			class rivals_chooseGroupToSpawn { file = QPATHTOFOLDER(Rivals\fn_rivals_chooseGroupToSpawn.sqf); };
			class rivals_encounter_uavFlyby { file = QPATHTOFOLDER(Rivals\fn_rivals_encounter_uavFlyby.sqf); };
			class rivals_encounter_rovingMortar { file = QPATHTOFOLDER(Rivals\fn_rivals_encounter_rovingMortar.sqf); };
			class rivals_encounter_heliRaid { file = QPATHTOFOLDER(Rivals\fn_rivals_encounter_heliRaid.sqf); };
			class rivals_encounter_OccVsRivalsskirmish { file = QPATHTOFOLDER(Rivals\fn_rivals_encounter_OccVsRivalsskirmish.sqf); };
		};

		class Support
		{
			class support_planePayloadedRun { file = QPATHTOFOLDER(Support\fn_support_planePayloadedRun.sqf); };
			class support_planeReconRun { file = QPATHTOFOLDER(Support\fn_support_planeReconRun.sqf); };
			class support_lootHeli { file = QPATHTOFOLDER(Support\fn_support_lootHeli.sqf); };
		};

		class UI
		{
			class ui_populateVehicleBox { file = QPATHTOFOLDER(UI\fn_ui_populateVehicleBox.sqf); };
		};
	};
};