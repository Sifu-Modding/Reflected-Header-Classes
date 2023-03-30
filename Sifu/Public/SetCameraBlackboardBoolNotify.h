#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SetCameraBlackboardBoolNotify.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class SIFU_API USetCameraBlackboardBoolNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_blackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bValueToApply;
    
public:
    USetCameraBlackboardBoolNotify();
};

