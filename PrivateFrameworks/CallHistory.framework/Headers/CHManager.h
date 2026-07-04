/* Runtime dump - CHManager
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHManager : CHSynchronizedLoggable
{
    char _showsFaceTimeCalls;
    char _showsFaceTimeVideoCalls;
    char _showsFaceTimeAudioCalls;
    char _showsTelephonyCalls;
    char _generateSyncTransactions;
    char _cacheIsDirty;
    char _reCoalesce;
    NSArray * _recentCalls;
    unsigned int _limitingCallTypes;
    NSDate * _limitingStartDate;
    NSDate * _limitingEndDate;
    NSPredicate * _postFetchingPredicate;
    NSString * _coalescingStrategy;
    int _numberOfUnseenMissedCalls;
    <SyncManagerProtocol> * _syncManager;
    NSArray * _uncoalescedRecentCalls;
    NSArray * _uncoalescedUnFilteredRecentCalls;
    int _unreadCallCount;
    id _databaseChangedNotificationRef;
    id _addressBookChangedNotificationRef;
}

@property (retain, nonatomic) NSArray * recentCalls;
@property (nonatomic) char showsFaceTimeCalls;
@property (nonatomic) char showsFaceTimeVideoCalls;
@property (nonatomic) char showsFaceTimeAudioCalls;
@property (nonatomic) char showsTelephonyCalls;
@property char generateSyncTransactions;
@property (nonatomic) unsigned int limitingCallTypes;
@property (copy, nonatomic) NSDate * limitingStartDate;
@property (copy, nonatomic) NSDate * limitingEndDate;
@property (copy, nonatomic) NSPredicate * postFetchingPredicate;
@property (copy, nonatomic) NSString * coalescingStrategy;
@property int numberOfUnseenMissedCalls;
@property (retain) <SyncManagerProtocol> * syncManager;
@property char cacheIsDirty;
@property char reCoalesce;
@property (retain, nonatomic) NSArray * uncoalescedRecentCalls;
@property (retain) NSArray * uncoalescedUnFilteredRecentCalls;
@property int unreadCallCount;
@property (retain) id databaseChangedNotificationRef;
@property (retain) id addressBookChangedNotificationRef;

+ (unsigned int)CHCallStatusForCallWithDuration:(double)arg0 isOriginated:(char)arg1 isAnswered:(char)arg2;

- (void)dealloc;
- (CHManager *)init;
- (void)flush;
- (void).cxx_destruct;
- (void)unRegisterForNotifications;
- (void)databaseChanged:(NSNotification *)arg0;
- (void)setDatabaseChangedNotificationRef:(id)arg0;
- (void)addressBookChanged:(NSNotification *)arg0;
- (void)setAddressBookChangedNotificationRef:(id)arg0;
- (id)databaseChangedNotificationRef;
- (id)addressBookChangedNotificationRef;
- (void)setCacheIsDirty:(char)arg0;
- (void)setReCoalesce:(char)arg0;
- (id)fetchRecentCallsSyncWithCoalescing:(BOOL)arg0;
- (NSString *)coalescingStrategy;
- (id)unCoalesceCall:(id)arg0;
- (id)coalesceCalls:(id)arg0;
- (NSPredicate *)applyPredicate:(NSPredicate *)arg0 toCalls:(id)arg1;
- (char)cacheIsDirty;
- (unsigned int)limitingCallTypes;
- (NSDate *)limitingStartDate;
- (NSDate *)limitingEndDate;
- (void)setUnreadCallCount:(int)arg0;
- (NSPredicate *)postFetchingPredicate;
- (void)setUncoalescedUnFilteredRecentCalls:(NSArray *)arg0;
- (char)reCoalesce;
- (NSArray *)uncoalescedUnFilteredRecentCalls;
- (id)uncoalescedRecentCallsSync;
- (unsigned int)countCallsWithPredicateSync:(id)arg0;
- (int)unreadCallCount;
- (char)generateSyncTransactions;
- (void)deleteTheseCallsSync:(id)arg0;
- (void)deleteAllCallsSync;
- (void)deleteCall:(id)arg0;
- (void)setLimitingCallTypesSync:(unsigned int)arg0;
- (CHManager *)initWithFetchingLimitsDictionary:(NSDictionary *)arg0 andCoalescingStrategy:(NSObject *)arg1 andPostFetchingPredicate:(NSPredicate *)arg2 withQueue:(NSObject *)arg3;
- (NSArray *)recentCalls;
- (unsigned int)countCallsWithPredicate:(NSPredicate *)arg0;
- (unsigned int)fetchUnreadCallsCount;
- (void)addToCallHistory:(NSArray *)arg0;
- (void)updateBytesOfDataUsedFor:(id)arg0 with:(id)arg1;
- (void)deleteTheseCalls:(id)arg0;
- (void)deleteCallsWithPredicate:(NSPredicate *)arg0;
- (void)deleteCallAtIndex:(unsigned int)arg0;
- (void)deleteAllCalls;
- (void)setLimitingCallTypes:(unsigned int)arg0;
- (void)setPostFetchingPredicate:(NSPredicate *)arg0;
- (void)setLimitingStartDate:(NSDate *)arg0;
- (void)setLimitingEndDate:(NSDate *)arg0;
- (void)setCoalescingStrategy:(NSString *)arg0;
- (void)setShowsFaceTimeCalls:(char)arg0;
- (void)setShowsFaceTimeVideoCalls:(char)arg0;
- (void)setShowsFaceTimeAudioCalls:(char)arg0;
- (void)setShowsTelephonyCalls:(char)arg0;
- (double)callTimersGetIncoming;
- (double)callTimersGetOutgoing;
- (double)callTimersGetLifetime;
- (void)callTimersReset;
- (void)addMultipleCallsToCallHistory:(NSArray *)arg0;
- (void)setRecentCalls:(NSArray *)arg0;
- (char)showsFaceTimeCalls;
- (char)showsFaceTimeVideoCalls;
- (char)showsFaceTimeAudioCalls;
- (char)showsTelephonyCalls;
- (void)setGenerateSyncTransactions:(char)arg0;
- (int)numberOfUnseenMissedCalls;
- (void)setNumberOfUnseenMissedCalls:(int)arg0;
- (void)setSyncManager:(<SyncManagerProtocol> *)arg0;
- (void)setUncoalescedRecentCalls:(NSArray *)arg0;
- (<SyncManagerProtocol> *)syncManager;
- (void)registerForNotifications;
- (NSPredicate *)recentCallsWithPredicate:(NSPredicate *)arg0;
- (void)markAllCallsAsReadWithPredicate:(NSPredicate *)arg0;

@end
