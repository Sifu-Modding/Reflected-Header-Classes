#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "AkPoly.h"
#include "AkSurfaceReflectorSetComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkSurfaceReflectorSetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableSurfaceReflectors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAkPoly> AcousticPolys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableDiffraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableDiffractionOnBoundaryEdges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AssociatedRoom;
    
    UAkSurfaceReflectorSetComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateSurfaceReflectorSet();
    
    UFUNCTION(BlueprintCallable)
    void SendSurfaceReflectorSet();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSurfaceReflectorSet();
    
};

