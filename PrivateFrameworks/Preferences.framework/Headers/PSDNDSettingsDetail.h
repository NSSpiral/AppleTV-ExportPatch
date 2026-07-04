/* Runtime dump - PSDNDSettingsDetail
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSDNDSettingsDetail : NSObject <PSSettingsBoolDetail>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)setEnabled:(char)arg0;
+ (char)isEnabled;
+ (UIImage *)iconImage;
+ (NSURL *)preferencesURL;
+ (void)loadStateWithCompletion:(id /* block */)arg0;

@end
