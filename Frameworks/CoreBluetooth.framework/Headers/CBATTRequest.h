/* Runtime dump - CBATTRequest
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBATTRequest : NSObject
{
    CBCentral * _central;
    CBCharacteristic * _characteristic;
    unsigned int _offset;
    NSNumber * _transactionID;
    NSMutableData * _value;
    char _ignoreResponse;
}

@property (readonly, retain, nonatomic) CBCentral * central;
@property (retain, nonatomic) CBCharacteristic * characteristic;
@property (readonly, nonatomic) unsigned int offset;
@property (copy) NSData * value;
@property (readonly, nonatomic) NSNumber * transactionID;
@property (nonatomic) char ignoreResponse;

- (char)ignoreResponse;
- (CBATTRequest *)initWithCentral:(CBCentral *)arg0 characteristic:(CBCharacteristic *)arg1 offset:(unsigned int)arg2 transactionID:(NSNumber *)arg3;
- (void)appendValueData:(NSData *)arg0;
- (void)setIgnoreResponse:(char)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSData *)value;
- (void)setValue:(NSData *)arg0;
- (unsigned int)endOffset;
- (unsigned int)offset;
- (NSNumber *)transactionID;
- (CBCharacteristic *)characteristic;
- (void)setCharacteristic:(CBCharacteristic *)arg0;
- (CBCentral *)central;

@end
