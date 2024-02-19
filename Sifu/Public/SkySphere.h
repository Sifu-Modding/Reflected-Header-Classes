#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SkySphere.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable)
class SIFU_API ASkySphere : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* BaseMaterial;
    
    ASkySphere(const FObjectInitializer& ObjectInitializer);

};

