#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSettings -FallbackName=WorldSettings
#include "SCWorldSettings.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseLegacyCollisionSystem;
    
public:
    ASCWorldSettings();
};

