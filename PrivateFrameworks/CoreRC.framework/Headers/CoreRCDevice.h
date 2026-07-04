/* Runtime dump - CoreRCDevice
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCDevice : NSObject <NSCopying, NSSecureCoding>
{
    <CoreRCDeviceDelegate> * _delegate;
    CoreRCManager * _manager;
    NSUUID * _uniqueID;
    NSUUID * _busUniqueID;
}

@property (readonly, nonatomic) char isLocalDevice;
@property (readonly, nonatomic) NSUUID * uniqueID;
@property (readonly, nonatomic) NSUUID * busUniqueID;

+ (char)supportsSecureCoding;

- (CoreRCDevice *)initWithDevice:(NSObject *)arg0;
- (CoreRCDevice *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<CoreRCDeviceDelegate> *)arg0;
- (CoreRCDevice *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (<CoreRCDeviceDelegate> *)delegate;
- (CoreRCDevice *)copyWithZone:(struct _NSZone *)arg0;
- (CoreRCManager *)manager;
- (CoreRCDevice *)initWithBus:(id)arg0;
- (void)receivedHIDEvent:(NSObject *)arg0 fromDevice:(NSObject *)arg1;
- (id)bus;
- (void)readyToSend;
- (char)isLocalDevice;
- (NSDictionary *)mergeProperties;
- (NSUUID *)busUniqueID;
- (char)sendHIDEvent:(NSObject *)arg0 target:(NSObject *)arg1 error:(id *)arg2;
- (void)delloc;
- (void)mergePropertiesFromDevice:(NSObject *)arg0;
- (char)sendHIDEvent:(NSObject *)arg0 error:(id *)arg1;
- (void)setManager:(CoreRCManager *)arg0;
- (NSUUID *)uniqueID;

@end
