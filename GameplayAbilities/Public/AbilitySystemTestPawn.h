#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DefaultPawn -FallbackName=DefaultPawn
#include "AbilitySystemInterface.h"
#include "GameplayCueInterface.h"
#include "AbilitySystemTestPawn.generated.h"

class UAbilitySystemComponent;

UCLASS(Blueprintable, NotPlaceable)
class GAMEPLAYABILITIES_API AAbilitySystemTestPawn : public ADefaultPawn, public IGameplayCueInterface, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystemComponent;
    
public:
    AAbilitySystemTestPawn(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ForwardGameplayCueToParent() override PURE_VIRTUAL(ForwardGameplayCueToParent,);
    
};

