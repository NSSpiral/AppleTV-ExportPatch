/* Runtime dump - AVCaptureMovieFileOutputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMovieFileOutputInternal : NSObject
{
    AVWeakReference * weakReference;
    NSMutableArray * recordingDelegatesArray;
    struct ? movieFragmentInterval;
    NSArray * metadata;
    char sendLastVideoPreviewFrame;
    char recording;
    char paused;
}

- (void)dealloc;
- (AVCaptureMovieFileOutputInternal *)init;

@end
