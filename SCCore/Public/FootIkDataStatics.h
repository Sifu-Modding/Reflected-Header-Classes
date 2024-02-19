#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SCFootIkData.h"
#include "FootIkDataStatics.generated.h"

UCLASS(Blueprintable)
class UFootIkDataStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFootIkDataStatics();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsFootPlanted(const FSCFootIkData& _inFootIkData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_GetLastFoundGround(const FSCFootIkData& _inFootIkData, FVector& _vOutLocation, FVector& _vOutNormal);
    
};

