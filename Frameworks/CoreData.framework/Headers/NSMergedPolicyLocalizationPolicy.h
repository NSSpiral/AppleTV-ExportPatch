/* Runtime dump - NSMergedPolicyLocalizationPolicy
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy
{
    NSSet * _mergedPolicies;
}

- (void)addPolicy:(NSObject *)arg0;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (NSString *)_localizedStringForKey:(NSString *)arg0 value:(void *)arg1;
- (void)dealloc;
- (NSMergedPolicyLocalizationPolicy *)init;
- (NSMergedPolicyLocalizationPolicy *)copyWithZone:(struct _NSZone *)arg0;

@end
