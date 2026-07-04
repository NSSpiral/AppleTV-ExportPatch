/* Runtime dump - AVCaptureOutputInternal_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureOutputInternal_FigRecorder : NSObject
{
    AVCaptureSession_FigRecorder * session;
    NSMutableArray * connections;
    int changeSeed;
    struct CGAffineTransform metadataTransform;
    float rollAdjustment;
    char physicallyMirrorsVideo;
}

- (void)dealloc;
- (AVCaptureOutputInternal_FigRecorder *)init;
- (char)isKindOfClass:(Class)arg0;

@end
