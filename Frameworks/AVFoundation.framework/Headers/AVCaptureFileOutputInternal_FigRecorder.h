/* Runtime dump - AVCaptureFileOutputInternal_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFileOutputInternal_FigRecorder : NSObject
{
    struct ? maxRecordedDuration;
    long long maxRecordedFileSize;
    long long minFreeDiskSpaceLimit;
    char pausesRecordingOnInterruption;
}

- (AVCaptureFileOutputInternal_FigRecorder *)init;

@end
