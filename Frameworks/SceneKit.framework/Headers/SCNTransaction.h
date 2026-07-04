/* Runtime dump - SCNTransaction
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTransaction : NSObject

+ (char)immediateMode;
+ (void)setImmediateMode:(char)arg0;
+ (NSObject *)SCNJSExportProtocol;
+ (void)postCommandWithContext:(void *)arg0 object:(NSObject *)arg1 keyPath:(NSString *)arg2 applyBlock:(id /* block */)arg3;
+ (void)postCommandWithContext:(void *)arg0 object:(NSObject *)arg1 applyBlock:(id /* block */)arg2;
+ (CAMediaTimingFunction *)animationTimingFunction;
+ (NSString *)valueForKey:(NSMutableDictionary *)arg0;
+ (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
+ (id /* block */)completionBlock;
+ (void)setCompletionBlock:(id /* block */)arg0;
+ (void)flush;
+ (void)setAnimationDuration:(double)arg0;
+ (void)lock;
+ (void)unlock;
+ (unsigned int)currentState;
+ (char)disableActions;
+ (void)setDisableActions:(char)arg0;
+ (void)commit;
+ (double)animationDuration;
+ (void)begin;
+ (void)setAnimationTimingFunction:(CAMediaTimingFunction *)arg0;

- (CAMediaTimingFunction *)animationTimingFunction;
- (void)flush;
- (void)setAnimationDuration:(double)arg0;
- (void)lock;
- (void)unlock;
- (char)disableActions;
- (void)setDisableActions:(char)arg0;
- (void)commit;
- (double)animationDuration;
- (void)begin;
- (void)setAnimationTimingFunction:(id)arg0;

@end
