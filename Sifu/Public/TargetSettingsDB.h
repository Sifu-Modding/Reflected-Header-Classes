#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TargetSettings.h"
#include "TargetSettingsDB.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UTargetSettingsDB : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetSettings m_Settings;
    
    UTargetSettingsDB();

};

