/* Runtime dump - AWDLogger
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface AWDLogger : CHLogger
{
    AWDServerConnection * _awdServer;
}

@property (retain, nonatomic) AWDServerConnection * awdServer;

+ (AWDLogger *)instance;

- (AWDLogger *)init;
- (void).cxx_destruct;
- (void)submitMetric:(NSObject *)arg0 withId:(unsigned int)arg1;
- (void)commCenterMigrationResult:(char)arg0 withMigratedCallCount:(unsigned int)arg1;
- (void)databaseMigrationResult:(char)arg0 oldVersion:(int)arg1 newVersion:(int)arg2;
- (void)databaseSaveError:(int)arg0 withTableName:(NSString *)arg1;
- (void)deleteAll:(unsigned int)arg0;
- (void)callAddedWithNilUuid:(unsigned int)arg0 withCallStatus:(unsigned int)arg1;
- (void)entitlementRejection:(int)arg0;
- (void)syncSuccess:(unsigned int)arg0 withDownloadRecordCount:(unsigned int)arg1;
- (void)syncFailure:(unsigned int)arg0;
- (AWDServerConnection *)awdServer;
- (void)setAwdServer:(AWDServerConnection *)arg0;

@end
