#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPhonemeDictionary.h"
#include "SCPhonemeDictionaryRow.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCPhonemeDictionaryRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPhonemeDictionary> m_Phonemes;
    
    FSCPhonemeDictionaryRow();
};

