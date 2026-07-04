/* Runtime dump - FBSMutableSceneClientSettings
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings

@property (nonatomic) float preferredLevel;
@property (nonatomic) int preferredInterfaceOrientation;
@property (copy, nonatomic) NSSet * occlusions;

+ (char)_isMutable;

- (FBSMutableSceneClientSettings *)copyWithZone:(struct _NSZone *)arg0;
- (FBSMutableSceneClientSettings *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)otherSettings;
- (void)setOcclusions:(NSSet *)arg0;
- (void)setPreferredLevel:(float)arg0;
- (void)setPreferredInterfaceOrientation:(int)arg0;

@end
