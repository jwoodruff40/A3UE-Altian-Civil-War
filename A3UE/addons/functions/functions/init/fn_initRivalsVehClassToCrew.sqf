/*
Maintainer: Caleb Serafin
    Creates & returns a lookup table for converting a vehicle classname to 4 possible crew load-outs.
    The returned load-outs are then selected by side according to the order [Government, Invader, Rebel, Civilian]

Return Value:
    HASHMAP<
        STRING                  Vehicle class name <- key of element
        ARRAY<  <loadout?>Government loadout,  <loadout?>Invader loadout,  <loadout?>Rebel loadout,  <loadout?>Civilian loadout  >
    >

Scope: Any
Environment: Any
Public: No
Dependencies:

Example:
    How to init (inside fn_initVarServer.sqf):
        private _vehClassToCrew = call A3A_fnc_initVehClassToCrew;
        DECLARE_SERVER_VAR(A3A_vehClassToCrew,_vehClassToCrew);

    How to use:
        private _sideIndex = [west,east,resistance,civilian] find (side player);
        private _typeX = typeOf _vehicle;
        private _crewLoadout = A3A_vehClassToCrew getOrDefault [_typeX,[_groupsOcc get "grunt", _groupsInv get "grunt", _groupsReb get "staticCrew", "C_Man_1"]] select _sideIndex;
        //        ^-returned loadout to be used                        ^-----Default load-outs if veh not in templates-----^
*/
#include "..\..\script_component.hpp"
FIX_LINE_NUMBERS()



// ⬇ EDIT HERE 👇 TO ADD TEMPLATE LOAD-OUTS ⬇
private _allVehClassToCrew = [
// Vehicles categories at the top have higher priority than bellow.
// So if "Tank_F" is in both NATOLand and NATOTanks, NATOTanks should be ABOVE NATOLand, as NATOTanks is a specialised child.
    //[FactionGet(all,"vehiclesMilitia"), [FactionGet(riv,"unitRifle")]],
    [FactionGet(all,"vehiclesRivalsArmor") select {_x isEqualType ""},[FactionGet(riv,"unitCrew")]],
    [FactionGet(all,"vehiclesRivalsLight") select {_x isEqualType ""},[FactionGet(riv,"unitRifle")]],
    [FactionGet(all,"vehiclesRivalsStatics") select {_x isEqualType ""},[FactionGet(riv,"unitRifle")]],
    [FactionGet(riv,"vehiclesRivalsUavs") select {_x isEqualType ""}, ["O_UAV_AI"]],
    [FactionGet(all,"vehiclesRivalsAir") select {_x isEqualType ""},[FactionGet(riv,"unitRifle")]],    ///why FactionGet(all and not riv? why c_man and not  FactionGet(civ,"unitMan")? why no FactionGet(inv ?
    [FactionGet(all,"vehiclesRivals") select {_x isEqualType ""},[FactionGet(riv,"unitRifle")]]
];
// ⬆ STOP EDITING HERE 👋 THANK YOU, COME AGAIN ⬆

private _const_emptyArray = [];
private _const_emptyString = "";
private _vehClassToCrew = createHashMap;
reverse _allVehClassToCrew;     // Does it in reverse so that items on the top of _allVehClassToCrew have higher priority over lower elements.
{
    private _currentVehClassToCrew = _x;
    if !((_currentVehClassToCrew#0) isEqualType _const_emptyArray) then {
        Error("VehicleClassesNotArray | A vehicle category was not an array, but was instead '"+str (_currentVehClassToCrew#0)+"'. Please fix this.");
        assert false;
    } else {
        {
            if !(_x isEqualType _const_emptyString) then {
                Error("VehicleClassNotString | A vehicle was not a classname, but was instead '"+str _x+"'. Please fix this.");
                assert false;
            } else {
                _vehClassToCrew set [_x,_currentVehClassToCrew#1];      // _currentVehClassToCrew#1 is all crew load-outs that should be worn in this category's vehicles.
            };
        } forEach (_currentVehClassToCrew#0);                       // _currentVehClassToCrew#0 is all vehicle classnames in this category. ie "Hunter_GMG_F" and "Hunter_HMG_F" are in vehiclesLightArmed + vehiclesLightUnarmed.
    }
} forEach _allVehClassToCrew;

_vehClassToCrew;
