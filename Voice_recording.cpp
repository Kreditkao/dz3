#include "Voice_recording.h"

Voice_recording::Voice_recording() 
{

}

Voice_recording::Voice_recording(const string& speaker, int duration, const string& recordingDate)
    : speaker(speaker), duration(duration), recordingDate(recordingDate) 
{

}

string Voice_recording::getSpeaker() const 
{
    return speaker; 
}

int Voice_recording::getDuration() const 
{
    return duration;
}

string Voice_recording::getRecordingDate() const
{
    return recordingDate; 
}

void Voice_recording::setSpeaker(const string& speaker) 
{
    this->speaker = speaker; 
}

void Voice_recording::setDuration(int duration) 
{
    this->duration = duration;
}

void Voice_recording::setRecordingDate(const string& recordingDate)
{ 
    this->recordingDate = recordingDate;
}

void Voice_recording::printInfo() const 
{
    cout << "Voice Recording Info:\n"
        << "Speaker: " << speaker << "\n"
        << "Duration: " << duration << " minutes\n"
        << "Recording Date: " << recordingDate << "\n";
}
