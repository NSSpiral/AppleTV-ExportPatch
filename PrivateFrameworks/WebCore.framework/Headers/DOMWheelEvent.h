/* Runtime dump - DOMWheelEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMWheelEvent : DOMMouseEvent

@property (readonly) int wheelDeltaX;
@property (readonly) int wheelDeltaY;
@property (readonly) int wheelDelta;
@property (readonly) char isHorizontal;

- (char)isHorizontal;
- (double)deltaX;
- (double)deltaY;
- (double)deltaZ;
- (unsigned int)deltaMode;
- (int)wheelDeltaX;
- (int)wheelDeltaY;
- (int)wheelDelta;
- (char)webkitDirectionInvertedFromDevice;
- (void)initWheelEvent:(int)arg0 wheelDeltaY:(int)arg1 view:(NSObject *)arg2 screenX:(int)arg3 screenY:(int)arg4 clientX:(int)arg5 clientY:(int)arg6 ctrlKey:(char)arg7 altKey:(char)arg8 shiftKey:(char)arg9 metaKey:(char)arg10;

@end
