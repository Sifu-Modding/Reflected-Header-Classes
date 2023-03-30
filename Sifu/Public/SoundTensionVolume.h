#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCPlayerVolume -FallbackName=SCPlayerVolume
#include "SoundTensionThreat.h"
#include "SoundTensionVolume.generated.h"

UCLASS(Blueprintable)
class SIFU_API ASoundTensionVolume : public ASCPlayerVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTensionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundTensionThreat m_Threat;
    
public:
    ASoundTensionVolume();
};

