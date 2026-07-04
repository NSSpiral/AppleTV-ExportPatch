/* Runtime dump - DOMMouseEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMMouseEvent : DOMUIEvent

@property (readonly) int screenX;
@property (readonly) int screenY;
@property (readonly) int clientX;
@property (readonly) int clientY;
@property (readonly) char ctrlKey;
@property (readonly) char shiftKey;
@property (readonly) char altKey;
@property (readonly) char metaKey;
@property (readonly) unsigned short button;
@property (readonly) <DOMEventTarget> * relatedTarget;
@property (readonly) int offsetX;
@property (readonly) int offsetY;
@property (readonly) int x;
@property (readonly) int y;
@property (readonly) DOMNode * fromElement;
@property (readonly) DOMNode * toElement;

- (unsigned short)button;
- (int)x;
- (int)y;
- (char)ctrlKey;
- (char)shiftKey;
- (char)altKey;
- (char)metaKey;
- (int)screenX;
- (int)screenY;
- (int)clientX;
- (int)clientY;
- (<DOMEventTarget> *)relatedTarget;
- (int)offsetX;
- (int)offsetY;
- (DOMNode *)fromElement;
- (DOMNode *)toElement;
- (void)initMouseEvent:(NSObject *)arg0 canBubble:(char)arg1 cancelable:(char)arg2 view:(NSObject *)arg3 detail:(int)arg4 screenX:(int)arg5 screenY:(int)arg6 clientX:(int)arg7 clientY:(int)arg8 ctrlKey:(char)arg9 altKey:(char)arg10 shiftKey:(char)arg11 metaKey:(char)arg12 button:(unsigned short)arg13 relatedTarget:(<DOMEventTarget> *)arg14;
- (void)initMouseEvent:(NSObject *)arg0 :(char)arg1 :(char)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(char)arg9 :(char)arg10 :(char)arg11 :(char)arg12 :(unsigned short)arg13 :(id)arg14;

@end
