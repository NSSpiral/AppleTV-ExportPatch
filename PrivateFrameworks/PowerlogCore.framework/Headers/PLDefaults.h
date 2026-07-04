/* Runtime dump - PLDefaults
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLDefaults : NSObject
{
    char _debugEnabled;
    NSMutableDictionary * _managedPrefsCache;
    NSMutableDictionary * _instancePrefsCache;
    NSMutableDictionary * _userPrefsCache;
}

@property char debugEnabled;
@property (retain) NSMutableDictionary * managedPrefsCache;
@property (retain) NSMutableDictionary * instancePrefsCache;
@property (retain) NSMutableDictionary * userPrefsCache;

+ (long)longForKey:(NSString *)arg0;
+ (char)boolForKey:(NSString *)arg0;
+ (NSString *)objectForKey:(NSString *)arg0;
+ (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
+ (double)doubleForKey:(NSString *)arg0;
+ (char)debugEnabled;
+ (PLDefaults *)sharedDefaults;
+ (void)resetUserDefaultCacheForKey:(NSString *)arg0;
+ (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1 forApplicationID:(NSObject *)arg2 saveToDisk:(char)arg3;
+ (double)doubleForKey:(NSString *)arg0 ifNotSet:(double)arg1;
+ (char)isClassNameDebugEnabled:(id)arg0;
+ (void)resetUserDefaultCacheForKey:(NSString *)arg0 forApplicationID:(NSObject *)arg1;
+ (char)objectExistsForKey:(NSString *)arg0;
+ (char)isClassNameDebugEnabled:(id)arg0 forKey:(NSString *)arg1;
+ (void)setClassName:(NSString *)arg0 debugEnabled:(char)arg1;
+ (void)setClassName:(NSString *)arg0 debugEnabled:(char)arg1 forKey:(NSString *)arg2;
+ (NSString *)objectForKey:(NSString *)arg0 synchronize:(char)arg1;
+ (char)fullModeForClass:(Class)arg0;
+ (void)setClass:(Class)arg0 debugEnabled:(char)arg1;
+ (void)setClass:(Class)arg0 debugEnabled:(char)arg1 forKey:(NSString *)arg2;
+ (char)isClassDebugEnabled:(Class)arg0;
+ (char)fullPLLog;
+ (char)fullMode;
+ (char)isClassDebugEnabled:(Class)arg0 forKey:(NSString *)arg1;
+ (long)longForKey:(NSString *)arg0 ifNotSet:(long)arg1;
+ (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1 saveToDisk:(char)arg2;
+ (NSString *)objectForKey:(NSString *)arg0 forApplicationID:(NSObject *)arg1 synchronize:(char)arg2;
+ (char)boolForKey:(NSString *)arg0 ifNotSet:(char)arg1;

- (PLDefaults *)init;
- (void).cxx_destruct;
- (char)debugEnabled;
- (void)setDebugEnabled:(char)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1 forApplicationID:(NSObject *)arg2 saveToDisk:(char)arg3;
- (void)resetUserDefaultCacheForKey:(NSString *)arg0 forApplicationID:(NSObject *)arg1;
- (NSString *)managedPrefsObjectForKey:(NSString *)arg0 forApplicationID:(NSObject *)arg1 synchronize:(char)arg2;
- (NSString *)userDefaultsObjectForKey:(NSString *)arg0 forApplicationID:(NSObject *)arg1 synchronize:(char)arg2;
- (NSString *)instancePrefsObjectForKey:(NSString *)arg0;
- (void)setManagedPrefsCache:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)managedPrefsCache;
- (NSMutableDictionary *)userPrefsCache;
- (NSMutableDictionary *)instancePrefsCache;
- (void)setInstancePrefsCache:(NSMutableDictionary *)arg0;
- (void)setUserPrefsCache:(NSMutableDictionary *)arg0;
- (NSString *)objectForKey:(NSString *)arg0 forApplicationID:(NSObject *)arg1 synchronize:(char)arg2;

@end
