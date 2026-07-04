/* Runtime dump - ATVPreferenceManager
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVPreferenceManager : NSObject
{
    NSLock * _preferencesLock;
    NSTimer * _prefsSyncTimer;
    NSMutableSet * _notificationDomains;
    NSMutableSet * _dirtyDomains;
    NSCountedSet * _pendingNotifcations;
}

+ (ATVPreferenceManager *)sharedInstance;

- (ATVPreferenceManager *)init;
- (void).cxx_destruct;
- (NSString *)_valueForKey:(NSString *)arg0 forDomain:(NSString *)arg1;
- (NSString *)objectForKey:(NSString *)arg0 forDomain:(NSString *)arg1;
- (char)canSetPreferencesForKey:(NSString *)arg0 forDomain:(NSString *)arg1;
- (void)_setValue:(NSValue *)arg0 forKey:(NSString *)arg1 forDomain:(NSString *)arg2;
- (void)_handleDistributedSyncForDomain:(NSString *)arg0 notificationKey:(NSString *)arg1;
- (void)_postPrefsDidChangeForDomains:(id)arg0;
- (void)_syncDomains:(id)arg0;
- (void)syncAllDomains;
- (void)_markPreferencesDirtyForDomain:(NSString *)arg0;
- (void)_flushPreferences:(id)arg0;
- (void)syncAllDomainsAndFlushToDisk;
- (char)syncDomain:(NSString *)arg0;
- (int)integerForKey:(NSString *)arg0 forDomain:(NSString *)arg1 defaultValue:(int)arg2;
- (float)floatForKey:(NSString *)arg0 forDomain:(NSString *)arg1 defaultValue:(float)arg2;
- (double)doubleForKey:(NSString *)arg0 forDomain:(NSString *)arg1 defaultValue:(double)arg2;
- (char)boolForKey:(NSString *)arg0 forDomain:(NSString *)arg1 defaultValue:(char)arg2;
- (NSString *)stringForKey:(NSString *)arg0 forDomain:(NSString *)arg1;
- (NSString *)descriptionForKey:(NSString *)arg0 forDomain:(NSString *)arg1;
- (char)setInteger:(int)arg0 forKey:(NSString *)arg1 forDomain:(NSString *)arg2;
- (char)setFloat:(float)arg0 forKey:(NSString *)arg1 forDomain:(NSString *)arg2;
- (char)setDouble:(double)arg0 forKey:(NSString *)arg1 forDomain:(NSString *)arg2;
- (char)setBool:(char)arg0 forKey:(NSString *)arg1 forDomain:(NSString *)arg2;
- (char)setObject:(NSObject *)arg0 forKey:(NSString *)arg1 forDomain:(NSString *)arg2;
- (void)enableDistributedSyncForDomain:(NSString *)arg0;

@end
