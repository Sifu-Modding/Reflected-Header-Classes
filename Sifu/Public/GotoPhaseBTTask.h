#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "AIPhaseNodeSoftLink.h"
#include "GotoPhaseBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UGotoPhaseBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIPhaseNodeSoftLink m_phaseSoftLink;
    
    UGotoPhaseBTTask();

};

