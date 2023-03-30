#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "StartUpComboDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UStartUpComboDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboSlotNames;
    
    UStartUpComboDB();
};

