/* Runtime dump - CAStateControllerLayer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateControllerLayer : NSObject
{
    CALayer * _layer;
    CAState * _currentState;
    CAStateControllerUndo * _undoStack;
    NSMutableArray * _transitions;
    NSTimer * _nextTimer;
    CAState * _nextState;
    float _nextSpeed;
}

@property (readonly) CALayer * layer;
@property (retain, nonatomic) CAState * currentState;
@property (readonly) CAStateControllerUndo * undoStack;

- (void)addTransition:(NSObject *)arg0;
- (void)removeTransition:(NSObject *)arg0;
- (CAStateControllerUndo *)undoStack;
- (void)dealloc;
- (CALayer *)layer;
- (void)invalidate;
- (CAState *)currentState;
- (CAStateControllerLayer *)initWithLayer:(CALayer *)arg0;
- (void)setCurrentState:(CAState *)arg0;

@end
