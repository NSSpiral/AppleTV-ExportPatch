/* Runtime dump - DOMTextEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMTextEvent : DOMUIEvent

@property (readonly, copy) NSString * data;

- (NSString *)data;
- (void)initTextEvent:(NSObject *)arg0 canBubbleArg:(char)arg1 cancelableArg:(char)arg2 viewArg:(id)arg3 dataArg:(id)arg4;

@end
