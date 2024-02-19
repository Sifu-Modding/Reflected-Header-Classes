#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProvider_QueryParams -FallbackName=AIDataProvider_QueryParams
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SCAIDataProvider_QueryActionParams.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SCCORE_API USCAIDataProvider_QueryActionParams : public UAIDataProvider_QueryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFetchOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_ActionInjectionTag;
    
    USCAIDataProvider_QueryActionParams();

};

