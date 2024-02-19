#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PhysicalActorDependencyComponent.generated.h"

class UPhysicalActorDependencyComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API UPhysicalActorDependencyComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UPhysicalActorDependencyComponent>> m_BakedListeners;
    
public:
    UPhysicalActorDependencyComponent(const FObjectInitializer& ObjectInitializer);

};

