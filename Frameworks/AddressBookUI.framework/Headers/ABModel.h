/* Runtime dump - ABModel
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABModel : NSObject
{
    void * _addressBook;
    struct ? * _sectionLists;
    struct __CFDictionary * _headerSortKeyToHeaderString;
    struct _NSRange _displayedMemberPreparedRange;
    unsigned int _numberOfDisplayedMembers;
    char _displayedMembersAreSearchResults;
    void * _selectedPerson;
    unsigned int _displayOrdering;
    struct __CFArray * _databaseChangeDelegates;
    void * _backgroundAddressBook;
    char _backgroundAddressBookInvalidated;
    NSMutableArray * _cachedModelRecords;
    NSRecursiveLock * _memberLock;
    char _loadingInBackground;
    NSRecursiveLock * _backgroundLoadingLock;
    char _backgroundInvalidated;
    id _delayedNotificationHandler;
    char _autoInvalidateOnDatabaseChange;
    NSArray * _lastSeenSources;
    NSArray * _lastSeenGroups;
    int _meID;
    ABContactsFilter * _displayedContactsFilter;
    ABContactsFilter * _selectedContactsFilter;
    ABContactsFilter * _lastSelectedContactsFilter;
}

@property (retain, nonatomic) ABContactsFilter * displayedContactsFilter;
@property (readonly, nonatomic) ABContactsFilter * selectedContactsFilter;
@property (readonly, nonatomic) ABContactsFilter * lastSelectedContactsFilter;
@property (readonly, nonatomic) void * sourceForNewRecords;
@property (readonly, nonatomic) void * groupForNewRecords;
@property (nonatomic) void * addressBook;

+ (unsigned int)sortOrdering;
+ (void)initialize;

- (ABModel *)initWithAddressBook:(void *)arg0;
- (void)removeDatabaseChangeDelegate:(NSObject *)arg0;
- (ABContactsFilter *)selectedContactsFilter;
- (void)addDatabaseChangeDelegate:(NSObject *)arg0;
- (void)setSelectedContactsFilter:(ABContactsFilter *)arg0;
- (void *)groupForNewRecords;
- (void *)sourceForNewRecords;
- (ABContactsFilter *)displayedContactsFilter;
- (void *)selectedPerson;
- (unsigned int)numberOfDisplayedMembers;
- (int)indexForDisplayedMember:(void *)arg0;
- (void)setDisplayNameOrdering:(unsigned int)arg0;
- (id)allGroups;
- (struct ? *)displayedMemberSectionLists;
- (unsigned int)displayedMemberSectionListsCount;
- (void *)displayedMemberAtIndex:(int)arg0;
- (void)updateForMajorAddressBookChange;
- (void)setSelectedPerson:(void *)arg0;
- (void)invalidateDisplayedMembers;
- (ABContactsFilter *)lastSelectedContactsFilter;
- (void)resetSectionList;
- (void)_cacheMeID;
- (void)setAutoInvalidateOnDatabaseChange:(char)arg0;
- (void)prepareDisplayedMembersInRange:(struct _NSRange)arg0;
- (void)_waitUntilBackgroundThreadFinished;
- (struct __CFDictionary *)headerSortKeyToHeaderStringDictionary;
- (char)shouldUsePartialLoadingForContactsFilter:(NSObject *)arg0;
- (long)resetPartialSectionListWithMaximumCount:(int)arg0 headerSortKeyToHeaderString:(struct __CFDictionary *)arg1;
- (long)resetFullSectionList:(struct __CFDictionary *)arg0 maximumSectionCount:(int)arg1;
- (void)_cachePeople:(struct __CFArray *)arg0 atEnd:(char)arg1;
- (NSObject *)displayedMembersInRange:(struct _NSRange)arg0;
- (NSObject *)_newModelRecordFromRecord:(void *)arg0;
- (struct __CFArray *)_copyArrayOfPeopleInDisplayedContactsFilterForRange:(struct _NSRange)arg0 inBackground:(char)arg1;
- (void)_loadMembersInBackground:(NSNotification *)arg0;
- (void)_startBackgroundThreadIfNecessaryScanningForward:(char)arg0;
- (NSObject *)_partialDisplayedGroupMembersInRange:(struct _NSRange)arg0;
- (NSObject *)_displayedGroupMembersInRange:(struct _NSRange)arg0;
- (int)_indexOfMember:(void *)arg0 inDisplayedMembers:(id)arg1;
- (void)setLastSelectedContactsFilter:(ABContactsFilter *)arg0;
- (void)setDisplayedContactsFilter:(ABContactsFilter *)arg0;
- (void)_updateForMajorAddressBookChange:(char)arg0;
- (void)_notifyDelegatesOfExternalDatabaseChangeWithDeletedGroup:(char)arg0 deletedPerson:(char)arg1;
- (void)resetSortKeyToHeaderStringDictionary;
- (void)setFilteredDisplayedMembers:(struct __CFArray *)arg0;
- (NSArray *)allCachedModelRecords;
- (void)copyDisplayedNamePieces:(id *)arg0 isGroup:(char *)arg1 highlightIndex:(int *)arg2 forMemberID:(int *)arg3 atindex:(int)arg4;
- (void)invalidateLastSelectedContactsFilter;
- (int)meID;
- (void)_modelDatabaseChangedLocally:(struct __CFDictionary *)arg0;
- (void)_modelDatabaseChangedExternally:(struct __CFDictionary *)arg0;
- (struct __CFArray *)_databaseChangeDelegates;
- (void)startDelayingNotificationsForDatabaseChangeDelegate:(NSObject *)arg0;
- (void)stopDelayingNotificationsForDatabaseChangeDelegate:(NSObject *)arg0 andDeliverDelayedNotifications:(char)arg1;
- (void)setAddressBook:(void *)arg0;
- (void)setSortOrdering:(unsigned int)arg0;
- (void)dealloc;
- (id)allSources;
- (void *)addressBook;

@end
