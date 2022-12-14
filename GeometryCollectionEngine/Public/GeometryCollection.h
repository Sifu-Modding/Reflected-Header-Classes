#pragma once
#include "CoreMinimal.h"
#include "GeometryCollectionSizeSpecificData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GeometryCollectionSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ECollisionTypeEnum -FallbackName=ECollisionTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EImplicitTypeEnum -FallbackName=EImplicitTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GeometryCollection.generated.h"

class UMaterialInterface;

UCLASS(BlueprintType)
class GEOMETRYCOLLECTIONENGINE_API UGeometryCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGeometryCollectionSource> GeometrySource;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECollisionTypeEnum CollisionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EImplicitTypeEnum ImplicitType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinLevelSetResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxLevelSetResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinClusterLevelSetResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxClusterLevelSetResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CollisionObjectReductionPercentage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMassAsDensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Mass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumMassClamp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CollisionParticlesFraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaximumCollisionParticles;
    
    UPROPERTY(EditAnywhere)
    TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableRemovePiecesOnFracture;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> RemoveOnFractureMaterials;
    
private:
    UPROPERTY()
    FGuid PersistentGuid;
    
    UPROPERTY()
    FGuid StateGuid;
    
    UPROPERTY()
    int32 BoneSelectedMaterialIndex;
    
public:
    UGeometryCollection();
};

