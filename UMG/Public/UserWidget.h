#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "OnVisibilityChangedEventDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "NamedSlotInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "Widget.h"
#include "AnimationEventBinding.h"
#include "NamedSlotBinding.h"
#include "EWidgetTickFrequency.h"
#include "WidgetAnimationDynamicEventDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputEvent -FallbackName=EInputEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=Anchors -FallbackName=Anchors
#include "EUMGSequencePlayMode.h"
#include "EventReply.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=FocusEvent -FallbackName=FocusEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=KeyEvent -FallbackName=KeyEvent
#include "PaintContext.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=MotionEvent -FallbackName=MotionEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=CharacterEvent -FallbackName=CharacterEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=AnalogInputEvent -FallbackName=AnalogInputEvent
#include "OnInputActionDelegate.h"
#include "EWidgetAnimationEvent.h"
#include "UserWidget.generated.h"

class UUMGSequenceTickManager;
class UUMGSequencePlayer;
class UInputComponent;
class UWidgetTree;
class APawn;
class UWidgetAnimation;
class UDragDropOperation;
class APlayerController;
class USoundBase;
class APlayerCameraManager;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMG_API UUserWidget : public UWidget, public INamedSlotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bInvalidateOnAnimation;
    
    UPROPERTY()
    UWidget::FGetLinearColor ColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor ForegroundColor;
    
    UPROPERTY()
    UWidget::FGetSlateColor ForegroundColorDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnVisibilityChangedEvent OnVisibilityChanged;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(Transient)
    TArray<UUMGSequencePlayer*> ActiveSequencePlayers;
    
    UPROPERTY(Transient)
    UUMGSequenceTickManager* AnimationTickManager;
    
    UPROPERTY(Transient)
    TArray<UUMGSequencePlayer*> StoppedSequencePlayers;
    
private:
    UPROPERTY()
    TArray<FNamedSlotBinding> NamedSlotBindings;
    
public:
    UPROPERTY(DuplicateTransient, TextExportTransient, Transient)
    UWidgetTree* WidgetTree;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Priority;
    
    UPROPERTY()
    uint8 bSupportsKeyboardFocus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsFocusable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bStopAction: 1;
    
    UPROPERTY()
    uint8 bHasScriptImplementedTick: 1;
    
    UPROPERTY()
    uint8 bHasScriptImplementedPaint: 1;
    
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EWidgetTickFrequency TickFrequency;
    
protected:
    UPROPERTY(DuplicateTransient, Instanced, Transient)
    UInputComponent* InputComponent;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<FAnimationEventBinding> AnimationCallbacks;
    
public:
    UUserWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterInputComponent();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnbindFromAnimationStarted(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindFromAnimationFinished(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindAllFromAnimationStarted(UWidgetAnimation* Animation);
    
    UFUNCTION(BlueprintCallable)
    void UnbindAllFromAnimationFinished(UWidgetAnimation* Animation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType);
    
    UFUNCTION(BlueprintCallable)
    void StopListeningForAllInputActions();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopAnimationsAndLatentActions();
    
    UFUNCTION(BlueprintCallable)
    void StopAnimation(const UWidgetAnimation* InAnimation);
    
    UFUNCTION(BlueprintCallable)
    void StopAllAnimations();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetPlaybackSpeed(const UWidgetAnimation* InAnimation, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetOwningPlayer(APlayerController* LocalPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetNumLoopsToPlay(const UWidgetAnimation* InAnimation, int32 NumLoopsToPlay);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetInputActionPriority(int32 NewPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetInputActionBlocking(bool bShouldBlock);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetForegroundColor(FSlateColor InForegroundColor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetDesiredSizeInViewport(FVector2D Size);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetAnimationCurrentTime(const UWidgetAnimation* InAnimation, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetAnchorsInViewport(FAnchors Anchors);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetAlignmentInViewport(FVector2D Alignment);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ReverseAnimation(const UWidgetAnimation* InAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RemoveFromViewport();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterInputComponent();
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void PreConstruct(bool IsDesignTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlaySound(USoundBase* SoundToPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    UUMGSequencePlayer* PlayAnimationTimeRange(UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed, bool bRestoreState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    UUMGSequencePlayer* PlayAnimationReverse(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    UUMGSequencePlayer* PlayAnimationForward(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    UUMGSequencePlayer* PlayAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed, bool bRestoreState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    float PauseAnimation(const UWidgetAnimation* InAnimation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnTouchStarted(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnTouchMoved(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnTouchGesture(FGeometry MyGeometry, const FPointerEvent& GestureEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnTouchForceChanged(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnTouchEnded(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPaint(UPARAM(Ref) FPaintContext& Context) const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnMouseCaptureLost();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnInitialized();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnFocusLost(FFocusEvent InFocusEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, UDragDropOperation*& Operation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDragCancelled(const FPointerEvent& PointerEvent, UDragDropOperation* Operation);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent)
    void OnAnimationStarted(const UWidgetAnimation* Animation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent)
    void OnAnimationFinished(const UWidgetAnimation* Animation);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, FOnInputAction Callback);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayingAnimation() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsListeningForInputAction(FName ActionName) const;
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    bool IsInViewport() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    bool IsInteractable() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    bool IsAnyAnimationPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool IsAnimationPlayingForward(const UWidgetAnimation* InAnimation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    bool IsAnimationPlaying(const UWidgetAnimation* InAnimation) const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    APawn* GetOwningPlayerPawn() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    APlayerCameraManager* GetOwningPlayerCameraManager() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    bool GetIsVisible() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    float GetAnimationCurrentTime(const UWidgetAnimation* InAnimation) const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FAnchors GetAnchorsInViewport() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FVector2D GetAlignmentInViewport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void FlushAnimations();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Destruct();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Construct();
    
    UFUNCTION(BlueprintCallable)
    void CancelLatentActions();
    
    UFUNCTION(BlueprintCallable)
    void BindToAnimationStarted(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindToAnimationFinished(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindToAnimationEvent(UWidgetAnimation* Animation, FWidgetAnimationDynamicEvent Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void AddToViewport(int32 ZOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool AddToPlayerScreen(int32 ZOrder);
    
    
    // Fix for true pure virtual functions not being implemented
};

