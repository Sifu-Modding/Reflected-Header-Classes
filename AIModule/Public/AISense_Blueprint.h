#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISense.h"
#include "AISense_Blueprint.generated.h"

class UAIPerceptionComponent;
class UUserDefinedStruct;
class UAISenseEvent;
class AActor;
class APawn;

UCLASS(Abstract, Blueprintable, HideDropdown)
class AIMODULE_API UAISense_Blueprint : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UUserDefinedStruct> ListenerDataType;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UAIPerceptionComponent*> ListenerContainer;
    
    UPROPERTY()
    TArray<UAISenseEvent*> UnprocessedEvents;
    
public:
    UAISense_Blueprint();
    UFUNCTION(BlueprintImplementableEvent)
    float OnUpdate(const TArray<UAISenseEvent*>& EventsToProcess);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnNewPawn(APawn* NewPawn);
    
    UFUNCTION(BlueprintPure)
    void GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents) const;
    
    UFUNCTION(BlueprintPure)
    void GetAllListenerActors(TArray<AActor*>& ListenerActors) const;
    
};

