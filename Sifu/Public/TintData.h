#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "TintData.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FTintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor m_inventoryIconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor m_dyeIconColor;
    
    FTintData();
};

