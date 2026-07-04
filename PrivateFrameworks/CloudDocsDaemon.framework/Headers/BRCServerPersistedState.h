/* Runtime dump - BRCServerPersistedState
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCServerPersistedState : NSObject <NSSecureCoding, NSCopying, PQLBindable>
{
    NSMutableDictionary * _pendingMigrations;
    BRCServerChangeState * _sharedDatabaseChangeState;
    long long _nextRank;
}

@property (nonatomic) long long nextRank;
@property (retain) BRCServerChangeState * sharedDatabaseChangeState;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (BRCServerPersistedState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (BRCServerPersistedState *)init;
- (NSString *)description;
- (BRCServerPersistedState *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)saveToDB:(id)arg0;
- (void)initiateMigrationQueryForContainerIDs:(id)arg0 key:(NSString *)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1;
- (BRCServerChangeState *)sharedDatabaseChangeState;
- (long long)nextRank;
- (void)setNextRank:(long long)arg0;
- (NSObject *)migrationQueryKeyForContainerID:(NSObject *)arg0 continuationCursor:(id *)arg1;
- (NSObject *)dumpMigrationQueriesForContainerID:(NSObject *)arg0;
- (void)migrationQueryForContainerID:(NSObject *)arg0 key:(NSString *)arg1 didCompleteWithContinuationCursor:(CKQueryCursor *)arg2;
- (char)containerIDIsPendingMigration:(id)arg0;
- (BRCServerPersistedState *)initWithState:(NSObject *)arg0;
- (void)setSharedDatabaseChangeState:(BRCServerChangeState *)arg0;

@end
