#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ResourcesTexturesData.generated.h"

class UTexture2D;

UCLASS()
class SIFU_API UResourcesTexturesData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText m_FragmentText;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_FragmentTexture;
    
    UResourcesTexturesData();
};

