#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeDefaults.generated.h"

class UDataTable;
class UAttributeSet;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FAttributeDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAttributeSet> Attributes;
    
    UPROPERTY(EditAnywhere)
    UDataTable* DefaultStartingTable;
    
    FAttributeDefaults();
};

