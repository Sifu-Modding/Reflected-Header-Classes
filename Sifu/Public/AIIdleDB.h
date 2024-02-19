#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ELookAtApplyMode -FallbackName=ELookAtApplyMode
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCRotationWay -FallbackName=ESCRotationWay
#include "IdleAnimAndTransition.h"
#include "AIIdleDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIIdleDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIdleAnimAndTransition m_IdleAndExitAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCRotationWay m_eSouthRotationWay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanPlayFidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELookAtApplyMode m_eLookAtApplyMode;
    
    UAIIdleDB();

};

