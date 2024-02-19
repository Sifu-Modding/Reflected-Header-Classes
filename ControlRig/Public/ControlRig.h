#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NodeMappingProviderInterface -FallbackName=NodeMappingProviderInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=PropertyPath -ObjectName=CachedPropertyPath -FallbackName=CachedPropertyPath
#include "ControlRigDrawContainer.h"
#include "ERigExecutionType.h"
#include "RigHierarchyContainer.h"
#include "RigInfluenceMapPerEvent.h"
#include "Templates/SubclassOf.h"
#include "ControlRig.generated.h"

class UAnimationDataSourceRegistry;
class UAssetUserData;
class UControlRig;
class UControlRigGizmoLibrary;
class URigVM;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CONTROLRIG_API UControlRig : public UObject, public INodeMappingProviderInterface, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERigExecutionType ExecutionType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URigVM* VM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigHierarchyContainer Hierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCachedPropertyPath> InputProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCachedPropertyPath> OutputProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigDrawContainer DrawContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationDataSourceRegistry* DataSourceRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> EventQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigInfluenceMapPerEvent Influences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UControlRig* InteractionRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UControlRig> InteractionRigClass;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
public:
    UControlRig();

    UFUNCTION(BlueprintCallable)
    void SetInteractionRigClass(TSubclassOf<UControlRig> InInteractionRigClass);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionRig(UControlRig* InInteractionRig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UControlRig> GetInteractionRigClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UControlRig* GetInteractionRig() const;
    

    // Fix for true pure virtual functions not being implemented
};

