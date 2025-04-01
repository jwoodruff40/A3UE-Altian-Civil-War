class CfgFunctions
{
    class A3A
    {
        class AI
        {
            class staticMGDrill { file = QPATHTOFOLDER(functions\AI\fn_staticMGDrill.sqf); };
        };

        class Base
        {
            class getVehiclesAirSupport { file = QPATHTOFOLDER(functions\Base\fn_getVehiclesAirSupport.sqf); };
            class getVehiclesGroundSupport { file = QPATHTOFOLDER(functions\Base\fn_getVehiclesGroundSupport.sqf); };
            class getVehiclesGroundTransport { file = QPATHTOFOLDER(functions\Base\fn_getVehiclesGroundTransport.sqf); };
        };

        class CREATE
        {
            class AAFroadPatrol { file = QPATHTOFOLDER(functions\CREATE\fn_AAFroadPatrol.sqf); };
            class createAIAirplane { file = QPATHTOFOLDER(functions\CREATE\fn_createAIAirplane.sqf); };
            class createAIcontrols { file = QPATHTOFOLDER(functions\CREATE\fn_createAIcontrols.sqf); };
            class createAIOutposts { file = QPATHTOFOLDER(functions\CREATE\fn_createAIOutposts.sqf); };
            class createAIResources { file = QPATHTOFOLDER(functions\CREATE\fn_createAIResources.sqf); };
            class createAIMilbase { file = QPATHTOFOLDER(functions\CREATE\fn_createAIMilbase.sqf); };
            //class createAIMilAdmin { file = QPATHTOFOLDER(functions\CREATE\fn_createAIMilAdmin.sqf); };
            class createAttackForceOrbital { file = QPATHTOFOLDER(functions\CREATE\fn_createAttackForceOrbital.sqf); };
            class invaderPunish { file = QPATHTOFOLDER(functions\CREATE\fn_invaderPunish.sqf); };
            class milBuildings { file = QPATHTOFOLDER(functions\CREATE\fn_milBuildings.sqf); };
            class minefieldAAF { file = QPATHTOFOLDER(functions\CREATE\fn_minefieldAAF.sqf); };
            class patrolReinf { file = QPATHTOFOLDER(functions\CREATE\fn_patrolReinf.sqf); };
        };

        class Garrison
        {
            class checkVehicleType { file = QPATHTOFOLDER(functions\Garrison\fn_checkVehicleType.sqf); };
            class selectReinfUnits { file = QPATHTOFOLDER(functions\Garrison\fn_selectReinfUnits.sqf); };
            class selectVehicleType { file = QPATHTOFOLDER(functions\Garrison\fn_selectVehicleType.sqf); };
        };

        class init
        {
            class initVarServer { file = QPATHTOFOLDER(functions\init\fn_initVarServer.sqf); };
            class initVehClassToCrew { file = QPATHTOFOLDER(functions\init\fn_initVehClassToCrew.sqf); };
            class initRivalsVehClassToCrew { file = QPATHTOFOLDER(functions\init\fn_initRivalsVehClassToCrew.sqf); };
        };

        class Missions
        {
            class AS_Ambush { file = QPATHTOFOLDER(functions\Missions\fn_AS_Ambush.sqf); };
            class AS_Smasher { file = QPATHTOFOLDER(functions\Missions\fn_AS_Smasher.sqf); };
            class AS_Traitor { file = QPATHTOFOLDER(functions\Missions\fn_AS_Traitor.sqf); };
            class convoy { file = QPATHTOFOLDER(functions\Missions\fn_convoy.sqf); };
            class DES_Heli { file = QPATHTOFOLDER(functions\Missions\fn_DES_Heli.sqf); };
            //class DES_Artillery { file = QPATHTOFOLDER(functions\Missions\fn_DES_Artillery.sqf); };
            class DES_Vehicle { file = QPATHTOFOLDER(functions\Missions\fn_DES_Vehicle.sqf); };
            class LOG_Ammo { file = QPATHTOFOLDER(functions\Missions\fn_LOG_Ammo.sqf); };
            class LOG_Salvage { file = QPATHTOFOLDER(functions\Missions\fn_LOG_Salvage.sqf); };
            //class LOG_Airdrop { file = QPATHTOFOLDER(functions\Missions\fn_LOG_Airdrop.sqf); };
            class LOG_Crashsite { file = QPATHTOFOLDER(functions\Missions\fn_LOG_Crashsite.sqf); };
            class LOG_Crashsite_Satellite { file = QPATHTOFOLDER(functions\Missions\fn_LOG_Crashsite_Satellite.sqf); };
            class LOG_Helicrash { file = QPATHTOFOLDER(functions\Missions\fn_LOG_Helicrash.sqf); };
            class REP_Antenna { file = QPATHTOFOLDER(functions\Missions\fn_REP_Antenna.sqf); };
            class RES_Deserters { file = QPATHTOFOLDER(functions\Missions\fn_RES_Deserters.sqf); };
            class RES_Refugees { file = QPATHTOFOLDER(functions\Missions\fn_RES_Refugees.sqf); };
            class RES_Informer { file = QPATHTOFOLDER(functions\Missions\fn_RES_Informer.sqf); };
            class RES_Shipwreck { file = QPATHTOFOLDER(functions\Missions\fn_RES_Shipwreck.sqf); };
            class RIV_ATT_Cell { file = QPATHTOFOLDER(functions\Missions\fn_RIV_ATT_Cell.sqf); };
            class RIV_ATT_Hideout { file = QPATHTOFOLDER(functions\Missions\fn_RIV_ATT_Hideout.sqf); };
            class RIV_ATT_Transfer { file = QPATHTOFOLDER(functions\Missions\fn_RIV_ATT_Transfer.sqf); };
            class RIV_AS_Traitor { file = QPATHTOFOLDER(functions\Missions\fn_RIV_AS_Traitor.sqf); };
            class RIV_ENC_Rivals { file = QPATHTOFOLDER(functions\Missions\fn_RIV_ENC_Rivals.sqf); };
            class RIV_SUPP_Salvage { file = QPATHTOFOLDER(functions\Missions\fn_RIV_SUPp_Salvage.sqf); };
        };

        class Supports
        {
            class SUP_ASF { file = QPATHTOFOLDER(functions\Supports\fn_SUP_ASF.sqf); };
            class SUP_CAS { file = QPATHTOFOLDER(functions\Supports\fn_SUP_CAS.sqf); };
            class SUP_CASDive { file = QPATHTOFOLDER(functions\Supports\fn_SUP_CASDive.sqf); };
            class SUP_UAV { file = QPATHTOFOLDER(functions\Supports\fn_SUP_UAV.sqf); };
            class SUP_UAVAttack { file = QPATHTOFOLDER(functions\Supports\fn_SUP_UAVAttack.sqf); };
            class SUP_airstrike { file = QPATHTOFOLDER(functions\Supports\fn_SUP_airstrike.sqf); };
            class SUP_artillery { file = QPATHTOFOLDER(functions\Supports\fn_SUP_artillery.sqf); };
            class SUP_howitzer { file = QPATHTOFOLDER(functions\Supports\fn_SUP_howitzer.sqf); };
            class SUP_mortar { file = QPATHTOFOLDER(functions\Supports\fn_SUP_mortar.sqf); };
        };

        class FunctionsTemplates
        {
            class compileMissionAssets { file = QPATHTOFOLDER(functions\Templates\fn_compileMissionAssets.sqf); };
            class loadFaction { file = QPATHTOFOLDER(functions\Templates\fn_loadFaction.sqf); };
        };
    };
};
