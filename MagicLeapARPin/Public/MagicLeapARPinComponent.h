#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EMagicLeapARPinType.h"
#include "EMagicLeapAutoPinType.h"
#include "MagicLeapARPinState.h"
#include "Templates/SubclassOf.h"
#include "MagicLeapARPinComponent.generated.h"

class AActor;
class UMagicLeapARPinSaveGame;
class USphereComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAPARPIN_API UMagicLeapARPinComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPersistentEntityPinned, bool, bRestoredOrSynced);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPersistentEntityPinLost);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMagicLeapARPinDataLoadAttemptCompleted, bool, bDataRestored);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ObjectUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicLeapAutoPinType AutoPinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPinActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMagicLeapARPinSaveGame> PinDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EMagicLeapARPinType> SearchPinTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SearchVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPersistentEntityPinned OnPersistentEntityPinned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPersistentEntityPinLost OnPersistentEntityPinLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapARPinDataLoadAttemptCompleted OnPinDataLoadAttemptCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PinnedCFUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PinnedSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMagicLeapARPinSaveGame* PinData;
    
public:
    UMagicLeapARPinComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnPin();
    
    UFUNCTION(BlueprintCallable)
    UMagicLeapARPinSaveGame* TryGetPinData(TSubclassOf<UMagicLeapARPinSaveGame> InPinDataClass, bool& OutPinDataValid);
    
    UFUNCTION(BlueprintCallable)
    bool PinToRestoredOrSyncedID();
    
    UFUNCTION(BlueprintCallable)
    bool PinToID(const FGuid& PinId);
    
    UFUNCTION(BlueprintCallable)
    void PinToBestFit();
    
    UFUNCTION(BlueprintCallable)
    bool PinSceneComponent(USceneComponent* ComponentToPin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PinRestoredOrSynced() const;
    
    UFUNCTION(BlueprintCallable)
    bool PinActor(AActor* ActorToPin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPinned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPinState(FMagicLeapARPinState& State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPinnedPinID(FGuid& PinId) const;
    
    UFUNCTION(BlueprintCallable)
    UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<UMagicLeapARPinSaveGame> NewPinDataClass);
    
    UFUNCTION(BlueprintCallable)
    void AttemptPinDataRestorationAsync();
    
    UFUNCTION(BlueprintCallable)
    bool AttemptPinDataRestoration();
    
};

