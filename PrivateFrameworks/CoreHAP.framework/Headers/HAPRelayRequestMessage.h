/* Runtime dump - HAPRelayRequestMessage
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayRequestMessage : NSObject
{
    NSMutableSet * _requestIdentifiers;
    unsigned short _transactionIdentifier;
    NSData * _body;
    unsigned int _type;
    HAPBlockOperation * _operation;
    double _timeout;
}

@property (nonatomic) unsigned short transactionIdentifier;
@property (readonly, nonatomic) NSSet * requestIdentifiers;
@property (readonly, copy, nonatomic) NSData * body;
@property (readonly, nonatomic) char encrypted;
@property (readonly, nonatomic) char sent;
@property (readonly, nonatomic) char finished;
@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) double timeout;
@property (weak, nonatomic) HAPBlockOperation * operation;

- (NSString *)description;
- (NSString *)debugDescription;
- (HAPBlockOperation *)operation;
- (void)setOperation:(HAPBlockOperation *)arg0;
- (unsigned int)type;
- (NSData *)body;
- (NSString *)shortDescription;
- (void).cxx_destruct;
- (char)isFinished;
- (unsigned short)transactionIdentifier;
- (char)isEncrypted;
- (NSSet *)requestIdentifiers;
- (HAPRelayRequestMessage *)initWithRequestData:(NSData *)arg0 messageType:(unsigned int)arg1 timeout:(double)arg2;
- (char)sent;
- (void)addRequestIdentifier:(NSString *)arg0;
- (void)setTransactionIdentifier:(unsigned short)arg0;
- (double)timeout;

@end
