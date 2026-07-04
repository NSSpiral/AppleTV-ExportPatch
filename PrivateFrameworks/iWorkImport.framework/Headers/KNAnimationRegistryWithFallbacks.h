/* Runtime dump - KNAnimationRegistryWithFallbacks
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationRegistryWithFallbacks : NSObject
{
    KNAnimationRegistry * mRegistry;
    NSMutableDictionary * mFallbacks;
}

- (NSString *)animationInfoForEffectIdentifier:(NSString *)arg0 animationType:(int)arg1;
- (void)registerFallbackEffectIdentifer:(id)arg0 forEffectIdentifer:(id)arg1;
- (KNAnimationRegistryWithFallbacks *)init;

@end
