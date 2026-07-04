/* Runtime dump - HAPFragmentationPacket
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPFragmentationPacket : NSObject
{
    unsigned short _transactionIdentifier;
    unsigned int _length;
    unsigned int _offset;
    NSData * _data;
}

@property (readonly, nonatomic) unsigned short transactionIdentifier;
@property (readonly, nonatomic) unsigned int length;
@property (readonly, nonatomic) unsigned int offset;
@property (readonly, copy, nonatomic) NSData * data;

- (HAPFragmentationPacket *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)debugDescription;
- (unsigned int)length;
- (NSData *)data;
- (unsigned int)offset;
- (NSString *)shortDescription;
- (void).cxx_destruct;
- (unsigned short)transactionIdentifier;
- (id)serialize;
- (HAPFragmentationPacket *)initWithFragmentedPacketData:(NSData *)arg0;
- (HAPFragmentationPacket *)initWithData:(NSData *)arg0 transactionIdentifier:(unsigned short)arg1 length:(unsigned int)arg2 offset:(unsigned int)arg3;

@end
