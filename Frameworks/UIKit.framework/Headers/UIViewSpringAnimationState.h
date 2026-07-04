/* Runtime dump - UIViewSpringAnimationState
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewSpringAnimationState : UIViewAnimationState
{
    float _mass;
    float _stiffness;
    float _damping;
    float _velocity;
}

+ (UIViewSpringAnimationState *)defaultSpringAnimationForKey:(NSString *)arg0 mass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 velocity:(float)arg4;

- (NSString *)_defaultAnimationForKey:(NSString *)arg0;
- (CALayer *)animationForLayer:(id)arg0 forKey:(NSString *)arg1 forView:(NSObject *)arg2;
- (void)setupWithDuration:(double)arg0 delay:(double)arg1 view:(NSObject *)arg2 options:(unsigned int)arg3 factory:(NSObject *)arg4 parentState:(NSObject *)arg5 start:(SBJsonStreamWriterStateArrayStart *)arg6 completion:(/* block */ id)arg7;
- (void)generateSpringPropertiesForDuration:(float)arg0 damping:(float)arg1 velocity:(float)arg2;

@end
