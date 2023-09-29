#pragma once
namespace Offsets
{
	constexpr auto
		State = 0xA0ED580,  //uworld_state 
		Key = State + 0xA0ED5B8, //uworld_key 
		ProcessEvent = 0x3D799D0,
		StaticFindObject = 0x3D8E070,
		TriggerVEH = 0x1DF1E00,
		GetActorBounds = 0x55F5F00;  //void GetActorBounds(bool bOnlyCollidingComponents, struct FVector& Origin, struct FVector& BoxExtent, bool bIncludeFromChildActors); // Function Engine.Actor.GetActorBounds // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
}
