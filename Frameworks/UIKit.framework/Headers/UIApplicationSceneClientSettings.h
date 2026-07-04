/* Runtime dump - UIApplicationSceneClientSettings
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) int statusBarStyle;
@property (readonly, nonatomic) char statusBarHidden;
@property (readonly, nonatomic) int defaultStatusBarStyle;
@property (readonly, nonatomic) char defaultStatusBarHidden;
@property (readonly, copy, nonatomic) NSString * defaultPNGName;
@property (readonly, nonatomic) double defaultPNGExpirationTime;
@property (readonly, nonatomic) int compatibilityMode;
@property (readonly, nonatomic) char idleTimerDisabled;
@property (readonly, nonatomic) char orientationEnabled;
@property (readonly, nonatomic) unsigned int proximityDetectionModes;
@property (readonly, nonatomic) int controlCenterRevealMode;
@property (readonly, nonatomic) int notificationCenterRevealMode;

- (char)isUISubclass;
- (char)statusBarHidden;
- (int)statusBarStyle;
- (unsigned int)proximityDetectionModes;
- (int)compatibilityMode;
- (NSString *)defaultPNGName;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (UIApplicationSceneClientSettings *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSString *)valueDescriptionForFlag:(int)arg0 object:(NSObject *)arg1 ofSetting:(unsigned int)arg2;
- (int)defaultStatusBarStyle;
- (char)defaultStatusBarHidden;
- (double)defaultPNGExpirationTime;
- (char)idleTimerDisabled;
- (char)orientationEnabled;
- (int)controlCenterRevealMode;
- (int)notificationCenterRevealMode;

@end
