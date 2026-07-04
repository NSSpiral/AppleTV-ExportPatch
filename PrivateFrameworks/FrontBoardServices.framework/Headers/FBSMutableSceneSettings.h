/* Runtime dump - FBSMutableSceneSettings
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSMutableSceneSettings : FBSSceneSettings

@property (nonatomic) struct CGRect frame;
@property (nonatomic) float level;
@property (nonatomic) int interfaceOrientation;
@property (nonatomic) char backgrounded;
@property (nonatomic) struct CGPoint contentOffset;
@property (copy, nonatomic) NSArray * occlusions;

+ (char)_isMutable;

- (void)setFrame:(struct CGRect)arg0;
- (void)setContentOffset:(struct CGPoint)arg0;
- (FBSMutableSceneSettings *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLevel:(float)arg0;
- (void)setInterfaceOrientation:(int)arg0;
- (void)setBackgrounded:(char)arg0;
- (FBSMutableSceneSettings *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)otherSettings;
- (NSSet *)ignoreOcclusionReasons;
- (void)setOcclusions:(NSArray *)arg0;
- (BSSettings *)transientLocalSettings;

@end
