/* Runtime dump - BRCMigrationQueryOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCMigrationQueryOperation : BRCSyncDownOperation
{
    NSString * _migrationKey;
    CKQueryCursor * _continuationCursor;
    NSMutableArray * _recordsWithShareID;
}

+ (NSString *)shareIDsMigrationKey;
+ (BRCMigrationQueryOperation *)allMigrationKeysOrdered;

- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (char)shouldRetryForError:(NSError *)arg0;
- (BRCMigrationQueryOperation *)initWithServerZone:(NSObject *)arg0 migrationKey:(NSString *)arg1 continuationCursor:(CKQueryCursor *)arg2;
- (char)hasCaughtUp;
- (char)isConsistent;
- (void)_performAfterQueryingForShareIDs:(id)arg0;

@end
