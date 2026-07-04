/* Runtime dump - CBMutableService
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBMutableService : CBService
{
    NSNumber * _ID;
}

@property (retain, nonatomic) CBUUID * UUID;
@property (nonatomic) char isPrimary;
@property (retain) NSArray * includedServices;
@property (retain) NSArray * characteristics;
@property (retain) NSNumber * ID;

- (NSNumber *)ID;
- (void)handlePowerNotOn;
- (void)dealloc;
- (NSString *)description;
- (CBMutableService *)initWithDictionary:(NSDictionary *)arg0;
- (void)setCharacteristics:(NSArray *)arg0;
- (void)setID:(NSSet *)arg0;
- (CBMutableService *)initWithType:(NSString *)arg0 primary:(char)arg1;

@end
