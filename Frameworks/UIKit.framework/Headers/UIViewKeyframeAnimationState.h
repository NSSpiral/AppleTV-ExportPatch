/* Runtime dump - UIViewKeyframeAnimationState
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewKeyframeAnimationState : UIViewAnimationState
{
    double _frameDuration;
    double _frameStartTime;
    int _calculationMode;
    NSMutableSet * _keyframeLayers;
    NSMutableDictionary * _keyframeLayersForCurrentKeyFrameDict;
    char _inFrame;
}

- (void)dealloc;
- (UIViewKeyframeAnimationState *)init;
- (void)pop;
- (CALayer *)animationForLayer:(id)arg0 forKey:(NSString *)arg1 forView:(NSObject *)arg2;
- (void)setupWithDuration:(double)arg0 delay:(double)arg1 view:(NSObject *)arg2 options:(unsigned int)arg3 factory:(NSObject *)arg4 parentState:(NSObject *)arg5 start:(SBJsonStreamWriterStateArrayStart *)arg6 completion:(/* block */ id)arg7;
- (void)cleanupTrackedLayers;
- (void)addKeyframeWithRelativeStartTime:(double)arg0 relativeDuration:(double)arg1 animations:(NSArray *)arg2;

@end
