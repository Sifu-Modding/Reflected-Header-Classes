#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SCContentRestrictionBlueprintHelper.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USCContentRestrictionBlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCContentRestrictionBlueprintHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsContentAvailable(FGameplayTag _wantedContentType);
    
};

