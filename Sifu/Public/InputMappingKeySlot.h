#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
#include "EVirtualAction.h"
#include "InputMappingKeySlot.generated.h"

USTRUCT(BlueprintType)
struct FInputMappingKeySlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVirtualAction m_eVirtualAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> m_Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> m_Axis;
    
public:
    SIFU_API FInputMappingKeySlot();
};

