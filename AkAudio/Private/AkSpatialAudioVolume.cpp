#include "AkSpatialAudioVolume.h"
#include "AkRoomComponent.h"
#include "AkLateReverbComponent.h"
#include "AkSurfaceReflectorSetComponent.h"

AAkSpatialAudioVolume::AAkSpatialAudioVolume() {
    this->SurfaceReflectorSet = CreateDefaultSubobject<UAkSurfaceReflectorSetComponent>(TEXT("SurfaceReflector"));
    this->LateReverb = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("LateReverb"));
    this->Room = CreateDefaultSubobject<UAkRoomComponent>(TEXT("Room"));
}

