#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimationStateEntry.h"
#include "PerSkeletonAnimationSharingSetup.generated.h"

class UAnimationSharingStateProcessor;
class USkeleton;
class UAnimSharingAdditiveInstance;
class USkeletalMesh;
class UAnimSharingTransitionInstance;

USTRUCT(BlueprintType)
struct FPerSkeletonAnimationSharingSetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USkeleton* Skeleton;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimSharingTransitionInstance> BlendAnimBlueprint;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimSharingAdditiveInstance> AdditiveAnimBlueprint;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimationSharingStateProcessor> StateProcessorClass;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimationStateEntry> AnimationStates;
    
    ANIMATIONSHARING_API FPerSkeletonAnimationSharingSetup();
};

