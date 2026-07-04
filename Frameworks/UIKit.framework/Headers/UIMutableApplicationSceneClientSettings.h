/* Runtime dump - UIMutableApplicationSceneClientSettings
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings <UIApplicationSceneClientSettings>

@property (nonatomic) int statusBarStyle;
@property (nonatomic) char statusBarHidden;
@property (nonatomic) int defaultStatusBarStyle;
@property (nonatomic) char defaultStatusBarHidden;
@property (copy, nonatomic) NSString * defaultPNGName;
@property (nonatomic) double defaultPNGExpirationTime;
@property (nonatomic) int compatibilityMode;
@property (nonatomic) char idleTimerDisabled;
@property (nonatomic) char orientationEnabled;
@property (nonatomic) unsigned int proximityDetectionModes;
@property (nonatomic) int controlCenterRevealMode;
@property (nonatomic) int notificationCenterRevealMode;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setIdleTimerDisabled:(char)arg0;
- (char)isUISubclass;
- (char)statusBarHidden;
- (int)statusBarStyle;
- (void)setStatusBarStyle:(int)arg0;
- (void)setStatusBarHidden:(char)arg0;
- (void)setDefaultStatusBarStyle:(int)arg0;
- (void)setDefaultStatusBarHidden:(char)arg0;
- (void)setDefaultPNGName:(NSString *)arg0;
- (void)setDefaultPNGExpirationTime:(double)arg0;
- (void)setCompatibilityMode:(int)arg0;
- (unsigned int)proximityDetectionModes;
- (void)setProximityDetectionModes:(unsigned int)arg0;
- (int)compatibilityMode;
- (UIMutableApplicationSceneClientSettings *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)defaultPNGName;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (void)setOrientationEnabled:(char)arg0;
- (NSString *)valueDescriptionForFlag:(int)arg0 object:(NSObject *)arg1 ofSetting:(unsigned int)arg2;
- (int)defaultStatusBarStyle;
- (char)defaultStatusBarHidden;
- (double)defaultPNGExpirationTime;
- (char)idleTimerDisabled;
- (char)orientationEnabled;
- (int)controlCenterRevealMode;
- (int)notificationCenterRevealMode;
- (void)setControlCenterRevealMode:(int)arg0;
- (void)setNotificationCenterRevealMode:(int)arg0;

@end
