#pragma once
#include "CoreMinimal.h"
#include "EARCandidateImageOrientation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ARCandidateImage.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARCandidateImage : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UTexture2D* CandidateTexture;
    
    UPROPERTY(EditAnywhere)
    FString FriendlyName;
    
    UPROPERTY(EditAnywhere)
    float Width;
    
    UPROPERTY(EditAnywhere)
    float Height;
    
    UPROPERTY(EditAnywhere)
    EARCandidateImageOrientation Orientation;
    
public:
    UARCandidateImage();
    UFUNCTION(BlueprintPure)
    float GetPhysicalWidth() const;
    
    UFUNCTION(BlueprintPure)
    float GetPhysicalHeight() const;
    
    UFUNCTION(BlueprintPure)
    EARCandidateImageOrientation GetOrientation() const;
    
    UFUNCTION(BlueprintPure)
    FString GetFriendlyName() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetCandidateTexture() const;
    
};

