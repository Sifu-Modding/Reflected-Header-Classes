#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "InputMapping.h"
#include "InputMappingGroup.h"
#include "InputMappingProfileContextDB.generated.h"

UCLASS(Blueprintable)
class UInputMappingProfileContextDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputMappingGroup> m_MappingGroups;
    
    UInputMappingProfileContextDB();
    UFUNCTION(BlueprintCallable)
    FString BPF_GetInputMappingDesc(const FInputMapping& _mapping);
    
};

