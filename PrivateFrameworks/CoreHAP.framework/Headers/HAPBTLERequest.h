/* Runtime dump - HAPBTLERequest
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLERequest : NSObject
{
    unsigned char _type;
    char _encrypted;
    char _finished;
    HAPBTLETransactionIdentifier * _identifier;
    HAPCharacteristic * _characteristic;
    NSData * _body;
    HAPBlockOperation * _operation;
    HAPBTLEControlOutputStream * _controlOutputStream;
    HAPTimer * _responseTimer;
    double _timeoutInterval;
}

@property (readonly, nonatomic) HAPBTLETransactionIdentifier * identifier;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) HAPCharacteristic * characteristic;
@property (readonly, nonatomic) char encrypted;
@property (readonly, nonatomic) char finished;
@property (readonly, copy, nonatomic) NSData * body;
@property (readonly, nonatomic) double timeoutInterval;
@property (weak, nonatomic) HAPBlockOperation * operation;
@property (retain, nonatomic) HAPBTLEControlOutputStream * controlOutputStream;
@property (retain, nonatomic) HAPTimer * responseTimer;

- (HAPBTLERequest *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (HAPBlockOperation *)operation;
- (void)setOperation:(HAPBlockOperation *)arg0;
- (HAPBTLETransactionIdentifier *)identifier;
- (unsigned char)type;
- (NSData *)body;
- (NSString *)shortDescription;
- (void).cxx_destruct;
- (char)isFinished;
- (HAPCharacteristic *)characteristic;
- (NSString *)descriptionWithPointer:(char)arg0;
- (id)serialize;
- (void)cancelWithError:(NSError *)arg0;
- (double)timeoutInterval;
- (char)isEncrypted;
- (HAPTimer *)responseTimer;
- (NSString *)_serializeHeader;
- (HAPBTLERequest *)initWithCharacteristic:(HAPCharacteristic *)arg0 requestType:(unsigned char)arg1 bodyData:(NSData *)arg2 shouldEncrypt:(char)arg3 timeoutInterval:(double)arg4;
- (HAPBTLEControlOutputStream *)controlOutputStream;
- (void)setControlOutputStream:(HAPBTLEControlOutputStream *)arg0;
- (void)setResponseTimer:(HAPTimer *)arg0;

@end
