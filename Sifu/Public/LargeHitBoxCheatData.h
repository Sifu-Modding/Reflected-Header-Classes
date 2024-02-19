#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=CheatData -FallbackName=CheatData
#include "HitBoxToChangeBehavior.h"
#include "LargeHitBoxCheatData.generated.h"

UCLASS(Blueprintable)
class SIFU_API ULargeHitBoxCheatData : public UCheatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vGlobalHitBoxCustomScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitBoxToChangeBehavior> m_ApplyCustomScaleHitBoxes;
    
    ULargeHitBoxCheatData();

};

