#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SCSaveObject.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable)
class SCCORE_API USCSaveObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString m_SaveFilename;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 m_uiVersion;
    
    USCSaveObject();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString BPE_GetSubtitlesInfoForSaveFile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTexture2D* BPE_GetIconForSaveFile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString BPE_GetDetailsInfoForSaveFile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_FillSaveWithDefaultValues();
    
};

