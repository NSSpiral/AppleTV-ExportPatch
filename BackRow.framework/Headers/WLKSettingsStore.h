/* Runtime dump - WLKSettingsStore
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKSettingsStore : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _readWriteQueue;
    char _privateModeEnabled;
    char _sportsScoreSpoilersAllowed;
    NSString * _pushToken;
    NSString * _accountID;
    NSNumber * _optedInVal;
    char _optedIn;
    char _migratediOS;
    char _migratedtvOS;
    int _didChangeNotificationToken;
    char _hasOutstandingChanges;
    NSDate * _lastSyncDate;
    NSDate * _lastSyncToCloudDate;
    int _ignoreChangesCount;
}

@property (nonatomic) char privateModeEnabled;
@property (nonatomic) char sportsScoreSpoilersAllowed;
@property (nonatomic) char optedIn;
@property (copy, nonatomic) NSNumber * optedInVal;
@property (nonatomic) char migratediOS;
@property (nonatomic) char migratedtvOS;
@property (copy, nonatomic) NSString * pushToken;
@property (readonly, copy, nonatomic) NSDate * lastSyncDate;
@property (readonly, copy, nonatomic) NSDate * lastSyncToCloudDate;
@property int ignoreChangesCount;
@property char hasOutstandingChanges;

+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;
+ (WLKSettingsStore *)sharedSettings;

- (void)_readFromDisk;
- (id)_dictionaryRepresentationDataOnly;
- (void)_writeToDisk;
- (int)ignoreChangesCount;
- (id)_dictionaryOnDisk;
- (NSString *)_supportPath;
- (void)setHasOutstandingChanges:(char)arg0;
- (void)_writeToDisk:(id)arg0 completion:(id /* block */)arg1;
- (void)_dictionaryOnDisk:(id)arg0;
- (void)synchronize:(unsigned int)arg0 completion:(id /* block */)arg1;
- (void)setIgnoreChangesCount:(int)arg0;
- (char)hasOutstandingChanges;
- (void)setPrivateModeEnabled:(char)arg0;
- (char)privateModeEnabled;
- (void)setSportsScoreSpoilersAllowed:(char)arg0;
- (char)sportsScoreSpoilersAllowed;
- (void)setOptedIn:(char)arg0;
- (NSNumber *)optedInVal;
- (void)setMigratediOS:(char)arg0;
- (char)migratediOS;
- (void)setMigratedtvOS:(char)arg0;
- (char)migratedtvOS;
- (void)setLastSyncToCloudDate:(NSDate *)arg0;
- (void)beginIgnoringChanges;
- (void)endIgnoringChanges;
- (void)setOptedInVal:(NSNumber *)arg0;
- (NSDate *)lastSyncToCloudDate;
- (void)refresh;
- (NSDictionary *)_dictionaryRepresentation;
- (void)_accountStoreChangedNotification:(NSNotification *)arg0;
- (void)dealloc;
- (WLKSettingsStore *)init;
- (NSString *)description;
- (char)optedIn;
- (void).cxx_destruct;
- (char)synchronize:(unsigned int)arg0;
- (void)setLastSyncDate:(NSDate *)arg0;
- (NSDate *)lastSyncDate;
- (void)setPushToken:(NSString *)arg0;
- (NSString *)pushToken;

@end
