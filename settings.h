#ifndef SETTINGS_H
#define SETTINGS_H

#define BUFFER_SIZE     4096
#define BBB_SAMPLE_FREQ 44100

typedef enum {
    PEAKDETECT_INITIAL,
    PEAKDETECT_POSITIVE,
    PEAKDETECT_NEGATIVE,
    PEAKDETECT_FOUND,
} PeakDetectState;

#endif // SETTINGS_H
