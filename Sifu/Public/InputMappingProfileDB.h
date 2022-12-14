#pragma once
#include "CoreMinimal.h"
#include "InputContext.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "InputMappingProfileDB.generated.h"

class UInputMappingPresets;
class UInputMappingProfileUIData;
class UInputMappingProfileContextDB;

UCLASS(BlueprintType)
class UInputMappingProfileDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bGamepadMapping;
    
    UPROPERTY(EditAnywhere)
    UInputMappingPresets* m_PresetDB;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UInputMappingProfileUIData* m_UIData;
    
    UPROPERTY(EditAnywhere)
    TMap<InputContext, UInputMappingProfileContextDB*> m_MappingPerContext;
    
    UInputMappingProfileDB();
};

