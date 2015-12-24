if (isServer) then {exit};

private["_car"];
_car = _this select 0;
_car execVM "\Jonzie_Code\functions\Mic\VaultOpen.sqf";
_car execVM "\Jonzie_Code\functions\Mic\Auto_Doors.sqf";
exit;