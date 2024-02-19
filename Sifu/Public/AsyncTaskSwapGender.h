#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ECharacterGender -FallbackName=ECharacterGender
#include "OnSwapGenderDelegate.h"
#include "AsyncTaskSwapGender.generated.h"

class UAsyncTaskSwapGender;
class UPlayerFightingComponent;

UCLASS(Blueprintable)
class SIFU_API UAsyncTaskSwapGender : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwapGender OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwapGender OnFail;
    
    UAsyncTaskSwapGender();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskSwapGender* BPF_SwapGender(UPlayerFightingComponent* _playerComponent, ECharacterGender _eNewGender);
    
};

