/* Runtime dump - EAWiFiUnconfiguredAccessory
 * Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAWiFiUnconfiguredAccessory : NSObject
{
    NSString * _name;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _ssid;
    NSString * _macAddress;
    unsigned int _properties;
}

@property (readonly, copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSString * manufacturer;
@property (readonly, copy, nonatomic) NSString * model;
@property (readonly, copy, nonatomic) NSString * ssid;
@property (readonly, copy, nonatomic) NSString * macAddress;
@property (readonly, nonatomic) unsigned int properties;

- (EAWiFiUnconfiguredAccessory *)initWithAirPortAssistantWACDevice:(NSObject *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)name;
- (NSString *)model;
- (void).cxx_destruct;
- (unsigned int)properties;
- (NSString *)manufacturer;
- (NSString *)ssid;
- (NSString *)macAddress;

@end
