#pragma once
#include "CoreMinimal.h"
#include "EOrderType.generated.h"

UENUM(BlueprintType)
enum class EOrderType : uint8 {
    Attack,
    Dodge,
    ParryVictim,
    Hitted,
    Guard,
    Avoided,
    FreezeFrame,
    WeaponAction,
    TakedownInstigator,
    TakedownVictim,
    KnockedDown,
    Dizzy,
    Pushed,
    PlayAnim,
    Parry,
    GrabInstigator,
    GrabVictim,
    FightingStateRecovery,
    DownBeforeStandup,
    Standup,
    UseMovable,
    ThrowObject,
    PushObject,
    PickUpObject,
    DropObject,
    PushInstigator,
    PushVictim,
    FallFromPushed,
    FallReception,
    FallGetUp,
    Reaction,
    IdleExit,
    Traversal,
    StructureBroken,
    AttackEnvInstigator,
    AttackEnvVictim,
    SwapWeaponHand,
    Fidget,
    FallOnSlope,
    PrepFocus,
    SynchronizedAttackInstigator,
    SynchronizedAttackVictim,
    WallJumpEntry,
    WallJumpAttack,
    ParryInstigator,
    TraversalClimb,
    ParryFromDown,
    DeflectSBInstigator,
    AnimSync,
    TraversalCinematic,
    RagingBull,
    Avoid,
    FallOnSlopeRecovery,
    Dash,
    FallOnSlopeEntry,
    AttackActionGeneric,
    ChargeBuildUp,
    OpeningDoor,
    HittedGeneric,
    TraversalPush,
    TraversalPushInstigator,
    TraversalDropDown,
    RainDash,
    Incapacipated,
    Jiggle,
    Deflected,
    Taunt,
    PlayBlendSpace,
    TargetReactionBlendSpace,
    MoveToWithPhysWalking,
    Count,
    None,
};

