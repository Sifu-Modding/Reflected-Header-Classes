#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "AkAcousticPortalState.h"
#include "AkAcousticPortal.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API AAkAcousticPortal : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkAcousticPortalState InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObstructionRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> ObstructionCollisionChannel;
    
    AAkAcousticPortal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OpenPortal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AkAcousticPortalState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void ClosePortal();
    
};

