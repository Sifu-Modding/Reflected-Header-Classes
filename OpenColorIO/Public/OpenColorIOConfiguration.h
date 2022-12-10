#pragma once
#include "CoreMinimal.h"
#include "OpenColorIOColorSpace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FilePath -FallbackName=FilePath
#include "OpenColorIOConfiguration.generated.h"

class UOpenColorIOColorTransform;

UCLASS(BlueprintType)
class OPENCOLORIO_API UOpenColorIOConfiguration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFilePath ConfigurationFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FOpenColorIOColorSpace> DesiredColorSpaces;
    
private:
    UPROPERTY()
    TArray<UOpenColorIOColorTransform*> ColorTransforms;
    
public:
    UOpenColorIOConfiguration();
};

