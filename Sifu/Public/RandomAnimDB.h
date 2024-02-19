#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "SCConditionnalAnimContainer.h"
#include "RandomAnimDB.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API URandomAnimDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCConditionnalAnimContainer> m_Anims;
    
    URandomAnimDB();

    UFUNCTION(BlueprintCallable)
    FAnimContainer BPF_PickRandomAnim(AActor* _requester);
    
};

