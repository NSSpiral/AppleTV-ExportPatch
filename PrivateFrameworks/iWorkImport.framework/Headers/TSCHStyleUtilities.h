/* Runtime dump - TSCHStyleUtilities
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleUtilities : NSObject

+ (char)hasShadow:(char)arg0;
+ (char)hasNoFill:(id)arg0;
+ (char)isNullFill:(OADNullFill *)arg0;
+ (char)upgradeShadowProperties:(NSDictionary *)arg0 inMap:(NSObject *)arg1;
+ (NSObject *)fullyPopulatedStyleFromStyle:(NSObject *)arg0 context:(NSObject *)arg1;
+ (TSCHStyleUtilities *)nullShadow;
+ (char)p_hasShadow:(TSDMutableDropShadow *)arg0;
+ (char)upgradedShadowPropertyFromShadow:(id)arg0 outUpgraded:(id *)arg1;
+ (void)updateStyleState:(NSObject *)arg0 forMutationsPerStyleOwner:(NSObject *)arg1;
+ (NSArray *)fullyPopulatedStylesFromArray:(NSArray *)arg0 context:(NSObject *)arg1 styleClass:(Class)arg2;
+ (NSObject *)upgradedShadowPropertyForParagraphStyle:(NSObject *)arg0;
+ (TSCHStyleUtilities *)shadowToChartsNullShadow:(id)arg0;
+ (TSCHStyleUtilities *)chartsNullShadowToDefaultDisabledShadow:(id)arg0;
+ (void)updateStyleState:(NSObject *)arg0 forPropertyMutationTuples:(id)arg1;
+ (void)upgradeAlignmentInParagraphStyles:(id)arg0 willModifyBlock:(id /* block */)arg1;
+ (void)convertToSimpleTSDFillsInProperties:(NSDictionary *)arg0 inMap:(NSObject *)arg1 context:(NSObject *)arg2;
+ (TSCHStyleUtilities *)nullFill;

@end
