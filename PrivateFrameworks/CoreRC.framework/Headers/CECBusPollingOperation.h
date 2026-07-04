/* Runtime dump - CECBusPollingOperation
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CECBusPollingOperation : NSObject
{
    CECInterface * _interface;
    unsigned char _initiatorAddress;
    unsigned char _pollingAddress;
    NSObject<OS_dispatch_queue> * _queue;
    <CECBusPollingOperationDelegate> * _delegate;
}

@property (nonatomic) <CECBusPollingOperationDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<CECBusPollingOperationDelegate> *)arg0;
- (CECBusPollingOperation *)init;
- (<CECBusPollingOperationDelegate> *)delegate;
- (void)stopPolling;
- (CECBusPollingOperation *)initWithInterface:(CECInterface *)arg0 initiator:(unsigned char)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)startPolling;
- (void)continuePolling;
- (void)poll;

@end
