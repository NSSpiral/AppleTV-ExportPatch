/* Runtime dump - ATVPreferences
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVPreferences : NSObject
{
    NSString * _domain;
}

@property (copy, nonatomic) NSString * domain;

+ (ATVPreferences *)preferencesWithDomain:(NSString *)arg0;
+ (ATVPreferences *)sharedAppleTVServicesPreferences;
+ (NSString *)addObserverForDomain:(NSString *)arg0 withDistributedSynchronizationHandler:(id /* block */)arg1;
+ (void)synchronizeAllDomains;

- (ATVPreferences *)initWithDomain:(NSString *)arg0;
- (char)setFloat:(float)arg0 forKey:(NSString *)arg1;
- (char)setDouble:(double)arg0 forKey:(NSString *)arg1;
- (char)setInteger:(int)arg0 forKey:(NSString *)arg1;
- (char)boolForKey:(NSString *)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (char)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (float)floatForKey:(NSString *)arg0;
- (char)synchronize;
- (NSString *)domain;
- (NSString *)stringForKey:(NSString *)arg0;
- (char)setBool:(char)arg0 forKey:(NSString *)arg1;
- (double)doubleForKey:(NSString *)arg0;
- (int)integerForKey:(NSString *)arg0;
- (void).cxx_destruct;
- (double)doubleForKey:(NSString *)arg0 defaultValue:(double)arg1;
- (float)floatForKey:(NSString *)arg0 defaultValue:(float)arg1;
- (void)setDomain:(NSString *)arg0;
- (char)boolForKey:(NSString *)arg0 defaultValue:(char)arg1;
- (int)integerForKey:(NSString *)arg0 defaultValue:(int)arg1;

@end
