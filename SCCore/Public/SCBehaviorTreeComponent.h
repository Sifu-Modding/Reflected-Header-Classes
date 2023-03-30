#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BehaviorTreeComponent -FallbackName=BehaviorTreeComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SCPoolableActorComponent.h"
#include "SCBehaviorTreeComponent.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCBehaviorTreeComponent : public UBehaviorTreeComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UBehaviorTree*> m_DynamicSubtrees;
    
public:
    USCBehaviorTreeComponent();
    
    // Fix for true pure virtual functions not being implemented
};

