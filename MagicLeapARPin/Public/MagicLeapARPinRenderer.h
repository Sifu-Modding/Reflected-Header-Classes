#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "MagicLeapARPinRenderer.generated.h"

class AMagicLeapARPinInfoActorBase;

UCLASS(Blueprintable)
class MAGICLEAPARPIN_API AMagicLeapARPinRenderer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfoActorsVisibilityOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, AMagicLeapARPinInfoActorBase*> AllInfoActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMagicLeapARPinInfoActorBase> ClassToSpawn;
    
public:
    AMagicLeapARPinRenderer(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetVisibilityOverride(const bool InVisibilityOverride);
    
};

