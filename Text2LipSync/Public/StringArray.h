#pragma once
#include "CoreMinimal.h"
#include "StringArray.generated.h"

USTRUCT(BlueprintType)
struct FStringArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_StringArray;
    
    TEXT2LIPSYNC_API FStringArray();
};

