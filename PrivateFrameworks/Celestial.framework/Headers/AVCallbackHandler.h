/* Runtime dump - AVCallbackHandler
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVCallbackHandler : NSObject
{
    id _target;
    SEL _action;
    SEL _mainThreadAction;
    NSCondition * _condition;
    id _params;
}

@property id target;
@property SEL action;
@property SEL mainThreadAction;

- (void)dealloc;
- (AVCallbackHandler *)init;
- (void)setTarget:(NSObject *)arg0;
- (SEL)action;
- (NSObject *)target;
- (void)setAction:(SEL)arg0;
- (SEL)mainThreadAction;
- (void)setCallbackParams:(id)arg0;
- (id)waitForCallbackParams;
- (char)hasParams;
- (void)setMainThreadAction:(SEL)arg0;

@end
