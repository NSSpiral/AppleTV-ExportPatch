/* Runtime dump - UIApplicationSceneSettings
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationSceneSettings : FBSSceneSettings <UIApplicationSceneSettings>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char underLock;
@property (readonly, nonatomic) int statusBarStyleOverridesToSuppress;

- (char)isUISubclass;
- (char)underLock;
- (int)statusBarStyleOverridesToSuppress;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (UIApplicationSceneSettings *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSString *)valueDescriptionForFlag:(int)arg0 object:(NSObject *)arg1 ofSetting:(unsigned int)arg2;

@end
