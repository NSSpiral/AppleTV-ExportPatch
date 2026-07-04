/* Runtime dump - CBMutableCharacteristic
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBMutableCharacteristic : CBCharacteristic
{
    NSNumber * _ID;
    unsigned int _permissions;
    NSMutableArray * _subscribedCentrals;
}

@property (nonatomic) unsigned int permissions;
@property (readonly, retain) NSArray * subscribedCentrals;
@property (retain, nonatomic) CBUUID * UUID;
@property (nonatomic) unsigned int properties;
@property (retain) NSData * value;
@property (retain) NSArray * descriptors;
@property (retain) NSNumber * ID;

- (NSNumber *)ID;
- (CBMutableCharacteristic *)initWithService:(CBService *)arg0 dictionary:(NSDictionary *)arg1;
- (char)handleCentralSubscribed:(id)arg0;
- (char)handleCentralUnsubscribed:(id)arg0;
- (void)handlePowerNotOn;
- (void)setPermissions:(unsigned int)arg0;
- (NSArray *)subscribedCentrals;
- (void)dealloc;
- (NSString *)description;
- (void)setProperties:(unsigned int)arg0;
- (void)setDescriptors:(NSArray *)arg0;
- (unsigned int)permissions;
- (void)setID:(NSSet *)arg0;
- (CBMutableCharacteristic *)initWithType:(NSString *)arg0 properties:(unsigned int)arg1 value:(NSData *)arg2 permissions:(unsigned int)arg3;

@end
