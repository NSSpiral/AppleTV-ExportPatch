/* Runtime dump - PLArchiver
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLArchiver : NSObject
{
    char _enabled;
    PLStorageOperator * _storageOperator;
    PLSQLiteConnection * _connection;
    NSDate * _lastArchiveDate;
    NSNumber * _minDaysMainDB;
    NSNumber * _minDaysTotalLogDuration;
    NSMutableArray * _notificationBlocks;
}

@property (weak) PLStorageOperator * storageOperator;
@property (retain) PLSQLiteConnection * connection;
@property (retain) NSDate * lastArchiveDate;
@property (retain, nonatomic) NSNumber * minDaysMainDB;
@property (retain, nonatomic) NSNumber * minDaysTotalLogDuration;
@property (retain) NSMutableArray * notificationBlocks;
@property char enabled;

+ (PLArchiver *)sharedInstance;
+ (void)linkAllArchiveDBToCRFolder;
+ (NSDate *)metadataPathWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 andUUIDString:(NSString *)arg2;
+ (NSString *)archivePathFromMetadataPath:(NSString *)arg0;
+ (NSArray *)metadataPaths;
+ (NSArray *)archivePaths;
+ (NSString *)metadataPathFromArchivePath:(NSString *)arg0;
+ (NSArray *)compressedArchivePaths;

- (void)dealloc;
- (PLArchiver *)init;
- (void)setEnabled:(char)arg0;
- (void)stop;
- (char)enabled;
- (void)start;
- (void).cxx_destruct;
- (PLSQLiteConnection *)connection;
- (void)setConnection:(PLSQLiteConnection *)arg0;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (NSObject<OS_dispatch_queue> *)storageQueue;
- (PLStorageOperator *)storageOperator;
- (void)setStorageOperator:(PLStorageOperator *)arg0;
- (void)registerForArchivingNotificationUsingBlock:(id /* block */)arg0;
- (void)systemTimeChangedByOffset:(double)arg0;
- (void)crashMoverDidFinish;
- (void)compressAnyUncompressedArchives;
- (void)removeAllShmAndWal;
- (void)runActivity;
- (NSNumber *)minDaysMainDB;
- (void)logArchiveEventFromStartDate:(NSDate *)arg0 toEndDate:(NSDate *)arg1;
- (NSMutableArray *)notificationBlocks;
- (void)compressFileAtPath:(NSString *)arg0;
- (NSNumber *)minDaysTotalLogDuration;
- (NSDate *)lastArchiveDate;
- (void)setLastArchiveDate:(NSDate *)arg0;
- (void)setMinDaysMainDB:(NSNumber *)arg0;
- (void)setMinDaysTotalLogDuration:(NSNumber *)arg0;
- (void)setNotificationBlocks:(NSMutableArray *)arg0;
- (void)cleanupArchives;
- (void)archive;

@end
