#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OpenColorIOColorTransform.generated.h"

class UOpenColorIOConfiguration;

UCLASS(Blueprintable)
class OPENCOLORIO_API UOpenColorIOColorTransform : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOpenColorIOConfiguration* ConfigurationOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceColorSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DestinationColorSpace;
    
    UOpenColorIOColorTransform();
};

