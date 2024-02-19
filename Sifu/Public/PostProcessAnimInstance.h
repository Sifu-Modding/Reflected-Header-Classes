#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCAnimInstance -FallbackName=SCAnimInstance
#include "PostProcessAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SIFU_API UPostProcessAnimInstance : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseClothAnimDrive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ClothAnimDriveCurveName;
    
    UPostProcessAnimInstance();

};

