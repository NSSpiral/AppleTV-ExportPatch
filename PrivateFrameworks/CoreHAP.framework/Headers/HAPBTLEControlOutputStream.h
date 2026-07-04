/* Runtime dump - HAPBTLEControlOutputStream
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLEControlOutputStream : NSObject
{
    unsigned char _type;
    char _complete;
    char _open;
    <HAPBTLEControlOutputStreamDelegate> * _delegate;
    HAPBTLETransactionIdentifier * _transactionIdentifier;
    NSData * _payload;
    unsigned int _mtuLength;
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned int _controlPayloadWrittenLength;
    NSOperationQueue * _operationQueue;
    double _timeoutInterval;
}

@property (copy, nonatomic) id completionHandler;
@property (weak) <HAPBTLEControlOutputStreamDelegate> * delegate;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) HAPBTLETransactionIdentifier * transactionIdentifier;
@property (readonly, copy, nonatomic) NSData * payload;
@property (readonly, nonatomic) unsigned int mtuLength;
@property (readonly, nonatomic) double timeoutInterval;
@property (nonatomic) char complete;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (nonatomic) char open;
@property (nonatomic) unsigned int controlPayloadWrittenLength;
@property (readonly, nonatomic) NSOperationQueue * operationQueue;

+ (NSString *)shortDescription;

- (void)setDelegate:(<HAPBTLEControlOutputStreamDelegate> *)arg0;
- (HAPBTLEControlOutputStream *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (<HAPBTLEControlOutputStreamDelegate> *)delegate;
- (NSData *)payload;
- (unsigned char)type;
- (id /* block */)completionHandler;
- (void)close;
- (NSString *)shortDescription;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)setComplete:(char)arg0;
- (void)open;
- (NSOperationQueue *)operationQueue;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (HAPBTLETransactionIdentifier *)transactionIdentifier;
- (NSString *)descriptionWithPointer:(char)arg0;
- (void)_closeWithError:(NSError *)arg0;
- (double)timeoutInterval;
- (char)isComplete;
- (HAPBTLEControlOutputStream *)initWithControlType:(unsigned char)arg0 transactionIdentifier:(HAPBTLETransactionIdentifier *)arg1 controlPayload:(NSData *)arg2 mtuLength:(unsigned int)arg3 timeoutInterval:(double)arg4;
- (unsigned int)remainingControlPayloadLength;
- (unsigned int)controlPayloadWrittenLength;
- (void)sendNextPayloadFragment;
- (void)_sendNextPayloadFragmentWithCompletionHandler:(id /* block */)arg0;
- (void)_complete;
- (unsigned int)mtuLength;
- (id)_nextPacketWithMaximumLength:(unsigned int)arg0 error:(id *)arg1;
- (void)setControlPayloadWrittenLength:(unsigned int)arg0;
- (char)isOpen;
- (void)setOpen:(char)arg0;

@end
