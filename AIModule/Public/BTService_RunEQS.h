#pragma once
#include "CoreMinimal.h"
#include "BTService_BlackboardBase.h"
#include "BlackboardKeySelector.h"
#include "EQSParametrizedQueryExecutionRequest.h"
#include "BTService_RunEQS.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UBTService_RunEQS : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsBBResetOnQueryFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector EQSPauseBlackboardKey;
    
public:
    UBTService_RunEQS();
};

