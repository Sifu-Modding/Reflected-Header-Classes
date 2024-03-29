#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "QuadrantAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FQuadrantAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Anims[4];
    
    SIFU_API FQuadrantAnimContainer();
};

