#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshActor -FallbackName=SkeletalMeshActor
#include "SCSkeletalMeshPrimInstActor.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCSkeletalMeshPrimInstActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    ASCSkeletalMeshPrimInstActor(const FObjectInitializer& ObjectInitializer);

};

