/* Runtime dump - FBSSceneClientSettings
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneClientSettings : NSObject <NSCopying, NSMutableCopying>
{
    float _preferredLevel;
    int _preferredInterfaceOrientation;
    NSSet * _occlusions;
    BSSettings * _otherSettings;
}

@property (readonly, nonatomic) float preferredLevel;
@property (readonly, nonatomic) int preferredInterfaceOrientation;
@property (readonly, copy, nonatomic) NSSet * occlusions;

+ (NSDictionary *)settings;
+ (char)_isMutable;

- (char)isUISubclass;
- (void)dealloc;
- (FBSSceneClientSettings *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (FBSSceneClientSettings *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (FBSSceneClientSettings *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSString *)valueDescriptionForFlag:(int)arg0 object:(NSObject *)arg1 ofSetting:(unsigned int)arg2;
- (FBSSceneClientSettings *)initWithSettings:(NSDictionary *)arg0;
- (BSSettings *)otherSettings;
- (NSSet *)occlusions;
- (NSString *)_descriptionOfSettingsWithMultilinePrefix:(NSString *)arg0;
- (float)preferredLevel;
- (int)preferredInterfaceOrientation;

@end
