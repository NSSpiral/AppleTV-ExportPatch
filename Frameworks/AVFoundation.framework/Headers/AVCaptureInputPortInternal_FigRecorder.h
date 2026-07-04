/* Runtime dump - AVCaptureInputPortInternal_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureInputPortInternal_FigRecorder : NSObject
{
    AVCaptureInput_FigRecorder * input;
    NSString * mediaType;
    struct opaqueCMFormatDescription * formatDescription;
    struct OpaqueCMClock * clock;
    char enabled;
}

- (void)dealloc;
- (AVCaptureInputPortInternal_FigRecorder *)init;

@end
