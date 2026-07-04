/* Runtime dump - HMMsgHandler
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMsgHandler : NSObject
{
    NSObject<OS_dispatch_queue> * _receiverQueue;
    id _messageHandler;
    NSNumber * _token;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * receiverQueue;
@property (copy, nonatomic) id messageHandler;
@property (retain, nonatomic) NSNumber * token;

+ (HMMsgHandler *)msgHandler:(id /* block */)arg0 token:(/* block */ id)arg1 receiverQueue:(NSObject<OS_dispatch_queue> *)arg2;

- (void).cxx_destruct;
- (NSNumber *)token;
- (void)setToken:(NSNumber *)arg0;
- (HMMsgHandler *)initWithMessageHandler:(id /* block */)arg0 token:(/* block */ id)arg1 receiverQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (NSObject<OS_dispatch_queue> *)receiverQueue;
- (void)setReceiverQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (id /* block */)messageHandler;
- (void)setMessageHandler:(id /* block */)arg0;

@end
