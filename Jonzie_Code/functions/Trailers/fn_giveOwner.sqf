private ["_truck", "_trailer"];
_truck = _this select 0;
_trailer = _this select 1;
_trailer setOwner (owner _truck);