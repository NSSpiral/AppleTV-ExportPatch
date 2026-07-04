/* Runtime dump - IKDOMCustomEvent
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMCustomEvent : IKDOMEvent <IKJSDOMCustomEvent>
{
    IKJSObject * _detail;
}

@property (retain, nonatomic) IKJSObject * detail;
@property (readonly, retain, nonatomic) NSString * type;
@property (readonly, retain, nonatomic) IKDOMNode * target;
@property (readonly, retain, nonatomic) IKDOMNode * currentTarget;
@property (readonly, nonatomic) int eventPhase;
@property (readonly, nonatomic) char bubbles;
@property (readonly, nonatomic) char cancelable;
@property (readonly, nonatomic) NSDate * timeStamp;
@property (readonly, nonatomic) char defaultPrevented;

- (void)setDetail:(IKJSObject *)arg0;
- (void).cxx_destruct;
- (IKDOMCustomEvent *)initWithAppContext:(<IKApplication> *)arg0 type:(NSString *)arg1 xmlAttribute:(NSString *)arg2 canBubble:(char)arg3 isCancelable:(char)arg4 detail:(IKJSObject *)arg5;
- (IKDOMCustomEvent *)initWithType:(NSString *)arg0 eventInit:(WLOHomeKitEvent *)arg1;
- (IKJSObject *)detail;

@end
