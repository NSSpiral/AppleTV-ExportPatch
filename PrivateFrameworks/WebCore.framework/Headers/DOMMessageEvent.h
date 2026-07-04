/* Runtime dump - DOMMessageEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMMessageEvent : DOMEvent

@property (readonly, copy) NSString * origin;
@property (readonly, copy) NSString * lastEventId;
@property (readonly) <DOMEventTarget> * source;
@property (readonly) NSString * data;
@property (readonly) DOMMessagePort * messagePort;

- (NSString *)data;
- (NSString *)origin;
- (<DOMEventTarget> *)source;
- (NSString *)lastEventId;
- (DOMMessagePort *)messagePort;
- (void)initMessageEvent:(NSObject *)arg0 canBubbleArg:(char)arg1 cancelableArg:(char)arg2 dataArg:(id)arg3 originArg:(id)arg4 lastEventIdArg:(id)arg5 sourceArg:(id)arg6 messagePort:(DOMMessagePort *)arg7;

@end
