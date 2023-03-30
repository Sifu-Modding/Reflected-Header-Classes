#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SCSessionManager.generated.h"

class USCTrackingAuthentication;

UCLASS(Blueprintable)
class SIFU_API USCSessionManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCTrackingAuthentication* m_TrackingAuthenticationComponent;
    
public:
    USCSessionManager();
};

