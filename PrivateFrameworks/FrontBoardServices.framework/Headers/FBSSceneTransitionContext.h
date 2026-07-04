/* Runtime dump - FBSSceneTransitionContext
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneTransitionContext : NSObject <NSCopying, NSMutableCopying>
{
    BSAnimationSettings * _animationSettings;
    BSMachSendRight * _animationFencePort;
    NSSet * _actions;
    BSMutableSettings * _otherSettings;
    BSMutableSettings * _transientLocalClientSettings;
}

@property (copy, nonatomic) BSAnimationSettings * animationSettings;
@property (copy, nonatomic) BSMachSendRight * animationFencePort;
@property (copy, nonatomic) NSSet * actions;

+ (NSString *)transitionContext;

- (char)isUISubclass;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSSet *)actions;
- (BSMachSendRight *)animationFencePort;
- (BSAnimationSettings *)animationSettings;
- (FBSSceneTransitionContext *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (FBSSceneTransitionContext *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSString *)valueDescriptionForFlag:(int)arg0 object:(NSObject *)arg1 ofSetting:(unsigned int)arg2;
- (FBSSceneTransitionContext *)initWithXPCDictionary:(NSDictionary *)arg0;
- (BSMutableSettings *)otherSettings;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (NSString *)_descriptionOfSettingsWithMultilinePrefix:(NSString *)arg0;
- (void)setAnimationSettings:(BSAnimationSettings *)arg0;
- (void)setAnimationFencePort:(BSMachSendRight *)arg0;
- (BSMutableSettings *)transientLocalClientSettings;
- (void)setActions:(NSSet *)arg0;

@end
