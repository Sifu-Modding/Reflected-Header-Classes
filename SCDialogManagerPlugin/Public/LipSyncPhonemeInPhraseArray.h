#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=LipSyncPhonemeInPhrase -FallbackName=LipSyncPhonemeInPhrase
#include "LipSyncPhonemeInPhraseArray.generated.h"

USTRUCT(BlueprintType)
struct FLipSyncPhonemeInPhraseArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLipSyncPhonemeInPhrase> phonemeArray;
    
    SCDIALOGMANAGERPLUGIN_API FLipSyncPhonemeInPhraseArray();
};

