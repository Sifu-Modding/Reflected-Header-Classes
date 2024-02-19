#include "ReplayCineCameraComponent.h"

UReplayCineCameraComponent::UReplayCineCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConstrainAspectRatio = false;
    this->DefaultFilmbackPreset = TEXT("Replay");
    this->DefaultLensPresetName = TEXT("Replay");
    this->m_fZoomSpeed = 1.00f;
    this->m_ZoomSpeedCurve = NULL;
}

FReplayKeyDataCameraSettings UReplayCineCameraComponent::BPF_GetCameraSettings() const {
    return FReplayKeyDataCameraSettings{};
}

void UReplayCineCameraComponent::BPF_ApplyCameraSettings(FReplayKeyDataCameraSettings _settings) {
}


