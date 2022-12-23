#pragma once
#include "CoreMinimal.h"
#include "SCPoolableActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalActor -FallbackName=DecalActor
#include "SCDecalActor.generated.h"

UCLASS()
class SCCORE_API ASCDecalActor : public ADecalActor, public ISCPoolableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleInstanceOnly)
    bool m_bIsPooled;
    
public:
    ASCDecalActor();
    
    // Fix for true pure virtual functions not being implemented
};

