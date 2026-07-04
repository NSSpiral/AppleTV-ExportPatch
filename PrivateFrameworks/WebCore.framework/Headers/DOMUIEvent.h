/* Runtime dump - DOMUIEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMUIEvent : DOMEvent

@property (readonly) DOMAbstractView * view;
@property (readonly) int detail;
@property (readonly) int keyCode;
@property (readonly) int charCode;
@property (readonly) int layerX;
@property (readonly) int layerY;
@property (readonly) int pageX;
@property (readonly) int pageY;
@property (readonly) int which;

- (DOMAbstractView *)view;
- (int)keyCode;
- (int)charCode;
- (int)pageX;
- (int)pageY;
- (int)detail;
- (int)layerX;
- (int)layerY;
- (int)which;
- (void)initUIEvent:(NSObject *)arg0 canBubble:(char)arg1 cancelable:(char)arg2 view:(DOMAbstractView *)arg3 detail:(int)arg4;
- (void)initUIEvent:(NSObject *)arg0 :(char)arg1 :(char)arg2 :(id)arg3 :(int)arg4;

@end
