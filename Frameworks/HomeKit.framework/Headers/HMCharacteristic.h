/* Runtime dump - HMCharacteristic
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristic : NSObject <NSSecureCoding, HMObjectMerge>
{
    char _notificationEnabled;
    NSUUID * _uniqueIdentifier;
    NSString * _characteristicType;
    NSArray * _properties;
    id _value;
    HMService * _service;
    HMCharacteristicMetadata * _metadata;
    NSNumber * _instanceID;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDelegateCaller * _delegateCaller;
}

@property (copy, nonatomic) NSString * characteristicType;
@property (readonly, copy, nonatomic) NSString * localizedDescription;
@property (weak, nonatomic) HMService * service;
@property (copy, nonatomic) NSArray * properties;
@property (readonly, nonatomic) HMCharacteristicMetadata * metadata;
@property (copy, nonatomic) id value;
@property (nonatomic) char notificationEnabled;
@property (readonly, copy, nonatomic) NSUUID * uniqueIdentifier;
@property (readonly, nonatomic) NSNumber * instanceID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (retain, nonatomic) HMDelegateCaller * delegateCaller;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)_characteristicTypeAsString:(NSString *)arg0;
+ (char)supportsSecureCoding;

- (HMDelegateCaller *)delegateCaller;
- (NSDictionary *)mapCuapProperties:(int)arg0;
- (void)setNotificationEnabled:(char)arg0;
- (void)setDelegateCaller:(HMDelegateCaller *)arg0;
- (void)_writeValue:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)_readValueWithCompletionHandler:(id /* block */)arg0;
- (void)_enableNotification:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)_updateAuthorizationData:(NSData *)arg0 completionHandler:(id /* block */)arg1;
- (int)mapToCuapProperties:(NSDictionary *)arg0;
- (void)_configure:(id)arg0 clientQueue:(NSObject<OS_dispatch_queue> *)arg1 delegateCaller:(HMDelegateCaller *)arg2;
- (void)_updateValue:(id)arg0;
- (void)writeValue:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)readValueWithCompletionHandler:(id /* block */)arg0;
- (void)enableNotification:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)updateAuthorizationData:(NSData *)arg0 completionHandler:(id /* block */)arg1;
- (NSString *)_characteristicTypeDescription;
- (HMCharacteristic *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMCharacteristic *)init;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (NSString *)localizedDescription;
- (NSUUID *)uniqueIdentifier;
- (void).cxx_destruct;
- (void)setProperties:(NSArray *)arg0;
- (NSArray *)properties;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (NSNumber *)instanceID;
- (void)setService:(HMService *)arg0;
- (HMService *)service;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (NSString *)characteristicType;
- (void)setClientQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)isNotificationEnabled;
- (void)setPropertyQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setCharacteristicType:(NSString *)arg0;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;
- (HMCharacteristicMetadata *)metadata;

@end
