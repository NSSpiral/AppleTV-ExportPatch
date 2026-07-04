/* Runtime dump - ATVPrivacyWelcomeManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class SETTINGSAppliance;
@interface ATVPrivacyWelcomeManager : NSObject

+ (ATVPrivacyWelcomeManager *)privacyWelcomeControllerForAppliance:(id)arg0;
+ (ATVPrivacyWelcomeManager *)_applianceIDForAppliance:(id)arg0;
+ (char)_acknowledgementFlagForApplianceID:(NSObject *)arg0;
+ (void)_setDeviceFlag:(char)arg0 forApplianceID:(NSObject *)arg1;
+ (char)_deviceFlagForApplianceID:(NSObject *)arg0;
+ (NSString *)_devicePrivacyFlagFilePath;
+ (char)privacyAcknowledgementForAppliance:(id)arg0;
+ (void)setPrivacyAcknowledgement:(char)arg0 forAppliance:(SETTINGSAppliance *)arg1;

@end
