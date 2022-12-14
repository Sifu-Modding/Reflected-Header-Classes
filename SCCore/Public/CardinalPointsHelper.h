#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ESCCardinalPoints.h"
#include "CardinalPointsHelper.generated.h"

UCLASS(BlueprintType)
class SCCORE_API UCardinalPointsHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCardinalPointsHelper();
    UFUNCTION(BlueprintPure)
    static ESCCardinalPoints BPF_Mirror(ESCCardinalPoints _eCardinalPoint, bool _bMirror, bool _bIgnoreVertical);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsNone(ESCCardinalPoints _eCardinalPoint);
    
    UFUNCTION(BlueprintPure)
    static ESCCardinalPoints BPF_GetCardinalPointFromAngle(float _fAngle, float _fEastWestTolerance);
    
};

