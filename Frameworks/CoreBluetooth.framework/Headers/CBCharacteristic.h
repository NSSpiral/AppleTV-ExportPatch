/* Runtime dump - CBCharacteristic
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBCharacteristic : CBAttribute
{
    CBService * _service;
    unsigned int _properties;
    NSData * _value;
    NSArray * _descriptors;
    char _isBroadcasted;
    char _isNotifying;
    CBPeripheral * _peripheral;
    NSNumber * _handle;
    NSNumber * _valueHandle;
}

@property (weak, nonatomic) CBService * service;
@property (readonly, nonatomic) unsigned int properties;
@property (retain) NSData * value;
@property (retain) NSArray * descriptors;
@property (readonly) char isBroadcasted;
@property char isNotifying;
@property (readonly, nonatomic) CBPeripheral * peripheral;
@property (readonly, nonatomic) NSNumber * handle;
@property (readonly, nonatomic) NSNumber * valueHandle;

- (CBCharacteristic *)initWithService:(CBService *)arg0 dictionary:(NSDictionary *)arg1;
- (void)setIsNotifying:(char)arg0;
- (NSNumber *)valueHandle;
- (id)handleValueUpdated:(id)arg0;
- (id)handleValueWritten:(id)arg0;
- (id)handleValueBroadcasted:(id)arg0;
- (id)handleValueNotifying:(id)arg0;
- (id)handleDescriptorsDiscovered:(id)arg0;
- (char)isBroadcasted;
- (char)isNotifying;
- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (NSData *)value;
- (void)setValue:(NSData *)arg0;
- (unsigned int)properties;
- (NSArray *)descriptors;
- (void)setDescriptors:(NSArray *)arg0;
- (void)setService:(CBService *)arg0;
- (CBService *)service;
- (CBPeripheral *)peripheral;
- (NSNumber *)handle;

@end
