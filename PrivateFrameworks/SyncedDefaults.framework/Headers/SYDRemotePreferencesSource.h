/* Runtime dump - SYDRemotePreferencesSource
 * Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

@interface SYDRemotePreferencesSource : NSObject
{
    long _generationCount;
    long _lastGenerationFromDisk;
    struct __CFString * preferenceID;
    struct __CFURL * urlOnDisk;
    struct __CFDictionary * cache;
    long long storageChangeCount;
    long long initialSyncChangeCount;
    unsigned char isInitialSync;
    struct __CFSet * dirtyKeys;
    struct __CFDictionary * configurationDictionary;
    NSMutableDictionary * externalChanges;
    SYDClient * client;
    id registrationBlock;
    NSObject<OS_dispatch_queue> * registrationQueue;
    NSObject<OS_dispatch_queue> * _protectionQueue;
    NSObject<OS_dispatch_source> * _memoryWarningSource;
    double _lastAccess;
    char _forceNextSynchronization;
}

+ (NSNotification *)SYDRemotePreferencesSourceDidChangeNotification;
+ (NSNotification *)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (void)initialize;
+ (void)noteAccountChanges:(id)arg0;
+ (void)resetAllApplicationsWithCompletionHandler:(id /* block */)arg0;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(NSString *)arg0;

- (struct __CFDictionary *)copyDictionary;
- (struct __CFArray *)copyKeyList;
- (SYDRemotePreferencesSource *)initWithApplicationID:(struct __CFString *)arg0 storeID:(struct __CFString *)arg1 shared:(char)arg2;
- (SYDRemotePreferencesSource *)initWithApplicationID:(struct __CFString *)arg0 storeID:(struct __CFString *)arg1 shared:(char)arg2 additionalSource:(char)arg3;
- (SYDRemotePreferencesSource *)initWithApplicationID:(struct __CFString *)arg0 shared:(char)arg1;
- (void)discardExternalChangesForChangeCount:(long long)arg0;
- (void *)getValueForKey:(struct __CFString *)arg0;
- (unsigned char)synchronizeForced:(unsigned char)arg0;
- (unsigned char)hasExternalChanges;
- (NSNumber *)copyExternalChangesWithChangeCount:(long long *)arg0;
- (void)scheduleRemoteSynchronization;
- (void)synchronizationWithCompletionHandler:(id /* block */)arg0;
- (unsigned char)_synchronizeForced:(unsigned char)arg0;
- (void)updateConfiguration;
- (void)registerForSynchronizedDefaults;
- (void)unregisterForSynchronizedDefaults;
- (long)maximumKeyCount;
- (long)maximumKeyLength;
- (long)maximumDataLengthPerKey;
- (long)maximumTotalDataLength;
- (void)setValue:(void *)arg0 forKey:(struct __CFString *)arg1;
- (void)dealloc;
- (unsigned char)synchronize;
- (long)generationCount;
- (unsigned char)isInitialSync;
- (long)configurationValueForKey:(struct __CFString *)arg0;
- (void)_createMemoryWarningSource;
- (void)_forceRegistrationNow;
- (void)_cachePlistFromDisk;
- (void)_storeConfiguration:(struct __CFDictionary *)arg0;
- (NSObject *)_warningSource;
- (struct __CFDictionary *)copyConfigurationDictionary;
- (NSString *)serverSideDebugDescription;
- (void)_didReceiveMemoryWarning;
- (void)finalize;

@end
