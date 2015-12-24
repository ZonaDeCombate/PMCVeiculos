_Vault = _this select 0;

_Vault animate ["Vault_Combination", 1];
_Vault animate ["Vault_RotateUp", 1];
_Vault animate ["Vault_RotateDown", 1];
_Vault animate ["Vault_TransitionUp", -0.1];
_Vault animate ["Vault_TransitionDown", 0.1];
_Vault animate ["Vault_TransitionLeft", -0.1];
_Vault animate ["Vault_TransitionRight", 0.1];
sleep 5;
_Vault animate ["Vault_Door", 1];