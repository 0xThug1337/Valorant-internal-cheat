#pragma once
namespace Offsets
{
	constexpr auto
		State = 0x92df200,  //uworld_state 
		Key = State + 0x38, //uworld_key 
		ProcessEvent = 0x3548490,
		StaticFindObject = 0x355ce00,
		TriggerVEH = 0x1b81b10,
		GetActorBounds = 0x4d20770;  //void GetActorBounds(bool bOnlyCollidingComponents, struct FVector& Origin, struct FVector& BoxExtent, bool bIncludeFromChildActors); // Function Engine.Actor.GetActorBounds // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
}
