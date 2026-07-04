/* Runtime dump - Broadcaster
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface Broadcaster : NSProxy
{
    NSArray * _targets;
    IMRemoteObjectBroadcaster * _parent;
    Protocol * _protocol;
    IMMessageContext * _messageContext;
    int _curXPCMessagePriority;
}

@property (nonatomic) int curXPCMessagePriority;

- (void)dealloc;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (Broadcaster *)initWithNotifier:(CKDAccountNotifier *)arg0 messageContext:(IMMessageContext *)arg1 protocol:(Protocol *)arg2 targets:(NSArray *)arg3 priority:(int)arg4;
- (Broadcaster *)initWithNotifier:(CKDAccountNotifier *)arg0 messageContext:(IMMessageContext *)arg1 protocol:(Protocol *)arg2 targets:(NSArray *)arg3;
- (int)curXPCMessagePriority;
- (void)setCurXPCMessagePriority:(int)arg0;
- (void)sendXPCObject:(NSObject *)arg0;

@end
