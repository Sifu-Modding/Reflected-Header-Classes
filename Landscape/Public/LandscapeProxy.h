#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ELandscapeLODFalloff.h"
#include "LandscapeProxyMaterialOverride.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LightingChannels -FallbackName=LightingChannels
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERuntimeVirtualTextureMainPassType -FallbackName=ERuntimeVirtualTextureMainPassType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LightmassPrimitiveSettings -FallbackName=LightmassPrimitiveSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERendererStencilMask -FallbackName=ERendererStencilMask
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BodyInstance -FallbackName=BodyInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENavDataGatheringMode -FallbackName=ENavDataGatheringMode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LandscapeProxy.generated.h"

class ULandscapeSplinesComponent;
class UPhysicalMaterial;
class UMaterialInterface;
class URuntimeVirtualTexture;
class ULandscapeComponent;
class ULandscapeHeightfieldCollisionComponent;
class UHierarchicalInstancedStaticMeshComponent;
class UTexture2D;
class ULandscapeWeightmapUsage;
class UTexture;
class UTextureRenderTarget2D;
class USplineComponent;
class ULandscapeLayerInfoObject;

UCLASS(Abstract, MinimalAPI, NotPlaceable)
class ALandscapeProxy : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    ULandscapeSplinesComponent* SplineComponent;
    
protected:
    UPROPERTY()
    FGuid LandscapeGuid;
    
public:
    UPROPERTY()
    FIntPoint LandscapeSectionOffset;
    
    UPROPERTY(EditAnywhere)
    int32 MaxLODLevel;
    
    UPROPERTY()
    float LODDistanceFactor;
    
    UPROPERTY()
    TEnumAsByte<ELandscapeLODFalloff::Type> LODFalloff;
    
    UPROPERTY(EditAnywhere)
    float ComponentScreenSizeToUseSubSections;
    
    UPROPERTY(EditAnywhere)
    float LOD0ScreenSize;
    
    UPROPERTY(EditAnywhere)
    float LOD0DistributionSetting;
    
    UPROPERTY(EditAnywhere)
    float LODDistributionSetting;
    
    UPROPERTY(EditAnywhere)
    float TessellationComponentScreenSize;
    
    UPROPERTY(EditAnywhere)
    bool UseTessellationComponentScreenSizeFalloff;
    
    UPROPERTY(EditAnywhere)
    float TessellationComponentScreenSizeFalloff;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 OccluderGeometryLOD;
    
    UPROPERTY(EditAnywhere)
    int32 StaticLightingLOD;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* DefaultPhysMaterial;
    
    UPROPERTY(EditAnywhere)
    float StreamingDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* LandscapeMaterial;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    UMaterialInterface* LandscapeHoleMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bMeshHoles;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 MeshHolesMaxLod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 VirtualTextureNumLods;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 VirtualTextureLodBias;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;
    
    UPROPERTY(EditAnywhere)
    float NegativeZBoundsExtension;
    
    UPROPERTY(EditAnywhere)
    float PositiveZBoundsExtension;
    
    UPROPERTY(Instanced)
    TArray<ULandscapeComponent*> LandscapeComponents;
    
    UPROPERTY(Export)
    TMap<FIntPoint, TWeakObjectPtr<ULandscapeComponent>> XYLandscapeComponents;
    
    UPROPERTY(Instanced)
    TArray<ULandscapeHeightfieldCollisionComponent*> CollisionComponents;
    
    UPROPERTY(DuplicateTransient, Instanced, Transient)
    TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;
    
    UPROPERTY()
    bool bHasLandscapeGrass;
    
    UPROPERTY(EditAnywhere)
    float StaticLightingResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 CastShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastDynamicShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastStaticShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastFarShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastHiddenShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastShadowAsTwoSided: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bAffectDistanceFieldLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FLightingChannels LightingChannels;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bUseMaterialPositionOffsetInStaticLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bRenderCustomDepth: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ERendererStencilMask CustomDepthStencilWriteMask;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 CustomDepthStencilValue;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float LDMaxDrawDistance;
    
    UPROPERTY(EditAnywhere)
    FLightmassPrimitiveSettings LightmassSettings;
    
    UPROPERTY(EditAnywhere)
    int32 CollisionMipLevel;
    
    UPROPERTY(EditAnywhere)
    int32 SimpleCollisionMipLevel;
    
    UPROPERTY(EditAnywhere)
    float CollisionThickness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBodyInstance BodyInstance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bGenerateOverlapEvents: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bBakeMaterialPositionOffsetIntoCollision: 1;
    
    UPROPERTY()
    int32 ComponentSizeQuads;
    
    UPROPERTY()
    int32 SubsectionSizeQuads;
    
    UPROPERTY()
    int32 NumSubsections;
    
    UPROPERTY(EditAnywhere)
    uint8 bUsedForNavigation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFillCollisionUnderLandscapeForNavmesh: 1;
    
    UPROPERTY(EditAnywhere)
    bool bUseDynamicMaterialInstance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ENavDataGatheringMode NavigationGeometryGatheringMode;
    
    UPROPERTY(EditAnywhere)
    bool bUseLandscapeForCullingInvisibleHLODVertices;
    
    UPROPERTY()
    bool bHasLayersContent;
    
    UPROPERTY(Transient)
    TMap<UTexture2D*, ULandscapeWeightmapUsage*> WeightmapUsageMap;
    
    ALandscapeProxy();
    UFUNCTION(BlueprintCallable)
    void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLandscapeMaterialTextureParameterValue(FName ParameterName, UTexture* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    bool LandscapeExportHeightmapToRenderTarget(UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies);
    
    UFUNCTION(BlueprintCallable)
    void EditorSetLandscapeMaterial(UMaterialInterface* NewLandscapeMaterial);
    
    UFUNCTION(BlueprintCallable)
    void EditorApplySpline(USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLODDistanceFactor(float InLODDistanceFactor);
    
    UFUNCTION(BlueprintCallable)
    void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
    
};

