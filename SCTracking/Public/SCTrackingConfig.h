#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SCTrackingConfig.generated.h"

UCLASS(Config=Game)
class SCTRACKING_API USCTrackingConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FString m_ShippingApiEndpoint;
    
    UPROPERTY(Config)
    FString m_DevApiEndpoint;
    
    UPROPERTY(Config)
    FString m_ApiEventPath;
    
    UPROPERTY(Config)
    FString m_ApiTrackingLevelPath;
    
    UPROPERTY(Config)
    FString m_ApiHealthPath;
    
    UPROPERTY(Config)
    FString m_ApiKey;
    
    UPROPERTY(Config)
    FString m_ApiHealthPathSteamOverride;
    
    UPROPERTY(Config)
    FString m_ApiEventPathSteamOverride;
    
    USCTrackingConfig();
};

