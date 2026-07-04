/* Runtime dump - ABFavoritesEntry
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABFavoritesEntry : NSObject
{
    int _abUid;
    int _abIdentifier;
    NSString * _value;
    int _property;
    int _type;
    id _dirty;
    NSString * _label;
    NSString * _name;
    NSString * _abDatabaseUUID;
    void * _addressBook;
}

+ (void)_runLookup;

- (ABFavoritesEntry *)initWithPerson:(void *)arg0 property:(int)arg1 identifier:(int)arg2 type:(int)arg3;
- (ABFavoritesEntry *)initWithDictionaryRepresentation:(NSDictionary *)arg0 addressBook:(void *)arg1;
- (void)_unqueueLookup;
- (void)_queueLookup;
- (ABFavoritesEntry *)initWithPerson:(void *)arg0 property:(int)arg1 identifier:(int)arg2;
- (void)dictionaryRepresentation:(id *)arg0 isDirty:(char *)arg1;
- (NSString *)nonLocalizedLabel;
- (void *)ABPerson;
- (int)_abUid;
- (void)recheckAddressBook;
- (void)_lookupNotFound;
- (void)_lookupChanged:(NSNotification *)arg0;
- (void)_postEntryChanged;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (int)identifier;
- (int)type;
- (NSString *)value;
- (NSString *)label;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)displayName;
- (int)property;
- (ABFavoritesEntry *)initWithDictionaryRepresentation:(NSDictionary *)arg0;

@end
