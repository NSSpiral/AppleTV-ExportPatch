/* Runtime dump - HMDService
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDService : NSObject <NSSecureCoding>
{
    HMDAccessory * _accessory;
    NSString * _name;
    NSNumber * _instanceID;
    NSString * _associatedServiceType;
    NSArray * _characteristics;
    NSString * _serviceType;
    NSString * _providedName;
}

@property (readonly, copy, nonatomic) NSString * contextID;
@property (readonly, weak, nonatomic) HMDAccessory * accessory;
@property (copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSString * type;
@property (copy, nonatomic) NSNumber * instanceID;
@property (readonly, nonatomic) NSString * associatedServiceType;
@property (readonly, copy, nonatomic) NSArray * characteristics;
@property (retain, nonatomic) NSString * serviceType;
@property (retain, nonatomic) NSString * providedName;

+ (char)supportsSecureCoding;

- (HMDService *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSURL *)url;
- (NSString *)type;
- (NSString *)contextID;
- (void).cxx_destruct;
- (NSArray *)characteristics;
- (NSNumber *)instanceID;
- (HMDAccessory *)accessory;
- (void)setInstanceID:(NSNumber *)arg0;
- (NSString *)serviceType;
- (NSString *)getName;
- (NSString *)associatedServiceType;
- (char)updateAssociatedServiceType:(NSObject *)arg0 error:(id *)arg1;
- (NSString *)getConfiguredName;
- (id)findCharacteristic:(id)arg0;
- (NSString *)providedName;
- (void)_updateName:(NSString *)arg0;
- (void)setProvidedName:(NSString *)arg0;
- (void)updateLastKnownValues;
- (NSObject *)configureWithService:(NSObject *)arg0 accessory:(HMDAccessory *)arg1;
- (HMDService *)initWithService:(NSObject *)arg0 accessory:(HMDAccessory *)arg1;
- (NSObject *)findCharacteristicWithType:(NSString *)arg0;
- (NSString *)updateName:(NSString *)arg0;
- (void)setServiceType:(NSString *)arg0;
- (void)_readNameCharacterisiticIfNeeded:(id)arg0;
- (void)_updateProvidedName:(NSString *)arg0;
- (NSString *)assistantUniqueIdentifier;

@end
