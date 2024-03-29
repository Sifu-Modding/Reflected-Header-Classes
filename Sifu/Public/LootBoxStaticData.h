#pragma once
#include "CoreMinimal.h"
#include "LootBoxStaticData.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FLootBoxStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    FLootBoxStaticData();
};

