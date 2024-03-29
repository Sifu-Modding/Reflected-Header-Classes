#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "LipSync_TimedData.h"
#include "LipSync_TimedPhrase.h"
#include "LipSync_Phrase.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FLipSync_Phrase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* VoiceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLipSync_TimedData Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLipSync_TimedPhrase> Notifies;
    
    TEXT2LIPSYNC_API FLipSync_Phrase();
};

