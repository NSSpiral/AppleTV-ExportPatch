/* Runtime dump - IKJSDeviceSettings
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSDeviceSettings : IKJSObject <IKJSDeviceSettings>
{
    id _restrictionDidChangeToken;
    <IKAppDeviceConfig> * _deviceConfig;
}

@property (weak, nonatomic) <IKAppDeviceConfig> * deviceConfig;
@property (readonly, retain, nonatomic) NSString * name;
@property (readonly, retain, nonatomic) NSString * language;
@property (readonly, retain, nonatomic) NSString * storefrontCountryCode;
@property (readonly, retain, nonatomic) NSString * preferredVideoFormat;
@property (readonly, retain, nonatomic) NSString * preferredVideoPreviewFormat;
@property (readonly, nonatomic) struct CGSize Screen;
@property (readonly, nonatomic) IKJSRestrictions * Restrictions;

- (void)dealloc;
- (NSString *)name;
- (void).cxx_destruct;
- (NSString *)language;
- (IKJSDeviceSettings *)initWithAppContext:(<IKApplication> *)arg0 deviceConfig:(<IKAppDeviceConfig> *)arg1;
- (void)_restrictionsDidChangeNotification:(NSNotification *)arg0;
- (<IKAppDeviceConfig> *)deviceConfig;
- (NSString *)preferredVideoFormat;
- (NSString *)_formatStringForVideoFormat:(unsigned int)arg0;
- (NSString *)preferredVideoPreviewFormat;
- (NSString *)storefrontCountryCode;
- (struct CGSize)Screen;
- (IKJSRestrictions *)Restrictions;
- (void)setDeviceConfig:(<IKAppDeviceConfig> *)arg0;

@end
