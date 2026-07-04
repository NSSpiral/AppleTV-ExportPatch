/* Runtime dump - IKDOMEvent
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMEvent : IKJSObject <IKJSDOMEvent>
{
    char _bubbles;
    char _cancelable;
    char _inUse;
    char _defaultPrevented;
    NSString * _type;
    IKDOMNode * _target;
    NSDate * _timeStamp;
    NSString * _xmlAttribute;
    IKDOMNode * _currentTarget;
    int _eventPhase;
    int _dispatchState;
}

@property (retain, nonatomic) IKDOMNode * target;
@property (readonly, retain, nonatomic) NSString * xmlAttribute;
@property (nonatomic) char inUse;
@property (retain, nonatomic) IKDOMNode * currentTarget;
@property (nonatomic) int eventPhase;
@property (nonatomic) int dispatchState;
@property (nonatomic) char defaultPrevented;
@property (readonly, retain, nonatomic) NSString * type;
@property (readonly, nonatomic) char bubbles;
@property (readonly, nonatomic) char cancelable;
@property (readonly, nonatomic) NSDate * timeStamp;

- (void)setTarget:(IKDOMNode *)arg0;
- (NSString *)type;
- (IKDOMNode *)target;
- (void)setDefaultPrevented:(char)arg0;
- (void).cxx_destruct;
- (NSDate *)timeStamp;
- (char)isPropagationStopped;
- (void)updateDispatchStateWithCurrentTarget:(IKDOMNode *)arg0 phase:(int)arg1;
- (NSString *)xmlAttribute;
- (char)isImmediatePropagationStopped;
- (IKDOMEvent *)initWithAppContext:(<IKApplication> *)arg0 type:(NSString *)arg1 xmlAttribute:(NSString *)arg2 canBubble:(char)arg3 isCancelable:(char)arg4;
- (IKDOMEvent *)initWithType:(NSString *)arg0 eventInit:(WLOHomeKitEvent *)arg1;
- (void)setCurrentTarget:(IKDOMNode *)arg0;
- (void)setEventPhase:(int)arg0;
- (int)dispatchState;
- (void)setDispatchState:(int)arg0;
- (char)isInUse;
- (void)setInUse:(char)arg0;
- (IKDOMNode *)currentTarget;
- (int)eventPhase;
- (char)bubbles;
- (char)cancelable;
- (char)defaultPrevented;
- (void)stopPropagation;
- (void)preventDefault;
- (void)stopImmediatePropagation;

@end
