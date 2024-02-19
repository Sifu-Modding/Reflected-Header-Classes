#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCCharacterPoseData -FallbackName=SCCharacterPoseData
#include "WGCharacterPoseData.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWGCharacterPoseData : public USCCharacterPoseData {
    GENERATED_BODY()
public:
    UWGCharacterPoseData();

};

