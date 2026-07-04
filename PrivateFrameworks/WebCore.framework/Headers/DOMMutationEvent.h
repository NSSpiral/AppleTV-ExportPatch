/* Runtime dump - DOMMutationEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMMutationEvent : DOMEvent

@property (readonly) DOMNode * relatedNode;
@property (readonly, copy) NSString * prevValue;
@property (readonly, copy) NSString * newValue;
@property (readonly, copy) NSString * attrName;
@property (readonly) unsigned short attrChange;

- (DOMNode *)relatedNode;
- (NSString *)prevValue;
- (NSString *)newValue;
- (NSString *)attrName;
- (unsigned short)attrChange;
- (void)initMutationEvent:(NSObject *)arg0 canBubble:(char)arg1 cancelable:(char)arg2 relatedNode:(DOMNode *)arg3 prevValue:(NSString *)arg4 newValue:(NSString *)arg5 attrName:(NSString *)arg6 attrChange:(unsigned short)arg7;
- (void)initMutationEvent:(NSObject *)arg0 :(char)arg1 :(char)arg2 :(id)arg3 :(id)arg4 :(id)arg5 :(id)arg6 :(unsigned short)arg7;

@end
