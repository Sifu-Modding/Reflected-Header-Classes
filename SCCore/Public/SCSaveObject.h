#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SCSaveObject.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable)
class SCCORE_API USCSaveObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FString m_SaveFilename;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    uint32 m_uiVersion;
    
    USCSaveObject();
    UFUNCTION(BlueprintNativeEvent)
    FString BPE_GetSubtitlesInfoForSaveFile() const;
    
    UFUNCTION(BlueprintNativeEvent)
    UTexture2D* BPE_GetIconForSaveFile() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FString BPE_GetDetailsInfoForSaveFile() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_FillSaveWithDefaultValues();
    
};

