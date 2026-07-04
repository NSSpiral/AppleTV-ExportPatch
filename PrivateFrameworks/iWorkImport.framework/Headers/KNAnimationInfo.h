/* Runtime dump - KNAnimationInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationInfo : NSObject
{
    Class mAnimationClass;
    NSSet * mValidAnimationTypes;
}

@property (readonly, nonatomic) NSString * effectIdentifier;
@property (readonly, nonatomic) char isDrift;
@property (readonly, nonatomic) NSDictionary * defaultAttributes;
@property (readonly, nonatomic) NSString * animationFilter;
@property (readonly, nonatomic) Class animationClass;
@property (readonly, nonatomic) NSSet * validAnimationTypes;
@property (readonly, nonatomic) int category;
@property (readonly, nonatomic) unsigned int directionType;
@property (readonly, nonatomic) NSArray * customAttributes;
@property (readonly, nonatomic) NSDictionary * customAttributeDefaults;
@property (readonly, nonatomic) NSString * localizedBuildInName;
@property (readonly, nonatomic) NSString * localizedBuildOutName;
@property (readonly, nonatomic) NSString * localizedActionBuildName;
@property (readonly, nonatomic) NSString * localizedTransitionName;

+ (KNAnimationInfo *)effectIdentifiersForAnimationInfos:(id)arg0;
+ (KNAnimationInfo *)localizedEffectNamesForAnimationInfos:(id)arg0 animationType:(int)arg1;

- (NSString *)animationFilter;
- (unsigned int)directionType;
- (NSObject *)thumbnailImageNameForType:(int)arg0;
- (NSDictionary *)customEffectTimingCurveDisplayParametersForAttributes:(NSDictionary *)arg0 layoutStyleOnly:(char)arg1;
- (NSString *)effectIdentifier;
- (Class)animationClass;
- (NSString *)customAttributesForAttributeKey:(NSString *)arg0;
- (KNAnimationInfo *)initWithAnimationClass:(Class)arg0;
- (NSObject *)localizedNameForType:(int)arg0;
- (char)isDrift;
- (char)supportsAnimationType:(int)arg0;
- (NSDictionary *)customAttributeDefaults;
- (NSString *)localizedBuildInName;
- (NSString *)localizedBuildOutName;
- (NSString *)localizedActionBuildName;
- (NSString *)localizedTransitionName;
- (NSSet *)validAnimationTypes;
- (NSArray *)customAttributes;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)category;
- (NSDictionary *)defaultAttributes;

@end
