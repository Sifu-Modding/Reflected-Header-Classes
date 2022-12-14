#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneViewExtensionIsActiveFunctor -FallbackName=SceneViewExtensionIsActiveFunctor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OpenColorIODisplayConfiguration.h"
#include "OpenColorIODisplayExtensionWrapper.generated.h"

class UOpenColorIODisplayExtensionWrapper;

UCLASS(BlueprintType)
class OPENCOLORIO_API UOpenColorIODisplayExtensionWrapper : public UObject {
    GENERATED_BODY()
public:
    UOpenColorIODisplayExtensionWrapper();
    UFUNCTION(BlueprintCallable)
    void SetSceneExtensionIsActiveFunctions(const TArray<FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);
    
    UFUNCTION(BlueprintCallable)
    void SetSceneExtensionIsActiveFunction(const FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenColorIOConfiguration(FOpenColorIODisplayConfiguration InDisplayConfiguration);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSceneExtension();
    
    UFUNCTION(BlueprintCallable)
    static UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration, const FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
    
};

