#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=LipSyncEmotionData -FallbackName=LipSyncEmotionData
#include "LipSyncEmotionDataArray.generated.h"

USTRUCT(BlueprintType)
struct FLipSyncEmotionDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLipSyncEmotionData> emotionArray;
    
    SCDIALOGMANAGERPLUGIN_API FLipSyncEmotionDataArray();
};

