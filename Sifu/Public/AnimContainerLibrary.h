#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CardinalChangementAnimContainer.h"
#include "SpeedStateAnimContainer.h"
#include "OrientedRotationAnimContainer.h"
#include "RotationAnimContainer.h"
#include "ESpeedState.h"
#include "ETransitionRotation.h"
#include "QuadrantAnimContainer.h"
#include "EQuadrantTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCCardinalPoints -FallbackName=ESCCardinalPoints
#include "CardinalAnimContainer.h"
#include "AnimContainerLibrary.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAnimContainerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimContainerLibrary();
    UFUNCTION(BlueprintPure)
    static void GetSpeedStateAnim(const FSpeedStateAnimContainer& _animContainer, ESpeedState _eSpeedState, FAnimContainer& _result);
    
    UFUNCTION(BlueprintPure)
    static void GetRotationAnim(const FRotationAnimContainer& _animContainer, ETransitionRotation _eTransitionRotation, FAnimContainer& _result);
    
    UFUNCTION(BlueprintPure)
    static void GetQuadrantAnim(const FQuadrantAnimContainer& _animContainer, EQuadrantTypes _eQuadrant, FAnimContainer& _result);
    
    UFUNCTION(BlueprintPure)
    static void GetOrientedRotationAnim(const FOrientedRotationAnimContainer& _animContainer, ETransitionRotation _eTransitionRotation, bool _bIsLeft, FAnimContainer& _result);
    
    UFUNCTION(BlueprintPure)
    static void GetCardinalChangementAnim(const FCardinalChangementAnimContainer& _animContainer, ESCCardinalPoints _eInCardinal, ESCCardinalPoints _eOutCardinal, FAnimContainer& _result);
    
    UFUNCTION(BlueprintPure)
    static void GetCardinalAnim(const FCardinalAnimContainer& _animContainer, ESCCardinalPoints _eCardinal, FAnimContainer& _result);
    
};

