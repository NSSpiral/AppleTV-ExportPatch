/* Runtime dump - CoreRCBus
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCBus : NSObject <NSCopying, NSSecureCoding>
{
    <CoreRCBusDelegate> * _delegate;
    CoreRCManager * _manager;
    NSUUID * _uniqueID;
    NSMutableSet * _devicesInternal;
}

@property (readonly, nonatomic) NSSet * devices;
@property (readonly, nonatomic) NSUUID * uniqueID;
@property (readonly, nonatomic) NSMutableSet * devicesInternal;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (CoreRCBus *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<CoreRCBusDelegate> *)arg0;
- (CoreRCBus *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (<CoreRCBusDelegate> *)delegate;
- (CoreRCBus *)copyWithZone:(struct _NSZone *)arg0;
- (CoreRCManager *)manager;
- (NSObject *)mergeDevice:(NSObject *)arg0;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1 error:(id *)arg2;
- (NSString *)propertyForKey:(NSString *)arg0 error:(id *)arg1;
- (CoreRCBus *)initWithBus:(id)arg0;
- (void)removeDevice:(NSObject *)arg0;
- (void)addDevice:(NSObject *)arg0;
- (id)deviceOnBusEquivalentTo:(id)arg0;
- (void)notifyDelegateDeviceUpdated:(id)arg0;
- (void)replaceDevice:(NSObject *)arg0 withDevice:(NSObject *)arg1;
- (void)removeAllDevices;
- (void)mergePropertiesFromBus:(id)arg0;
- (NSMutableSet *)devicesInternal;
- (void)notifyDelegateDeviceAdded:(id)arg0;
- (void)notifyDelegateDeviceRemoved:(id)arg0;
- (void)notifyDelegateAllDevicesRemoved:(id)arg0;
- (NSSet *)devices;
- (void)setManager:(CoreRCManager *)arg0;
- (NSUUID *)uniqueID;

@end
