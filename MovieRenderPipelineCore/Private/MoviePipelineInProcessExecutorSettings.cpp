#include "MoviePipelineInProcessExecutorSettings.h"

UMoviePipelineInProcessExecutorSettings::UMoviePipelineInProcessExecutorSettings() {
    this->bCloseEditor = false;
    this->AdditionalCommandLineArguments = TEXT("-NoLoadingScreen -FixedSeed -log -Unattended");
    this->InitialDelayFrameCount = 0;
}

