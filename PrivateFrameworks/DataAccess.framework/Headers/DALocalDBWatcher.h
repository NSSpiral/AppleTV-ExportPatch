/* Runtime dump - DALocalDBWatcher
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DALocalDBWatcher : NSObject
{
    int _lastSavedCalSequenceNumber;
    int _lastSavedABSequenceNumber;
    void * _abWatcher;
    struct CalDatabase * _calWatcher;
    NoteContext * _noteWatcher;
    NSMapTable * _concernedABPartyToBlockMap;
    NSMapTable * _concernedCalPartyToBlockMap;
    NSMapTable * _concernedNotePartyToBlockMap;
    char _watchingBookmarks;
    NSMapTable * _concernedBookmarkPartyToBlockMap;
}

@property (nonatomic) int lastSavedABSequenceNumber;
@property (nonatomic) int lastSavedCalSequenceNumber;

+ (DALocalDBWatcher *)sharedDBWatcher;

- (void)dealloc;
- (DALocalDBWatcher *)init;
- (void).cxx_destruct;
- (int)lastSavedABSequenceNumber;
- (void)setLastSavedABSequenceNumber:(int)arg0;
- (int)lastSavedCalSequenceNumber;
- (void)setLastSavedCalSequenceNumber:(int)arg0;
- (void)noteABDBDirChanged;
- (void)noteCalDBDirChanged;
- (void)_notesChangedExternally:(id)arg0;
- (void)_handleABChangeNotificationWithInfo:(NSDictionary *)arg0;
- (void)registerConcernedABParty:(id)arg0 withChangedBlock:(id /* block */)arg1;
- (void)removeConcernedABParty:(id)arg0;
- (void)_handleCalChangeNotification;
- (void)registerConcernedCalParty:(id)arg0 withChangedBlock:(id /* block */)arg1;
- (void)removeConcernedCalParty:(id)arg0;
- (void)_handleBookmarkChangeNotification;
- (void)registerConcernedBookmarkParty:(id)arg0 withChangedBlock:(id /* block */)arg1;
- (void)removeConcernedBookmarkParty:(id)arg0;
- (void)registerConcernedNoteParty:(id)arg0 withChangedBlock:(id /* block */)arg1;
- (void)removeConcernedNoteParty:(id)arg0;

@end
