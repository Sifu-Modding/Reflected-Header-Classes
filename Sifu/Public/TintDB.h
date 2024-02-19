#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ETintEnum.h"
#include "TintData.h"
#include "TintDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UTintDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETintEnum, FTintData> m_TintsData;
    
    UTintDB();

};

