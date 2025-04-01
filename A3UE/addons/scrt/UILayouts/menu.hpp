class squadRecruit
{
	idd = 100;

	class Controls
	{
		class ScrtRscCloseButton;
		class closeButton: ScrtRscCloseButton
		{
			idc = 103;
			x = 0.674 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.02 * safezoneH;
			action = "closeDialog 0; createDialog 'radioComm';";
		};

		class SimpleTitle;
		class title: SimpleTitle
		{
			idc = -1;
			text = $STR_antistasi_dialogs_squad_recruitment_menu_frame_text;
		};

		class SimpleButton;
		class l1Button: SimpleButton
		{
			idc = 104;
			text = $STR_antistasi_dialogs_infantry_squad_title;
			x = 0.257187 * safezoneW + safezoneX;
			y = 0.29 * safezoneH + safezoneY;
			action = "closeDialog 0; [] spawn A3A_fnc_squadOptions;";
		};

		class l2Button: SimpleButton
		{
			idc = 106;
			text = $STR_antistasi_dialogs_at_team_title;
			x = 0.257187 * safezoneW + safezoneX;
			y = 0.388 * safezoneH + safezoneY;
			action = "closeDialog 0;[A3A_faction_reb get 'groupAT'] spawn A3A_fnc_addFIAsquadHC";
		};

		class l3Button: SimpleButton
		{
			idc = 107;
			text = $STR_antistasi_dialogs_sniper_team_title;
			x = 0.257187 * safezoneW + safezoneX;
			y = 0.486 * safezoneH + safezoneY;
			action = "closeDialog 0;[A3A_faction_reb get 'groupSniper'] spawn A3A_fnc_addFIAsquadHC";
		};

		class l4Button: SimpleButton
		{
			idc = 108;
			text = $STR_antistasi_dialogs_mg_team_title;
			x = 0.257187 * safezoneW + safezoneX;
			y = 0.584 * safezoneH + safezoneY;
			action = "closeDialog 0;[selectRandomWeighted (A3A_faction_reb get 'staticMGs')] spawn A3A_fnc_addFIAsquadHC";
		};

		class l5Button: SimpleButton
		{
			idc = 112;
			text = $STR_antistasi_dialogs_veh_crew_title;
			x = 0.257187 * safezoneW + safezoneX;
			y = 0.682 * safezoneH + safezoneY;
			action = "closeDialog 0; [A3A_faction_reb get 'groupCrew'] spawn A3A_fnc_addFIAsquadHC";
		};
		
		class r1Button: SimpleButton
		{
			idc = 105;
			text = $STR_antistasi_dialogs_inf_team_title;
			x = 0.477 * safezoneW + safezoneX;
			y = 0.29 * safezoneH + safezoneY;
			action = "closeDialog 0;[A3A_faction_reb get 'groupMedium'] spawn A3A_fnc_addFIAsquadHC";
		};

		class r2Button: SimpleButton
		{
			idc = 109;
			text = $STR_antistasi_dialogs_at_car_title;
			x = 0.477 * safezoneW + safezoneX;
			y = 0.388 * safezoneH + safezoneY;
			action = "closeDialog 0;[selectRandomWeighted (A3A_faction_reb get 'vehiclesAT')] spawn A3A_fnc_addFIAsquadHC";
		};

		class r3Button: SimpleButton
		{
			idc = 110;
			text = $STR_antistasi_dialogs_aa_car_title;
			x = 0.477 * safezoneW + safezoneX;
			y = 0.486 * safezoneH + safezoneY;
			action = "closeDialog 0;[selectRandomWeighted (A3A_faction_reb get 'staticAA')] spawn A3A_fnc_addFIAsquadHC";
		};

		class r4Button: SimpleButton
		{
			idc = 111;
			text = $STR_antistasi_dialogs_mortar_team_title;
			x = 0.477 * safezoneW + safezoneX;
			y = 0.584 * safezoneH + safezoneY;
			action = "closeDialog 0;[selectRandomWeighted (A3A_faction_reb get 'staticMortars')] spawn A3A_fnc_addFIAsquadHC";
		};
		class r5Button: SimpleButton
		{
			idc = 113;
			text = $STR_antistasi_dialogs_mg_car_title;
			x = 0.477 * safezoneW + safezoneX;
			y = 0.682 * safezoneH + safezoneY;
			action = "closeDialog 0;[selectRandomWeighted (A3A_faction_reb get 'vehiclesLightArmed')] spawn A3A_fnc_addFIAsquadHC";
		};
	};
};
