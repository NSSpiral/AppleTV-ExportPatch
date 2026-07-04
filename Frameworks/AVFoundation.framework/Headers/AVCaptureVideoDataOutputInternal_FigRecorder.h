/* Runtime dump - AVCaptureVideoDataOutputInternal_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoDataOutputInternal_FigRecorder : NSObject
{
    AVWeakReferencingDelegateStorage * delegateStorage;
    char delegateRespondsToDidOutputSBufCallback;
    char delegateRespondsToDidDropSBufCallback;
    NSDictionary * videoSettings;
    struct ? deprecatedMinFrameDuration;
    char alwaysDiscardsLateVideoFrames;
}

- (void)dealloc;
- (AVCaptureVideoDataOutputInternal_FigRecorder *)init;

@end
