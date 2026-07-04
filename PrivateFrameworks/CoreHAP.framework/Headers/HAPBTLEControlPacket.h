/* Runtime dump - HAPBTLEControlPacket
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLEControlPacket : NSObject
{
    unsigned char _type;
    char _continuationPacket;
    HAPBTLETransactionIdentifier * _transactionIdentifier;
    NSData * _payload;
}

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) HAPBTLETransactionIdentifier * transactionIdentifier;
@property (readonly, copy, nonatomic) NSData * payload;
@property (readonly, nonatomic) char continuationPacket;

+ (NSString *)shortDescription;
+ (NSData *)packetWithSerializedData:(NSData *)arg0 error:(id *)arg1;

- (HAPBTLEControlPacket *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSData *)payload;
- (unsigned char)type;
- (NSString *)shortDescription;
- (void).cxx_destruct;
- (HAPBTLEControlPacket *)initWithControlType:(unsigned char)arg0 transactionIdentifier:(HAPBTLETransactionIdentifier *)arg1 continuationPacket:(char)arg2 packetPayload:(NSData *)arg3 maximumLength:(unsigned int)arg4;
- (HAPBTLETransactionIdentifier *)transactionIdentifier;
- (NSString *)descriptionWithPointer:(char)arg0;
- (char)isContinuationPacket;
- (id)serialize;

@end
