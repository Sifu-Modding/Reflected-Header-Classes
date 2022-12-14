#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SlateMeshVertex.h"
#include "SlateVectorArtData.generated.h"

class UMaterialInterface;

UCLASS()
class UMG_API USlateVectorArtData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FSlateMeshVertex> VertexData;
    
    UPROPERTY()
    TArray<uint32> IndexData;
    
    UPROPERTY()
    UMaterialInterface* Material;
    
    UPROPERTY()
    FVector2D ExtentMin;
    
    UPROPERTY()
    FVector2D ExtentMax;
    
public:
    USlateVectorArtData();
};

