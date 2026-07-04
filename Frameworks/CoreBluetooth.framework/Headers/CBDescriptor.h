/* Runtime dump - CBDescriptor
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBDescriptor : CBAttribute
{
    CBCharacteristic * _characteristic;
    id _value;
    CBPeripheral * _peripheral;
    NSNumber * _handle;
}

@property (weak, nonatomic) CBCharacteristic * characteristic;
@property (retain) id value;
@property (readonly, nonatomic) CBPeripheral * peripheral;
@property (readonly, nonatomic) NSNumber * handle;

- (CBDescriptor *)initWithCharacteristic:(CBCharacteristic *)arg0 dictionary:(NSDictionary *)arg1;
- (id)handleValueUpdated:(id)arg0;
- (id)handleValueWritten:(id)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (CBCharacteristic *)characteristic;
- (CBPeripheral *)peripheral;
- (void)setCharacteristic:(CBCharacteristic *)arg0;
- (NSNumber *)handle;

@end
