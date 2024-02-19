#include "SynthComponentToneGenerator.h"

USynthComponentToneGenerator::USynthComponentToneGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Frequency = 440.00f;
    this->Volume = 0.50f;
}

void USynthComponentToneGenerator::SetVolume(float InVolume) {
}

void USynthComponentToneGenerator::SetFrequency(float InFrequency) {
}


