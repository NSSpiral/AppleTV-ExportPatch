/* Runtime dump - SBKPreferences
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKPreferences : NSObject

+ (SBKPreferences *)storeBookkeeperPreferences;

- (char)boolForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (SBKPreferences *)init;
- (void)setBool:(char)arg0 forKey:(NSString *)arg1;
- (NSString *)objectForKey:(NSString *)arg0 withDefaultValue:(NSString *)arg1;
- (void)registerDefaultsIfKeyNotSet:(NSSet *)arg0 registrationBlock:(id /* block */)arg1;
- (void)_preferencesDidChange;

@end
