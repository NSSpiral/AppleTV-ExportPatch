/* Runtime dump - CoreCECBusClient
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECBusClient : CoreCECBus

+ (char)supportsSecureCoding;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (CoreCECBusClient *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (void)activeSourceHasChangedTo:(CoreCECDevice *)arg0 fromDevice:(NSObject *)arg1;
- (NSObject *)addDeviceWithType:(unsigned int)arg0 error:(id *)arg1;
- (char)setOSDName:(NSString *)arg0 error:(id *)arg1;
- (char)setTvLanguageCode:(NSString *)arg0 error:(id *)arg1;
- (void)mergePropertiesFromBus:(id)arg0;

@end
