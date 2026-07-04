/* Runtime dump - TLPreferencesUtilities
 * Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLPreferencesUtilities : NSObject

+ (void)migratePerAccountPreferencesInDomain:(struct __CFString *)arg0 withRegularPreferenceKeys:(id *)arg1 regularPreferenceKeysCount:(NSObject *)arg2 intoSinglePerAccountPreferenceWithSuffix:(unsigned long)arg3 usingPreferencesScope:(NSObject *)arg4;
+ (NSArray *)_existingPerAccountPreferenceKeyPrefixesWithRegularPreferenceKeys:(id *)arg0 regularPreferenceKeysCount:(NSObject *)arg1;
+ (void)_setValue:(void *)arg0 forKey:(struct __CFString *)arg1 inDomain:(struct __CFString *)arg2 usingPreferencesScope:(int)arg3;
+ (void)_enumerateKeysAndValuesWithEligibleKeyPrefixes:(id)arg0 inDomain:(struct __CFString *)arg1 usingPreferencesScope:(int)arg2 withBlock:(id /* block */)arg3;
+ (void)_synchronizeDomain:(struct __CFString *)arg0 usingPreferencesScope:(int)arg1;
+ (struct __CFDictionary *)_copyAllKeysAndValuesFromDomain:(struct __CFString *)arg0 usingPreferencesScope:(int)arg1;

@end
