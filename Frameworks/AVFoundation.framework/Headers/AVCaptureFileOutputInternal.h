/* Runtime dump - AVCaptureFileOutputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFileOutputInternal : NSObject
{
    struct ? maxRecordedDuration;
    long long maxRecordedFileSize;
    long long minFreeDiskSpaceLimit;
    char pausesRecordingOnInterruption;
}

- (AVCaptureFileOutputInternal *)init;

@end
