/* Runtime dump - AVCaptureInputPortInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureInputPortInternal : NSObject
{
    AVCaptureInput * input;
    NSString * mediaType;
    struct opaqueCMFormatDescription * formatDescription;
    struct OpaqueCMClock * clock;
    char enabled;
    int changeSeed;
    NSString * sourceID;
}

- (void)dealloc;
- (AVCaptureInputPortInternal *)init;

@end
