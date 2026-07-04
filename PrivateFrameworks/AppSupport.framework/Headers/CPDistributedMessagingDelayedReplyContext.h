/* Runtime dump - CPDistributedMessagingDelayedReplyContext
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPDistributedMessagingDelayedReplyContext : NSObject
{
    unsigned int _replyPort;
    char _portPassing;
}

@property (nonatomic) unsigned int replyPort;
@property (nonatomic) char portPassing;

- (void)dealloc;
- (CPDistributedMessagingDelayedReplyContext *)initWithReplyPort:(unsigned int)arg0 portPassing:(char)arg1;
- (char)portPassing;
- (void)setPortPassing:(char)arg0;
- (unsigned int)replyPort;
- (void)setReplyPort:(unsigned int)arg0;

@end
