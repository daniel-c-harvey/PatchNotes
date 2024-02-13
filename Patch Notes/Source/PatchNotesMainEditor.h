/*
  ==============================================================================

    MainEditor.h
    Created: 12 Feb 2024 5:57:27pm
    Author:  dharvey

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PatchNotesMainProcessor.h"

//==============================================================================
/**
*/
class PatchNotesMainEditor : public juce::AudioProcessorEditor
{
public:
    PatchNotesMainEditor(PatchNotesMainEditor&);
    ~PatchNotesMainEditor() override;

    //==============================================================================
    void paint(juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    PatchNotesMainProcessor& midiProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PatchNotesMainEditor)
};
