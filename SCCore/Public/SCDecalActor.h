#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalActor -FallbackName=DecalActor
#include "SCPoolableActor.h"
#include "SCDecalActor.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCDecalActor : public ADecalActor, public ISCPoolableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsPooled;
    
public:
    ASCDecalActor();
    
    // Fix for true pure virtual functions not being implemented
};

