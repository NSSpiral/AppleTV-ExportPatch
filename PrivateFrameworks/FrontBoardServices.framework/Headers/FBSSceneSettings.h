/* Runtime dump - FBSSceneSettings
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSettings : NSObject <NSCopying, NSMutableCopying>
{
    struct CGRect _frame;
    struct CGPoint _contentOffset;
    float _level;
    int _interfaceOrientation;
    char _backgrounded;
    char _occluded;
    char _occludedHasBeenCalculated;
    NSSet * _ignoreOcclusionReasons;
    NSArray * _occlusions;
    BSSettings * _otherSettings;
    BSSettings * _transientLocalSettings;
}

@property (readonly, nonatomic) struct CGRect frame;
@property (readonly, nonatomic) float level;
@property (readonly, nonatomic) int interfaceOrientation;
@property (readonly, nonatomic) char backgrounded;
@property (readonly, copy, nonatomic) NSArray * occlusions;
@property (readonly, nonatomic) struct CGPoint contentOffset;

+ (NSDictionary *)settings;
+ (char)_isMutable;

- (char)isUISubclass;
- (void)dealloc;
- (struct CGRect)bounds;
- (FBSSceneSettings *)init;
- (struct CGRect)frame;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)interfaceOrientation;
- (struct CGPoint)contentOffset;
- (char)isBackgrounded;
- (FBSSceneSettings *)copyWithZone:(struct _NSZone *)arg0;
- (float)level;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (FBSSceneSettings *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSString *)valueDescriptionForFlag:(int)arg0 object:(NSObject *)arg1 ofSetting:(unsigned int)arg2;
- (FBSSceneSettings *)initWithSettings:(NSDictionary *)arg0;
- (BSSettings *)otherSettings;
- (NSSet *)ignoreOcclusionReasons;
- (NSArray *)occlusions;
- (char)isOccluded;
- (char)isIgnoringOcclusions;
- (NSString *)_descriptionOfSettingsWithMultilinePrefix:(NSString *)arg0;
- (BSSettings *)transientLocalSettings;

@end
