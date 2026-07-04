/* Runtime dump - DALocalDBGateKeeper
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DALocalDBGateKeeper : NSObject
{
    char _claimedOwnershipOfContacts;
    char _claimedOwnershipOfEvents;
    char _claimedOwnershipOfNotes;
    char _claimedOwnershipOfBookmarks;
    <DADataclassLockWatcher> * _contactsLockHolder;
    NSMutableArray * _contactsWaiters;
    NSMutableSet * _waiterIDsExpectingContactsLock;
    <DADataclassLockWatcher> * _eventsLockHolder;
    NSMutableArray * _eventsWaiters;
    NSMutableSet * _waiterIDsExpectingEventsLock;
    <DADataclassLockWatcher> * _notesLockHolder;
    NSMutableArray * _notesWaiters;
    NSMutableSet * _waiterIDsExpectingNotesLock;
    <DADataclassLockWatcher> * _bookmarksLockHolder;
    NSMutableArray * _bookmarksWaiters;
    NSMutableSet * _waiterIDsExpectingBookmarksLock;
    NSString * _unitTestHackRunLoopMode;
}

@property (nonatomic) char claimedOwnershipOfContacts;
@property (retain, nonatomic) <DADataclassLockWatcher> * contactsLockHolder;
@property (retain, nonatomic) NSMutableArray * contactsWaiters;
@property (retain, nonatomic) NSMutableSet * waiterIDsExpectingContactsLock;
@property (nonatomic) char claimedOwnershipOfEvents;
@property (retain, nonatomic) <DADataclassLockWatcher> * eventsLockHolder;
@property (retain, nonatomic) NSMutableArray * eventsWaiters;
@property (retain, nonatomic) NSMutableSet * waiterIDsExpectingEventsLock;
@property (nonatomic) char claimedOwnershipOfNotes;
@property (retain, nonatomic) <DADataclassLockWatcher> * notesLockHolder;
@property (retain, nonatomic) NSMutableArray * notesWaiters;
@property (retain, nonatomic) NSMutableSet * waiterIDsExpectingNotesLock;
@property (nonatomic) char claimedOwnershipOfBookmarks;
@property (retain, nonatomic) <DADataclassLockWatcher> * bookmarksLockHolder;
@property (retain, nonatomic) NSMutableArray * bookmarksWaiters;
@property (retain, nonatomic) NSMutableSet * waiterIDsExpectingBookmarksLock;
@property (retain, nonatomic) NSString * unitTestHackRunLoopMode;

+ (DALocalDBGateKeeper *)sharedGateKeeper;

- (void)dealloc;
- (DALocalDBGateKeeper *)init;
- (void).cxx_destruct;
- (void)claimedOwnershipOfDataclasses:(int)arg0;
- (void)setContactsWaiters:(NSMutableArray *)arg0;
- (void)setEventsWaiters:(NSMutableArray *)arg0;
- (void)setNotesWaiters:(NSMutableArray *)arg0;
- (void)setBookmarksWaiters:(NSMutableArray *)arg0;
- (void)setWaiterIDsExpectingContactsLock:(NSMutableSet *)arg0;
- (void)setWaiterIDsExpectingEventsLock:(NSMutableSet *)arg0;
- (void)setWaiterIDsExpectingNotesLock:(NSMutableSet *)arg0;
- (void)setWaiterIDsExpectingBookmarksLock:(NSMutableSet *)arg0;
- (void)setContactsLockHolder:(<DADataclassLockWatcher> *)arg0;
- (void)setEventsLockHolder:(<DADataclassLockWatcher> *)arg0;
- (void)setNotesLockHolder:(<DADataclassLockWatcher> *)arg0;
- (void)setBookmarksLockHolder:(<DADataclassLockWatcher> *)arg0;
- (char)_canWakenWaiter:(id)arg0;
- (void)_abortWaiterForWrappers:(id)arg0;
- (void)_setUnitTestHackRunLoopMode:(id)arg0;
- (void)_notifyWaitersForDataclasses:(id)arg0;
- (void)_registerWaiter:(id)arg0 forDataclassLocks:(int)arg1 preempt:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)relinquishLocksForWaiter:(id)arg0 dataclasses:(int)arg1 moreComing:(char)arg2;
- (void)_sendAllClearNotifications;
- (void)registerPreemptiveWaiter:(id)arg0 forDataclassLocks:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)registerWaiter:(id)arg0 forDataclassLocks:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)unregisterWaiterForDataclassLocks:(id)arg0;
- (char)claimedOwnershipOfContacts;
- (void)setClaimedOwnershipOfContacts:(char)arg0;
- (<DADataclassLockWatcher> *)contactsLockHolder;
- (NSMutableArray *)contactsWaiters;
- (NSMutableSet *)waiterIDsExpectingContactsLock;
- (char)claimedOwnershipOfEvents;
- (void)setClaimedOwnershipOfEvents:(char)arg0;
- (<DADataclassLockWatcher> *)eventsLockHolder;
- (NSMutableArray *)eventsWaiters;
- (NSMutableSet *)waiterIDsExpectingEventsLock;
- (char)claimedOwnershipOfNotes;
- (void)setClaimedOwnershipOfNotes:(char)arg0;
- (<DADataclassLockWatcher> *)notesLockHolder;
- (NSMutableArray *)notesWaiters;
- (NSMutableSet *)waiterIDsExpectingNotesLock;
- (char)claimedOwnershipOfBookmarks;
- (void)setClaimedOwnershipOfBookmarks:(char)arg0;
- (<DADataclassLockWatcher> *)bookmarksLockHolder;
- (NSMutableArray *)bookmarksWaiters;
- (NSMutableSet *)waiterIDsExpectingBookmarksLock;
- (NSString *)unitTestHackRunLoopMode;
- (void)setUnitTestHackRunLoopMode:(NSString *)arg0;
- (NSString *)stateString;

@end
