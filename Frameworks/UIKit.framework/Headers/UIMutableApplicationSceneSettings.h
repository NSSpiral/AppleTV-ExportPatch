/* Runtime dump - UIMutableApplicationSceneSettings
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings>

@property (nonatomic) char underLock;
@property (nonatomic) int statusBarStyleOverridesToSuppress;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)isUISubclass;
- (char)underLock;
- (int)statusBarStyleOverridesToSuppress;
- (UIMutableApplicationSceneSettings *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (NSString *)valueDescriptionForFlag:(int)arg0 object:(NSObject *)arg1 ofSetting:(unsigned int)arg2;
- (void)setUnderLock:(char)arg0;
- (void)setStatusBarStyleOverridesToSuppress:(int)arg0;

@end
