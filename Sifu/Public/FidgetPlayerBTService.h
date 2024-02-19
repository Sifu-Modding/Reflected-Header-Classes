#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "EAIFidgetTypes.h"
#include "FidgetPlayerBTService.generated.h"

UCLASS(Blueprintable)
class SIFU_API UFidgetPlayerBTService : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIFidgetTypes m_eFidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRestoreTypeOnCeaseRelevant;
    
public:
    UFidgetPlayerBTService();

};

