/* Runtime dump - CBMutableDescriptor
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBMutableDescriptor : CBDescriptor
{
    NSNumber * _ID;
}

@property (retain) NSNumber * ID;

- (NSNumber *)ID;
- (CBMutableDescriptor *)initWithCharacteristic:(CBCharacteristic *)arg0 dictionary:(NSDictionary *)arg1;
- (CBMutableDescriptor *)initWithType:(NSString *)arg0 value:(NSObject *)arg1;
- (void)dealloc;
- (NSString *)description;
- (void)setID:(NSSet *)arg0;

@end
