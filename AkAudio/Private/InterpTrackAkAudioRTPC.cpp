#include "InterpTrackAkAudioRTPC.h"
#include "InterpTrackInstAkAudioEvent.h"

UInterpTrackAkAudioRTPC::UInterpTrackAkAudioRTPC() {
    this->TrackInstClass = UInterpTrackInstAkAudioEvent::StaticClass();
    this->TrackTitle = TEXT("Ak Audio RTPC");
    this->bPlayOnReverse = false;
    this->bContinueRTPCOnMatineeEnd = false;
}


