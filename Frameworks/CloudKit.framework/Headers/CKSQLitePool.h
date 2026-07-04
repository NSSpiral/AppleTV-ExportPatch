/* Runtime dump - CKSQLitePool
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLitePool : NSObject
{
    char _drainScheduled;
    id _factory;
    NSMutableArray * _dbs;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy, nonatomic) id factory;
@property (retain, nonatomic) NSMutableArray * dbs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (nonatomic) char drainScheduled;

- (NSMutableArray *)dbs;
- (NSError *)_openDatabaseWithError:(id *)arg0;
- (NSError *)_acquireDatabaseWithError:(id *)arg0;
- (void)_scheduleDrain;
- (void)_closeDatabase:(id)arg0;
- (void)performWithDatabase:(id)arg0;
- (ATVMusicStoreRadioLinkControlFactory *)factory;
- (void)setDbs:(NSMutableArray *)arg0;
- (char)drainScheduled;
- (void)setDrainScheduled:(char)arg0;
- (void).cxx_destruct;
- (void)_drain;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (id)acquireDatabase:(char)arg0;
- (void)releaseDatabase:(id)arg0;
- (CKSQLitePool *)initWithFactory:(NSObject *)arg0;
- (void)closeAll;
- (char)performWithDatabase:(id)arg0 error:(/* block */ id)arg1;

@end
