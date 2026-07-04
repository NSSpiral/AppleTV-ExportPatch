/* Runtime dump - DALocalDBHelper
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DALocalDBHelper : NSObject
{
    void * _abDB;
    int _abConnectionCount;
    struct CalDatabase * _calDB;
    int _calConnectionCount;
    NSString * _clientIdentifier;
    void * _bookmarkDB;
    int _bookmarkConnectionCount;
    NoteContext * _noteDB;
    int _noteConnectionCount;
    id _calUnitTestCallbackBlock;
}

@property (nonatomic) void * abDB;
@property (nonatomic) int abConnectionCount;
@property (nonatomic) struct CalDatabase * calDB;
@property (nonatomic) int calConnectionCount;
@property (retain, nonatomic) NSString * clientIdentifier;
@property (nonatomic) void * bookmarkDB;
@property (nonatomic) int bookmarkConnectionCount;
@property (retain, nonatomic) NoteContext * noteDB;
@property (nonatomic) int noteConnectionCount;
@property (copy, nonatomic) id calUnitTestCallbackBlock;

+ (void)abSetTestABDBDir:(id)arg0;
+ (DALocalDBHelper *)abTestABDBDir;
+ (void)calSetTestCalDBDir:(id)arg0;
+ (DALocalDBHelper *)calTestCalDBDir;
+ (DALocalDBHelper *)sharedInstanceForAccountType:(NSObject *)arg0 creatingClass:(Class)arg1;

- (NSString *)clientIdentifier;
- (void)setClientIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (void)abOpenDB;
- (char)abCloseDBAndSave:(char)arg0;
- (void *)abDBThrowOnNil:(char)arg0;
- (void)_registerForAddressBookYieldNotifications;
- (void)_registerForCalendarYieldNotifications;
- (char)_calOpenDBWithClientIdentifier:(NSString *)arg0;
- (id /* block */)calUnitTestCallbackBlock;
- (char)noteSaveDB;
- (void)setCalUnitTestCallbackBlock:(id /* block */)arg0;
- (void)abProcessAddedRecords;
- (void)abProcessAddedImages;
- (NSString *)abConstraintPlistPath;
- (void)calOpenDBAsGenericClient;
- (void)calClearSuperfluousChanges;
- (char)calSaveDBAndFlushCaches;
- (int)calConnectionCount;
- (void *)bookmarkDB;
- (char)bookmarkOpenDB;
- (void)bookmarkSaveDB;
- (void)bookmarkCloseDBAndSave:(char)arg0;
- (void)noteOpenDB;
- (char)noteCloseDBAndSave:(char)arg0;
- (int)noteConnectionCount;
- (void)calUnitTestsSetCallbackBlockForSave:(id)arg0;
- (void)setAbDB:(void *)arg0;
- (int)abConnectionCount;
- (void)setAbConnectionCount:(int)arg0;
- (void)setCalDB:(struct CalDatabase *)arg0;
- (void)setCalConnectionCount:(int)arg0;
- (void)setBookmarkDB:(void *)arg0;
- (int)bookmarkConnectionCount;
- (void)setBookmarkConnectionCount:(int)arg0;
- (void)setNoteDB:(NoteContext *)arg0;
- (void)setNoteConnectionCount:(int)arg0;
- (struct CalDatabase *)calDB;
- (NSString *)changeTrackingID;
- (void)calOpenDBWithClientIdentifier:(NSString *)arg0;
- (char)calCloseDBAndSave:(char)arg0;
- (void *)abDB;
- (char)abSaveDB;
- (char)calSaveDB;
- (NoteContext *)noteDB;

@end
