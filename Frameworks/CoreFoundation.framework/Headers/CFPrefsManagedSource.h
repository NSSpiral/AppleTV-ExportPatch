/* Runtime dump - CFPrefsManagedSource
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsManagedSource : CFPrefsPlistSource

+ (void)withSourceForIdentifier:(struct __CFString *)arg0 user:(struct __CFString *)arg1 perform:(id)arg2;

- (char)managed;
- (long)sendMessageSettingValue:(void *)arg0 forKey:(struct __CFString *)arg1;
- (void)alreadylocked_setValue:(void *)arg0 forKey:(struct __CFString *)arg1;
- (CFPrefsManagedSource *)initWithDomain:(struct __CFString *)arg0 user:(struct __CFString *)arg1 byHost:(char)arg2;

@end
