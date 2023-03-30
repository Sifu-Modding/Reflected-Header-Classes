#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ItemsDB.generated.h"

class UBaseItemData;

UCLASS(Blueprintable)
class SIFU_API UItemsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBaseItemData*> m_Items;
    
    UItemsDB();
};

