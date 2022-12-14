#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EWidgetInteractionSource.h"
#include "OnHoveredWidgetChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "WidgetInteractionComponent.generated.h"

class UWidgetComponent;
class UWidget;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMG_API UWidgetInteractionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnHoveredWidgetChanged OnHoveredWidgetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VirtualUserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PointerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWidgetInteractionSource InteractionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableHitTesting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowDebug;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float DebugSphereLineThickness;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float DebugLineThickness;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FLinearColor DebugColor;
    
protected:
    UPROPERTY(Transient)
    FHitResult CustomHitResult;
    
    UPROPERTY(Transient)
    FVector2D LocalHitLocation;
    
    UPROPERTY(Transient)
    FVector2D LastLocalHitLocation;
    
    UPROPERTY(Instanced, Transient)
    UWidgetComponent* HoveredWidgetComponent;
    
    UPROPERTY(Transient)
    FHitResult LastHitResult;
    
    UPROPERTY(Transient)
    bool bIsHoveredWidgetInteractable;
    
    UPROPERTY(Transient)
    bool bIsHoveredWidgetFocusable;
    
    UPROPERTY(Transient)
    bool bIsHoveredWidgetHitTestVisible;
    
public:
    UWidgetInteractionComponent();
    UFUNCTION(BlueprintCallable)
    void SetFocus(UWidget* FocusWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomHitResult(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    bool SendKeyChar(const FString& Characters, bool bRepeat);
    
    UFUNCTION(BlueprintCallable)
    void ScrollWheel(float ScrollDelta);
    
    UFUNCTION(BlueprintCallable)
    void ReleasePointerKey(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseKey(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void PressPointerKey(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    bool PressKey(FKey Key, bool bRepeat);
    
    UFUNCTION(BlueprintCallable)
    bool PressAndReleaseKey(FKey Key);
    
    UFUNCTION(BlueprintPure)
    bool IsOverInteractableWidget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOverHitTestVisibleWidget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOverFocusableWidget() const;
    
    UFUNCTION(BlueprintPure)
    FHitResult GetLastHitResult() const;
    
    UFUNCTION(BlueprintPure)
    UWidgetComponent* GetHoveredWidgetComponent() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D Get2DHitLocation() const;
    
};

