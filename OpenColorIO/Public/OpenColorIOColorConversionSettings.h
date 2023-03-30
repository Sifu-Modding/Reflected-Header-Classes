#pragma once
#include "CoreMinimal.h"
#include "OpenColorIOColorSpace.h"
#include "OpenColorIOColorConversionSettings.generated.h"

class UOpenColorIOConfiguration;

USTRUCT(BlueprintType)
struct OPENCOLORIO_API FOpenColorIOColorConversionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOpenColorIOConfiguration* ConfigurationSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenColorIOColorSpace SourceColorSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenColorIOColorSpace DestinationColorSpace;
    
    FOpenColorIOColorConversionSettings();
};

