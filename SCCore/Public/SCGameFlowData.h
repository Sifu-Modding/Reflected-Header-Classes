#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "ESCGameInstanceState.h"
#include "SCGameFlowData.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCGameFlowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCGameInstanceState m_eInitialState;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_InitialMap;
    
    FSCGameFlowData();
};

