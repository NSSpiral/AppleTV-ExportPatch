/* Runtime dump - AVFlashlightInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFlashlightInternal : NSObject
{
    AVWeakReference * weakReference;
    struct OpaqueFigFlashlight * flashlight;
    char available;
    char overheated;
    float flashlightLevel;
    struct OpaqueFigSimpleMutex * lock;
}

@end
