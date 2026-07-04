/* Runtime dump - DOMGestureEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMGestureEvent : DOMUIEvent

@property (readonly) <DOMEventTarget> * target;
@property (readonly) float scale;
@property (readonly) float rotation;
@property (readonly) char ctrlKey;
@property (readonly) char shiftKey;
@property (readonly) char altKey;
@property (readonly) char metaKey;

- (float)scale;
- (<DOMEventTarget> *)target;
- (float)rotation;
- (char)ctrlKey;
- (char)shiftKey;
- (char)altKey;
- (char)metaKey;
- (void)initGestureEvent:(NSObject *)arg0 canBubble:(char)arg1 cancelable:(char)arg2 view:(NSObject *)arg3 detail:(int)arg4 screenX:(int)arg5 screenY:(int)arg6 clientX:(int)arg7 clientY:(int)arg8 ctrlKey:(char)arg9 altKey:(char)arg10 shiftKey:(char)arg11 metaKey:(char)arg12 target:(<DOMEventTarget> *)arg13 scale:(float)arg14 rotation:(float)arg15;

@end
