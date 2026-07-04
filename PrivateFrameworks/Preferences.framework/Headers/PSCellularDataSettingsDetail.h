/* Runtime dump - PSCellularDataSettingsDetail
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCellularDataSettingsDetail : NSObject <PSSettingsBoolDetail>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)setEnabled:(char)arg0;
+ (char)isEnabled;
+ (UIImage *)iconImage;
+ (NSURL *)preferencesURL;
+ (char)deviceSupportsCellularData;

@end
