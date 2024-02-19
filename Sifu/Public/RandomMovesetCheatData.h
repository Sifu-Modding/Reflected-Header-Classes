#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=CheatData -FallbackName=CheatData
#include "OverrideSettingArchetype.h"
#include "RandomMovesetCheatData.generated.h"

UCLASS(Blueprintable)
class SIFU_API URandomMovesetCheatData : public UCheatData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverrideSettingArchetype> m_ComboActionList;
    
public:
    URandomMovesetCheatData();

};

