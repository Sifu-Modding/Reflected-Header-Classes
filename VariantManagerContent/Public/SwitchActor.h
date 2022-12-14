#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SwitchActor.generated.h"

class USceneComponent;

UCLASS()
class VARIANTMANAGERCONTENT_API ASwitchActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    USceneComponent* SceneComponent;
    
    UPROPERTY()
    int32 LastSelectedOption;
    
public:
    ASwitchActor();
    UFUNCTION(BlueprintCallable)
    void SelectOption(int32 OptionIndex);
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedOption() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetOptions() const;
    
};

