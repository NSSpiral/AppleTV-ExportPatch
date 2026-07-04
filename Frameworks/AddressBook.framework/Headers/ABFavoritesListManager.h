/* Runtime dump - ABFavoritesListManager
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABFavoritesListManager : NSObject
{
    void * _addressBook;
    NSMutableArray * _list;
    struct __CFDictionary * _uidToEntry;
    struct ? _flags;
}

+ (ABFavoritesListManager *)sharedInstanceWithAddressBook:(void *)arg0;
+ (ABFavoritesListManager *)sharedInstance;

- (ABFavoritesListManager *)initWithAddressBook:(void *)arg0;
- (char)entryIsDuplicateAndThusRemoved:(id)arg0 oldUid:(int)arg1;
- (void)_addEntryToMap:(NSObject *)arg0;
- (void)recacheIdentitiesSoon;
- (void)_loadListWithAddressBook:(void *)arg0;
- (void)_entryIdentityChanged:(NSNotification *)arg0;
- (void)_loadList;
- (id)entriesForPeople:(id)arg0;
- (char)_isValueForEntry:(id)arg0 equalToValue:(id)arg1;
- (NSArray *)entryFromEntries:(NSArray *)arg0 type:(int)arg1 property:(int)arg2 identifier:(int)arg3 value:(NSObject *)arg4 label:(NSString *)arg5;
- (NSObject *)entriesForPerson:(void *)arg0;
- (NSObject *)entryWithType:(int)arg0 forPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (NSString *)entryWithIdentifier:(int)arg0 forPerson:(void *)arg1;
- (char)isFull;
- (void)_removeEntryFromMap:(NSObject *)arg0 withUid:(int)arg1;
- (void)_scheduleSave;
- (char)_writeFavoritesToFile:(NSString *)arg0;
- (void)_delayedLookup;
- (NSArray *)entryFromEntries:(NSArray *)arg0 type:(int)arg1 property:(int)arg2 value:(NSObject *)arg3 label:(NSString *)arg4;
- (char)containsEntryWithIdentifier:(int)arg0 forPerson:(void *)arg1;
- (char)containsEntryWithType:(int)arg0 forPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (char)addEntryForPerson:(void *)arg0 property:(int)arg1 withIdentifier:(int)arg2;
- (void)saveImmediately;
- (void)_listChangedExternally;
- (void)removeEntryAtIndex:(int)arg0;
- (void)moveEntryAtIndex:(int)arg0 toIndex:(int)arg1;
- (void)removeAllEntries;
- (void)save;
- (void)dealloc;
- (NSArray *)entries;
- (void)addEntry:(QLZipArchiveEntry *)arg0;
- (void)_postChangeNotification;

@end
