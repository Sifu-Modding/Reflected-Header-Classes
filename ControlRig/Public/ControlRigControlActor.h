#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ControlRigControlActor.generated.h"

class UStaticMeshComponent;
class USceneComponent;
class UControlRig;
class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS()
class CONTROLRIG_API AControlRigControlActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* ActorToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UControlRig> ControlRigClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRefreshOnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsSelectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* MaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ColorParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCastShadows;
    
private:
    UPROPERTY(Instanced)
    USceneComponent* ActorRootComponent;
    
    UPROPERTY(Transient)
    UControlRig* ControlRig;
    
    UPROPERTY(Transient)
    TArray<FName> ControlNames;
    
    UPROPERTY(Transient)
    TArray<FTransform> GizmoTransforms;
    
    UPROPERTY(Instanced, Transient)
    TArray<UStaticMeshComponent*> Components;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> Materials;
    
    UPROPERTY(Transient)
    FName ColorParameterName;
    
public:
    AControlRigControlActor();
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

