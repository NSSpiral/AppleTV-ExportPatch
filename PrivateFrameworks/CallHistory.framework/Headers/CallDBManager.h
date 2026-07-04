/* Runtime dump - CallDBManager
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallDBManager : NSObject
{
    char _deviceUnlocked;
    unsigned char _dataStoreType;
    unsigned char _notifyDataStoreChangeReason;
    DBManager * _dbManager;
}

@property (retain) DBManager * dbManager;
@property char deviceUnlocked;
@property unsigned char dataStoreType;
@property unsigned char notifyDataStoreChangeReason;

+ (CallDBManager *)getDBLocationIsSandboxed:(char)arg0 isTemporary:(char)arg1;
+ (NSURL *)modelURL;
+ (NSString *)dataStoreName;

- (CallDBManager *)init;
- (void).cxx_destruct;
- (NSObject *)permDBLocation;
- (void)handlePermanentCreated;
- (NSObject *)tempDBLocation;
- (void)handleTemporaryCreated;
- (DBManager *)dbManager;
- (NSString *)createManagedObjectContext;
- (char)createPermanent;
- (char)createTemporary;
- (void)moveCallsFromTempDatabase;
- (unsigned char)dataStoreType;
- (void)setNotifyDataStoreChangeReason:(unsigned char)arg0;
- (void)createDataStore;
- (char)shouldCreatePermanent;
- (char)shouldCreateTemporary;
- (unsigned char)notifyDataStoreChangeReason;
- (void)setDataStoreType:(unsigned char)arg0;
- (void)reFetchState;
- (char)notifyDataStoreChanged;
- (void)setDbManager:(DBManager *)arg0;
- (char)deviceUnlocked;
- (void)setDeviceUnlocked:(char)arg0;
- (void)registerForNotifications;

@end
