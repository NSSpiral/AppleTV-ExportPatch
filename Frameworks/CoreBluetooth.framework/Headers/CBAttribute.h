/* Runtime dump - CBAttribute
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBAttribute : NSObject
{
    CBUUID * _UUID;
}

@property (retain, nonatomic) CBUUID * UUID;

- (void)dealloc;
- (CBUUID *)UUID;
- (CBAttribute *)initWithUUID:(NSString *)arg0;
- (void)setUUID:(NSSet *)arg0;

@end
