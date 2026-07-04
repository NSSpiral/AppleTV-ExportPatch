/* Runtime dump - DOMTouchEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMTouchEvent : DOMUIEvent

@property (readonly) DOMTouchList * touches;
@property (readonly) DOMTouchList * targetTouches;
@property (readonly) DOMTouchList * changedTouches;
@property (readonly) float scale;
@property (readonly) float rotation;
@property (readonly) char ctrlKey;
@property (readonly) char shiftKey;
@property (readonly) char altKey;
@property (readonly) char metaKey;

- (float)scale;
- (float)rotation;
- (DOMTouchList *)touches;
- (char)ctrlKey;
- (char)shiftKey;
- (char)altKey;
- (char)metaKey;
- (DOMTouchList *)targetTouches;
- (DOMTouchList *)changedTouches;
- (void)initTouchEvent:(NSObject *)arg0 canBubble:(char)arg1 cancelable:(char)arg2 view:(NSObject *)arg3 detail:(int)arg4 screenX:(int)arg5 screenY:(int)arg6 clientX:(int)arg7 clientY:(int)arg8 ctrlKey:(char)arg9 altKey:(char)arg10 shiftKey:(char)arg11 metaKey:(char)arg12 touches:(DOMTouchList *)arg13 targetTouches:(DOMTouchList *)arg14 changedTouches:(DOMTouchList *)arg15 scale:(float)arg16 rotation:(float)arg17;

@end
