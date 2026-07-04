/* Runtime dump - CAStateController
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateController : NSObject
{
    struct _CAStateControllerData * _data;
}

@property (readonly) CALayer * layer;
@property (weak) NSObject<CAStateControllerDelegate> * delegate;

- (void)_applyTransition:(NSObject *)arg0 layer:(CALayer *)arg1 undo:(id)arg2 speed:(float)arg3;
- (void)_nextStateTimer:(NSObject *)arg0;
- (void)setState:(NSObject *)arg0 ofLayer:(CALayer *)arg1 transitionSpeed:(float)arg2;
- (void)setInitialStatesOfLayer:(id)arg0 transitionSpeed:(float)arg1;
- (void)_applyTransitionElement:(NSObject *)arg0 layer:(CALayer *)arg1 undo:(id)arg2 speed:(float)arg3;
- (void)_addAnimation:(NSObject *)arg0 forKey:(NSString *)arg1 target:(NSObject *)arg2 undo:(id)arg3;
- (CALayer *)stateOfLayer:(id)arg0;
- (void)setState:(NSObject *)arg0 ofLayer:(CALayer *)arg1;
- (void)setInitialStatesOfLayer:(id)arg0;
- (id)removeAllStateChanges;
- (void)restoreStateChanges:(id)arg0;
- (void)_removeTransition:(NSObject *)arg0 layer:(CALayer *)arg1;
- (void)dealloc;
- (CALayer *)layer;
- (void)setDelegate:(NSObject<CAStateControllerDelegate> *)arg0;
- (NSObject<CAStateControllerDelegate> *)delegate;
- (CAStateController *)initWithLayer:(CALayer *)arg0;
- (void)cancelTimers;

@end
