#pragma once
#include "CoreMinimal.h"
#include "AISense.h"
#include "AIDamageEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AISense_Damage.generated.h"

class UObject;
class AActor;

UCLASS()
class AIMODULE_API UAISense_Damage : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAIDamageEvent> RegisteredEvents;
    
    UAISense_Damage();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportDamageEvent(UObject* WorldContextObject, AActor* DamagedActor, AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation);
    
};

