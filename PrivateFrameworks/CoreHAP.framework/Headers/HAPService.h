/* Runtime dump - HAPService
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPService : NSObject
{
    NSString * _type;
    NSNumber * _instanceID;
    HAPAccessory * _accessory;
    NSArray * _characteristics;
    NSArray * _includedServices;
}

@property (retain, nonatomic) CBService * cbService;
@property (copy, nonatomic) NSString * type;
@property (copy, nonatomic) NSNumber * instanceID;
@property (weak, nonatomic) HAPAccessory * accessory;
@property (retain, nonatomic) NSArray * characteristics;
@property (readonly, nonatomic) NSArray * includedServices;

- (NSString *)description;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (void).cxx_destruct;
- (NSArray *)characteristics;
- (NSNumber *)instanceID;
- (char)isEqualToService:(NSObject *)arg0;
- (void)setAccessory:(HAPAccessory *)arg0;
- (void)setCharacteristics:(NSArray *)arg0;
- (HAPService *)initWithType:(NSString *)arg0 instanceID:(NSNumber *)arg1 parsedCharacteristics:(id)arg2;
- (HAPAccessory *)accessory;
- (char)_updateAndValidateCharacteristics;
- (char)_validateServiceCharacteristics;
- (char)_updateCharacteristic:(id)arg0;
- (char)_validateMandatoryCharacteristics;
- (HAPService *)initWithType:(NSString *)arg0 instanceID:(NSNumber *)arg1;
- (NSObject *)characteristicsOfType:(NSObject *)arg0;
- (void)setInstanceID:(NSNumber *)arg0;
- (NSArray *)includedServices;
- (CBService *)cbService;
- (void)setCBService:(NSObject *)arg0;

@end
