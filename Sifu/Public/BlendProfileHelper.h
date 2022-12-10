#pragma once
#include "CoreMinimal.h"
#include "BlendProfileBySpeedStateStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ESpeedState.h"
#include "BlendProfileHelper.generated.h"

class UBlendProfile;

UCLASS(BlueprintType)
class SIFU_API UBlendProfileHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlendProfileHelper();
    UFUNCTION(BlueprintPure)
    static UBlendProfile* BPF_GetBlendProfile(const FBlendProfileBySpeedStateStruct& _blendProfileBySpeedStateStruct, ESpeedState _eSpeedState);
    
};

