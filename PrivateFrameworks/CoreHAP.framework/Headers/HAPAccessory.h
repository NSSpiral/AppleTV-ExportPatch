/* Runtime dump - HAPAccessory
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessory : NSObject
{
    char _reachable;
    char _primary;
    char _supportsRelay;
    <HAPAccessoryDelegate> * _delegate;
    HAPAccessoryServer * _server;
    NSString * _identifier;
    NSNumber * _instanceID;
    NSString * _uniqueIdentifier;
    NSArray * _services;
    NSString * _serverIdentifier;
    int _linkType;
    NSString * _name;
    NSString * _model;
    NSString * _manufacturer;
    NSString * _serialNumber;
    NSString * _firmwareVersion;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (weak, nonatomic) <HAPAccessoryDelegate> * delegate;
@property (weak, nonatomic) HAPAccessoryServer * server;
@property (readonly, nonatomic) char paired;
@property (nonatomic) char primary;
@property (nonatomic) char reachable;
@property (nonatomic) char supportsRelay;
@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSNumber * instanceID;
@property (copy, nonatomic) NSString * uniqueIdentifier;
@property (readonly, copy, nonatomic) NSNumber * category;
@property (retain, nonatomic) NSArray * services;
@property (copy, nonatomic) NSString * serverIdentifier;
@property (readonly, nonatomic) int linkType;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * model;
@property (copy, nonatomic) NSString * manufacturer;
@property (copy, nonatomic) NSString * serialNumber;
@property (copy, nonatomic) NSString * firmwareVersion;
@property (retain) NSObject<OS_dispatch_queue> * workQueue;

+ (char)isAccessoryPairedWithIdentifier:(NSString *)arg0;
+ (NSString *)serverIdentifierWithUniqueIdentifier:(NSString *)arg0;
+ (HAPAccessory *)instanceIDForUniqueIdentifier:(NSString *)arg0;
+ (char)isAccessoryPrimaryWithUniqueIdentifier:(NSString *)arg0;

- (void)setDelegate:(<HAPAccessoryDelegate> *)arg0;
- (HAPAccessory *)init;
- (NSString *)description;
- (<HAPAccessoryDelegate> *)delegate;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSNumber *)category;
- (void)invalidate;
- (HAPAccessoryServer *)server;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (NSString *)model;
- (NSString *)uniqueIdentifier;
- (void).cxx_destruct;
- (void)setUniqueIdentifier:(NSString *)arg0;
- (void)setModel:(NSString *)arg0;
- (char)isPaired;
- (HAPAccessory *)initWithServer:(HAPAccessoryServer *)arg0 instanceID:(NSNumber *)arg1;
- (void)setPrimary:(char)arg0;
- (void)setServerIdentifier:(NSString *)arg0;
- (NSArray *)services;
- (char)validateCharacteristicValues:(id *)arg0;
- (NSNumber *)instanceID;
- (void)setServer:(HAPAccessoryServer *)arg0;
- (HAPAccessory *)initWithServer:(HAPAccessoryServer *)arg0 instanceID:(NSNumber *)arg1 parsedServices:(id)arg2;
- (void)setManufacturer:(NSString *)arg0;
- (void)setSerialNumber:(NSString *)arg0;
- (void)setServices:(NSArray *)arg0;
- (int)linkType;
- (void)readValueForCharacteristic:(id)arg0 queue:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)readCharacteristicValues:(NSArray *)arg0 queue:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)writeValue:(id)arg0 forCharacteristic:(HMCharacteristic *)arg1 authorizationData:(NSData *)arg2 queue:(NSObject *)arg3 completionHandler:(id /* block */)arg4;
- (void)writeCharacteristicValues:(NSArray *)arg0 queue:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (NSObject *)characteristicsOfType:(NSObject *)arg0;
- (void)setInstanceID:(NSNumber *)arg0;
- (void)setReachable:(char)arg0;
- (NSObject *)servicesOfType:(NSObject *)arg0;
- (char)isPrimary;
- (char)supportsRelay;
- (char)isReachable;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)_updateAndValidateServices;
- (NSString *)manufacturer;
- (NSString *)serialNumber;
- (char)_isReachable;
- (void)_setReachable:(char)arg0;
- (char)_updateService:(NSObject *)arg0;
- (char)_updateForAccessoryInformationService;
- (void)setFirmwareVersion:(NSString *)arg0;
- (NSObject *)characteristicOfType:(NSObject *)arg0 serviceType:(NSString *)arg1;
- (void)setSupportsRelay:(char)arg0;
- (NSString *)serverIdentifier;
- (NSString *)firmwareVersion;

@end
