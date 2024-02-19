#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "InheritedDataAsset.generated.h"

class UInheritedDataAsset;

UCLASS(Abstract, Blueprintable)
class SCCORE_API UInheritedDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInheritedDataAsset* m_Parent;
    
    UInheritedDataAsset();

};

