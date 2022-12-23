#pragma once
#include "CoreMinimal.h"
#include "InputMappingKeySlot.h"
#include "InputPresetsEnumHandler.h"
#include "InputMappingNode.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FInputMappingNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGenericInputData* m_InputData;
    
    UPROPERTY(BlueprintReadOnly)
    FInputPresetsEnumHandler m_Preset;
    
    UPROPERTY(BlueprintReadOnly)
    FInputMappingKeySlot m_KeySlot;
    
    SIFU_API FInputMappingNode();
};

