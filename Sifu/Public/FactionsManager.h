#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TargetableFactions.h"
#include "FactionsManager.generated.h"

UCLASS(Blueprintable)
class SIFU_API UFactionsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetableFactions m_FactionsTargetTable[6];
    
public:
    UFactionsManager();

};

