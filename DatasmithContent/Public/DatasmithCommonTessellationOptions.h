#pragma once
#include "CoreMinimal.h"
#include "DatasmithOptionsBase.h"
#include "DatasmithTessellationOptions.h"
#include "DatasmithCommonTessellationOptions.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class DATASMITHCONTENT_API UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithTessellationOptions Options;
    
    UDatasmithCommonTessellationOptions();

};

