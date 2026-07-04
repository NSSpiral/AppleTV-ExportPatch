/* Runtime dump - AVVideoCompositionInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoCompositionInternal : NSObject
{
    unsigned int changeSeed;
    NSString * builtInCompositorName;
    Class customCompositorClass;
    struct ? frameDuration;
    struct CGSize renderSize;
    float renderScale;
    NSArray * instructions;
    char auxiliaryTrackLayerSetLast;
    AVVideoCompositionCoreAnimationTool * animationTool;
}

@end
