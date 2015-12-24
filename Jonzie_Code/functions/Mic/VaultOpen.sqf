private["_veh_sl"];
_veh_sl = _this;
_veh_sl animate ["Vault_Combination", 1];
_veh_sl animate ["Vault_RotateUp", 1];
_veh_sl animate ["Vault_RotateDown", 1];
_veh_sl animate ["Vault_TransitionUp", 1];
_veh_sl animate ["Vault_TransitionDown", 1];
_veh_sl animate ["Vault_TransitionLeft", 1];
_veh_sl animate ["Vault_TransitionRight", 1];
sleep 4;
_veh_sl animate ["Vault_Combination", 0];
_veh_sl animate ["Vault_RotateUp", 0];
_veh_sl animate ["Vault_RotateDown", 0];
_veh_sl animate ["Vault_TransitionUp", 0];
_veh_sl animate ["Vault_TransitionDown", 0];
_veh_sl animate ["Vault_TransitionLeft", 0];
_veh_sl animate ["Vault_TransitionRight", 0];

while {alive _veh_sl} do {
	if (_veh_sl animationPhase "Vault_Combination" > 0 && getdammage _veh_sl < 0.9) then 
	{			
		sleep 4;
		waitUntil {(_veh_sl animationPhase "Vault_Combination" == 1)};
		_veh_sl animate ["Vault_Door", 1];
		waitUntil {(_veh_sl animationPhase "Vault_Door" == 1)};
		waitUntil {(_veh_sl animationPhase "Vault_Door" == 0)};
		_veh_sl animate ["Vault_Combination", 0];
		_veh_sl animate ["Vault_RotateUp", 0];
		_veh_sl animate ["Vault_RotateDown", 0];
		_veh_sl animate ["Vault_TransitionUp", 0];
		_veh_sl animate ["Vault_TransitionDown", 0];
		_veh_sl animate ["Vault_TransitionLeft", 0];
		_veh_sl animate ["Vault_TransitionRight", 0];
	} 
	else 
	{
		waitUntil {(_veh_sl animationPhase "Vault_Combination" > 0 && getdammage _veh_sl < 0.9)};
	};
};
exit;