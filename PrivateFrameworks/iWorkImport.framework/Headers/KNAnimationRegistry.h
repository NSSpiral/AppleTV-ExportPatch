/* Runtime dump - KNAnimationRegistry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationRegistry : NSObject
{
    NSDictionary * mClassesForTypeAndName;
    NSDictionary * mClassesForTypeAndCategory;
    NSDictionary * mClassesForTypeAndFilter;
    NSDictionary * mClassesForTypeAndObsoleteName;
    NSDictionary * mAlternateEffectIdentifiersForEffectIdentifierAndFilter;
    NSArray * mAnimationInfos;
}

+ (NSString *)localizedCategoryNameForCategory:(int)arg0;
+ (NSBundle *)animationsInBundle;
+ (NSObject *)categoryNameForPluginClass:(Class)arg0;
+ (NSObject *)localizedNameForUnsupportedAnimation:(NSObject *)arg0;
+ (KNAnimationRegistry *)instance;

- (NSString *)animationInfoForEffectIdentifier:(NSString *)arg0 animationType:(int)arg1 includeObsoleteNames:(char)arg2 drawable:(TSDDrawableInfo *)arg3;
- (NSString *)animationInfoForEffectIdentifier:(NSString *)arg0 animationType:(int)arg1;
- (NSString *)animationInfoForEffectIdentifier:(NSString *)arg0 animationType:(int)arg1 includeObsoleteNames:(char)arg2;
- (NSObject *)animationInfosForAnimationType:(int)arg0 filter:(id /* block */)arg1;
- (NSObject *)p_buildAlternateFilterMap;
- (NSObject *)distinctCategoriesForType:(int)arg0;
- (NSObject *)animationInfosForAnimationType:(int)arg0 category:(NSString *)arg1;
- (id)allAnimationInfos;
- (char)canMapEffectIdentifier:(NSString *)arg0 animationType:(int)arg1 toEffectIdentifier:(NSString *)arg2 includeObsoleteNames:(char)arg3 forDrawable:(GQHPagesFloatingDrawable *)arg4;
- (void)dealloc;
- (KNAnimationRegistry *)init;

@end
