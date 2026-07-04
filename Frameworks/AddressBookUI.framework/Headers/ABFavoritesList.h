/* Runtime dump - ABFavoritesList
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABFavoritesList : NSObject
{
    ABFavoritesListManager * _favoritesListManager;
}

+ (ABFavoritesList *)sharedInstanceWithAddressBook:(void *)arg0;
+ (ABFavoritesList *)sharedInstance;

- (ABFavoritesList *)initWithAddressBook:(void *)arg0;
- (char)entryIsDuplicateAndThusRemoved:(id)arg0 oldUid:(int)arg1;
- (void)recacheIdentitiesSoon;
- (NSObject *)entriesForPerson:(void *)arg0;
- (NSObject *)entryWithType:(int)arg0 forPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (NSString *)entryWithIdentifier:(int)arg0 forPerson:(void *)arg1;
- (char)isFull;
- (char)containsEntryWithIdentifier:(int)arg0 forPerson:(void *)arg1;
- (char)containsEntryWithType:(int)arg0 forPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (char)addEntryForPerson:(void *)arg0 property:(int)arg1 withIdentifier:(int)arg2;
- (void)removeEntryAtIndex:(int)arg0;
- (void)moveEntryAtIndex:(int)arg0 toIndex:(int)arg1;
- (void)_applicationWillSuspend:(id)arg0;
- (void)save;
- (void)dealloc;
- (NSArray *)entries;
- (void)addEntry:(QLZipArchiveEntry *)arg0;

@end
