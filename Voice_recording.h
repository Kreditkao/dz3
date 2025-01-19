#pragma once
#include <iostream>
#include <string>
using namespace std;

class Voice_recording {
private:
    string speaker;
    int duration; // тривалість у хвилинах
    string recordingDate;

public:
    Voice_recording();
    Voice_recording(const string& speaker, int duration, const string& recordingDate);

    string getSpeaker() const;
    int getDuration() const;
    string getRecordingDate() const;

    void setSpeaker(const string& speaker);
    void setDuration(int duration);
    void setRecordingDate(const string& recordingDate);

    void printInfo() const;
};
