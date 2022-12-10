#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "SCWuguanUserEnumSetting.generated.h"

class USCUserDefinedEnumBinding;

USTRUCT(BlueprintType)
struct FSCWuguanUserEnumSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSoftObjectPath m_Enum;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<USCUserDefinedEnumBinding> m_Bindings;
    
    SIFU_API FSCWuguanUserEnumSetting();
};

