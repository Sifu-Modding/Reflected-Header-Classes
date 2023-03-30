#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Templates/SubclassOf.h"
#include "ThrowableInfoForAIDataAsset.generated.h"

class AThrowableActor;

UCLASS(Blueprintable)
class SIFU_API UThrowableInfoForAIDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AThrowableActor>> m_ThrowableInfo;
    
    UThrowableInfoForAIDataAsset();
};

