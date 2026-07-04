/* Runtime dump - HAPCharacteristic
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPCharacteristic : NSObject
{
    char _eventNotificationsEnabled;
    char _shouldValidateValueAfterReading;
    NSString * _type;
    NSNumber * _instanceID;
    HAPService * _service;
    unsigned int _properties;
    HAPCharacteristicMetadata * _metadata;
    id _value;
    HAPCharacteristicMetadata * _accessoryMetadata;
    unsigned long long _valueUpdateTime;
}

@property (retain, nonatomic) CBCharacteristic * cbCharacteristic;
@property (copy, nonatomic) NSString * type;
@property (copy, nonatomic) NSNumber * instanceID;
@property (weak, nonatomic) HAPService * service;
@property (nonatomic) unsigned int properties;
@property (nonatomic) char eventNotificationsEnabled;
@property (copy, nonatomic) HAPCharacteristicMetadata * metadata;
@property (copy, nonatomic) id value;
@property (nonatomic) unsigned long long valueUpdateTime;
@property (readonly, nonatomic) char supportsAdditionalAuthorizationData;
@property (nonatomic) char shouldValidateValueAfterReading;
@property (readonly, nonatomic) HAPCharacteristicMetadata * accessoryMetadata;

- (NSString *)description;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (void).cxx_destruct;
- (void)setProperties:(unsigned int)arg0;
- (unsigned int)properties;
- (void)setEventNotificationsEnabled:(char)arg0;
- (char)shouldValidateValueAfterReading;
- (id)validateValue:(id *)arg0 outValue:(id *)arg1;
- (NSNumber *)instanceID;
- (char)eventNotificationsEnabled;
- (char)isEqualToCharacteristic:(id)arg0;
- (void)setService:(HAPService *)arg0;
- (void)setShouldValidateValueAfterReading:(char)arg0;
- (HAPCharacteristic *)initWithType:(NSString *)arg0 instanceID:(NSNumber *)arg1 value:(NSObject *)arg2 properties:(unsigned int)arg3 eventNotificationsEnabled:(char)arg4 metadata:(HAPCharacteristicMetadata *)arg5;
- (HAPService *)service;
- (void)setInstanceID:(NSNumber *)arg0;
- (CBCharacteristic *)cbCharacteristic;
- (void)setCBCharacteristic:(CBCharacteristic *)arg0;
- (HAPCharacteristicMetadata *)accessoryMetadata;
- (void)_updateMetadata:(NSDictionary *)arg0 withProvidedMetadata:(NSDictionary *)arg1;
- (NSDictionary *)_generateValidMetadata:(NSDictionary *)arg0;
- (unsigned long long)valueUpdateTime;
- (NSString *)propertiesDescription;
- (void)setValueUpdateTime:(unsigned long long)arg0;
- (char)supportsAdditionalAuthorizationData;
- (void)setMetadata:(HAPCharacteristicMetadata *)arg0;
- (HAPCharacteristicMetadata *)metadata;

@end
