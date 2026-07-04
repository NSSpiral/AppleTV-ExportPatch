/* Runtime dump - PSGuidedAccessSettingsDetail
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (UIImage *)iconImage;
+ (NSURL *)preferencesURL;
+ (char)guidedAccessHasPasscode;
+ (void)setGuidedAccessSwitchEnabled:(char)arg0;
+ (void)enterGuidedAccessMode;
+ (unsigned int)guidedAccessAvailability;

@end
