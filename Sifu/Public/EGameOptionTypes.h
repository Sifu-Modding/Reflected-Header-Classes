#pragma once
#include "CoreMinimal.h"
#include "EGameOptionTypes.generated.h"

UENUM(BlueprintType)
enum class EGameOptionTypes : uint8 {
    CameraSpeed,
    MusicVolume,
    SoundEffectsVolume,
    VibrationStrength,
    CameraShake,
    MouseSensitivity,
    CameraAcceleration,
    DialogVolume,
    LookInvertXAxis,
    LookInvertYAxis,
    FocusMechanicOnToggle,
    TextureQuality,
    ShadowQuality,
    ViewDistanceQuality,
    EffectsQuality,
    PostProcessQuality,
    FoliageQuality,
    AntiAliasingQuality,
    ScreenPercentage,
    VSync,
    Gamma,
    WindowMode,
    HideHud,
    HideClueVfxs,
    ActivateGameplaySFX,
    BackgroundDialogOpacity,
    HUDColorPreset,
    HUDFraming,
    HighConstrastEnabled,
    MonoOnly,
    MasterVolume,
    AdvancedVibrationEnabled,
    HUDSize,
    HUDOffsetX,
    HUDOffsetY,
    ShowSubtitles,
    DLSSEnabled,
    BrokenUIDarkMode,
    UIDarkMode,
    AudioOutput,
    CameraAnimDrivenSurrounding,
    Count,
    None,
};

