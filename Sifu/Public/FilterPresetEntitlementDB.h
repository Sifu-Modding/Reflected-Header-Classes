#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "FilterPresetEntitlementDB.generated.h"

class UFilterPresetEntryDB;

UCLASS(Blueprintable)
class SIFU_API UFilterPresetEntitlementDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_AvailableForEntitlements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFilterPresetEntryDB*> m_Filters;
    
    UFilterPresetEntitlementDB();
};

