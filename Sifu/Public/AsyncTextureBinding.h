#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=PropertyBinding -FallbackName=PropertyBinding
#include "AsyncTextureStruct.h"
#include "AsyncTextureBinding.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAsyncTextureBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UAsyncTextureBinding();

    UFUNCTION(BlueprintCallable)
    FAsyncTextureStruct GetValue() const;
    
};

