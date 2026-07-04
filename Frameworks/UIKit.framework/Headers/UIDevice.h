/* Runtime dump - UIDevice
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDevice : NSObject
{
    int _numDeviceOrientationObservers;
    float _batteryLevel;
    struct ? _deviceFlags;
}

@property (nonatomic) int orientation;
@property (readonly, retain, nonatomic) NSString * buildVersion;
@property (readonly, retain, nonatomic) NSString * name;
@property (readonly, retain, nonatomic) NSString * model;
@property (readonly, retain, nonatomic) NSString * localizedModel;
@property (readonly, retain, nonatomic) NSString * systemName;
@property (readonly, retain, nonatomic) NSString * systemVersion;
@property (readonly, nonatomic) int orientation;
@property (readonly, retain, nonatomic) NSUUID * identifierForVendor;
@property (readonly, nonatomic) char generatesDeviceOrientationNotifications;
@property (nonatomic) char batteryMonitoringEnabled;
@property (readonly, nonatomic) int batteryState;
@property (readonly, nonatomic) float batteryLevel;
@property (nonatomic) char proximityMonitoringEnabled;
@property (readonly, nonatomic) char proximityState;
@property (readonly, nonatomic) char multitaskingSupported;
@property (readonly, nonatomic) int userInterfaceIdiom;
@property (nonatomic) float _backlightLevel;

+ (NSString *)platformString;
+ (NSString *)platformString;
+ (UIDevice *)currentDevice;
+ (int)currentDeviceOrientationAllowingAmbiguous:(char)arg0;
+ (char)_isWatch;
+ (char)_isWatchCompanion;
+ (NSString *)modelSpecificLocalizedStringKeyForKey:(NSString *)arg0;

- (NSString *)_deviceInfoForKey:(struct __CFString *)arg0;
- (int)_graphicsQualityIncludingMediumN41:(char)arg0;
- (id)_mediumQualityProductsIncludingN41:(char)arg0;
- (id)_currentProduct;
- (int)sbf_bannerGraphicsQuality;
- (int)sbf_controlCenterGraphicsQuality;
- (int)userInterfaceIdiom;
- (void)_unregisterForSystemSounds:(id)arg0;
- (void)_registerForSystemSounds:(id)arg0;
- (NSString *)name;
- (char)isGeneratingDeviceOrientationNotifications;
- (void)setOrientation:(int)arg0 animated:(char)arg1;
- (int)orientation;
- (void)_setActiveUserInterfaceIdiom:(int)arg0;
- (void)_setBacklightLevel:(float)arg0;
- (float)_backlightLevel;
- (void)_setProximityState:(char)arg0;
- (NSString *)systemVersion;
- (void)setProximityMonitoringEnabled:(char)arg0;
- (char)isProximityMonitoringEnabled;
- (int)_graphicsQuality;
- (void)beginGeneratingDeviceOrientationNotifications;
- (void)endGeneratingDeviceOrientationNotifications;
- (NSString *)model;
- (void)_playSystemSound:(unsigned long)arg0;
- (void)setOrientation:(int)arg0;
- (void)_enableDeviceOrientationEvents:(char)arg0;
- (NSString *)_deviceInfoForKey:(struct __CFString *)arg0;
- (NSUUID *)identifierForVendor;
- (void)_updateSystemSoundActiveStatus:(id)arg0;
- (NSString *)localizedModel;
- (NSString *)systemName;
- (NSString *)buildVersion;
- (NSString *)uniqueIdentifier;
- (char)isBatteryMonitoringEnabled;
- (void)setBatteryMonitoringEnabled:(char)arg0;
- (int)batteryState;
- (float)batteryLevel;
- (void)_setExpectsFaceContactInLandscape:(char)arg0;
- (char)proximityState;
- (char)isMultitaskingSupported;
- (void)playInputClick;
- (float)_softwareDimmingAlpha;
- (void)_setBatteryState:(int)arg0;
- (void)_setBatteryLevel:(float)arg0;
- (char)_isTTYEnabled;
- (void)_setGraphicsQualityOverride:(int)arg0;
- (char)_hasGraphicsQualityOverride;
- (void)_clearGraphicsQualityOverride;
- (int)_keyboardGraphicsQuality;
- (int)_predictionGraphicsQuality;

@end
