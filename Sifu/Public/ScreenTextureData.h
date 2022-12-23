#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBlendMode -FallbackName=EBlendMode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ScreenTextureData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FScreenTextureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D m_vSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D m_vMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D m_vUV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D m_vUVSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor m_TintColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBlendMode> m_eBlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bScalePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D m_vRotationPivot;
    
    SIFU_API FScreenTextureData();
};

