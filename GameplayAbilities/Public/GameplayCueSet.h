#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GameplayCueNotifyData.h"
#include "GameplayCueSet.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UGameplayCueSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueNotifyData> GameplayCueData;
    
    UGameplayCueSet();
};

