/* Runtime dump - AVFlashlightInternal_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFlashlightInternal_FigRecorder : NSObject
{
    struct OpaqueFigRecorder * recorder;
    AVWeakReference * weakReference;
    char overheated;
    char available;
    float flashlightLevel;
}

@end
