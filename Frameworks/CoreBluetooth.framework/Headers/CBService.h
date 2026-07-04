/* Runtime dump - CBService
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBService : CBAttribute
{
    CBPeripheral * _peripheral;
    char _isPrimary;
    NSArray * _includedServices;
    NSArray * _characteristics;
    NSNumber * _startHandle;
    NSNumber * _endHandle;
}

@property (readonly, weak, nonatomic) CBPeripheral * peripheral;
@property (nonatomic) char isPrimary;
@property (retain) NSArray * includedServices;
@property (retain) NSArray * characteristics;
@property (readonly, nonatomic) NSNumber * startHandle;
@property (readonly, nonatomic) NSNumber * endHandle;

- (void)setIsPrimary:(char)arg0;
- (CBService *)initWithPeripheral:(CBPeripheral *)arg0 dictionary:(NSDictionary *)arg1;
- (NSNumber *)startHandle;
- (NSNumber *)endHandle;
- (void)setIncludedServices:(NSArray *)arg0;
- (id)handleIncludedServicesDiscovered:(id)arg0;
- (id)handleCharacteristicsDiscovered:(id)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (NSArray *)characteristics;
- (void)setCharacteristics:(NSArray *)arg0;
- (NSArray *)includedServices;
- (CBPeripheral *)peripheral;
- (char)isPrimary;

@end
