/* Runtime dump - PSBrightnessSettingsDetail
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)setValue:(float)arg0;
+ (UIImage *)iconImage;
+ (NSURL *)preferencesURL;
+ (float)incrementedBrightnessValue:(float)arg0;
+ (void)incrementBrightnessValue:(float)arg0;
+ (void)beginBrightnessAdjustmentTransaction;
+ (void)endBrightnessAdjustmentTransaction;
+ (void)beginObservingExternalBrightnessChanges:(id)arg0 changedAction:(/* block */ id)arg1;
+ (void)endObservingExternalBrightnessChanges;
+ (char)deviceSupportsAutoBrightness;
+ (void)setAutoBrightnessEnabled:(char)arg0;
+ (char)autoBrightnessEnabled;
+ (float)currentValue;

@end
