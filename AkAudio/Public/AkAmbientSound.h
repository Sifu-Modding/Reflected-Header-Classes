#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AkAmbientSound.generated.h"

class UAkComponent;
class UAkAudioEvent;

UCLASS()
class AKAUDIO_API AAkAmbientSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay)
    bool StopWhenOwnerIsDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay)
    bool AutoPost;
    
    AAkAmbientSound();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopAmbientSound();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StartAmbientSound();
    
};

