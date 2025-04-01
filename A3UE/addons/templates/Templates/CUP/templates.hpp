class Templates 
{    
    class CUP_Base;

    // ***************************** Altian Civil War *****************************
    
    class ACW_Base : CUP_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "Flex_CUP_ACW_Equipment"};
        basepath = QPATHTOFOLDER(Templates\CUP);
        logo = QPATHTOFOLDER(Templates\CUP\images\acw_logo_mod.paa);
    };

    class CUP_ACW_AAFxTFAegis : ACW_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "Flex_CUP_AAF_Faction", "Flex_CUP_ACW_Equipment", "Flex_CUP_USA_Faction"};
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_aaf_co.paa";
        name = "CUP ACW AAF & TF Aegis";
        description = $STR_A3AP_setupFactionsTab_CUP_ACW_AAF;
        file = "CUP_AI_ACW_AAF&TFAegis";
    };

    class CUP_ACW_FIA : ACW_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "Flex_CUP_ACW_Equipment", "Flex_CUP_FIA_I_Faction"};
        side = "Reb";
        flagTexture = "a3\data_f\flags\flag_fia_co.paa";
        name = "CUP ACW FIA";
        description = $STR_A3AP_setupFactionsTab_CUP_ACW_FIA;
        file = "CUP_Reb_ACW_FIA";
    };

    class CUP_ACW_FIA_Riv : ACW_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "Flex_CUP_ACW_Equipment", "Flex_CUP_FIA_I_Faction"};
        side = "Riv";
        flagTexture = "a3\data_f\flags\flag_fia_co.paa";
        name = "CUP ACW FIA";
        description = $STR_A3AP_setupFactionsTab_CUP_ACW_FIA;
        file = "CUP_Riv_ACW_FIA";
    };

    class CUP_ACW_RAV : ACW_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "Flex_CUP_ACW_Equipment", "Flex_CUP_RAV_O_Faction"};
        side = "Riv";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_rus_co.paa";
        name = "CUP ACW Raven PMC";
        description = $STR_A3AP_setupFactionsTab_CUP_ACW_RAV;
        file = "CUP_Riv_ACW_Raven_PMC";
    };

    class CUP_ACW_RAV_Reb : ACW_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "Flex_CUP_ACW_Equipment", "Flex_CUP_RAV_O_Faction"};
        side = "Reb";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_rus_co.paa";
        name = "CUP ACW Raven PMC";
        description = $STR_A3AP_setupFactionsTab_CUP_ACW_RAV;
        file = "CUP_Reb_ACW_Raven_PMC";
    };
};
