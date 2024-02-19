#include "InterpTrackAkAudioEvent.h"
#include "InterpTrackInstAkAudioEvent.h"

UInterpTrackAkAudioEvent::UInterpTrackAkAudioEvent() {
    this->TrackInstClass = UInterpTrackInstAkAudioEvent::StaticClass();
    this->TrackTitle = TEXT("Ak Audio Event");
    this->bContinueEventOnMatineeEnd = false;
}


