/* Runtime dump - CoreDAVResourceTypeItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVResourceTypeItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren * _addressBook;
    CoreDAVItemWithNoChildren * _searchAddressBook;
    CoreDAVItemWithNoChildren * _shared;
    CoreDAVItemWithNoChildren * _principal;
    CoreDAVItemWithNoChildren * _collection;
    CoreDAVItemWithNoChildren * _unauthenticated;
}

@property (retain, nonatomic) CoreDAVItemWithNoChildren * bookmarkFolder;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * bookmarkBarFolder;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * bookmarkMenuFolder;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * addressBook;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * searchAddressBook;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * shared;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * principal;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * collection;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * unauthenticated;
@property (readonly, nonatomic) NSSet * stringSet;

+ (NSArray *)copyParseRules;

- (CoreDAVItemWithNoChildren *)bookmarkFolder;
- (CoreDAVItemWithNoChildren *)bookmarkBarFolder;
- (CoreDAVItemWithNoChildren *)bookmarkMenuFolder;
- (void)setBookmarkFolder:(CoreDAVItemWithNoChildren *)arg0;
- (void)setBookmarkBarFolder:(CoreDAVItemWithNoChildren *)arg0;
- (void)setBookmarkMenuFolder:(CoreDAVItemWithNoChildren *)arg0;
- (NSObject *)extraChildWithNameSpace:(NSString *)arg0 name:(NSString *)arg1;
- (void)setExtraChild:(NSObject *)arg0 forNameSpace:(NSObject *)arg1 name:(NSString *)arg2;
- (CoreDAVItemWithNoChildren *)collection;
- (void)setAddressBook:(CoreDAVItemWithNoChildren *)arg0;
- (void)dealloc;
- (CoreDAVResourceTypeItem *)init;
- (NSString *)description;
- (void)write:(char *)arg0;
- (CoreDAVItemWithNoChildren *)unauthenticated;
- (NSSet *)stringSet;
- (CoreDAVItemWithNoChildren *)principal;
- (CoreDAVItemWithNoChildren *)searchAddressBook;
- (char)isTypeWithNameSpace:(NSString *)arg0 andName:(id *)arg1;
- (void)setPrincipal:(CoreDAVItemWithNoChildren *)arg0;
- (void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg0;
- (void)setSearchAddressBook:(CoreDAVItemWithNoChildren *)arg0;
- (void)setShared:(CoreDAVItemWithNoChildren *)arg0;
- (void)setCollection:(CoreDAVItemWithNoChildren *)arg0;
- (CoreDAVItemWithNoChildren *)addressBook;
- (CoreDAVItemWithNoChildren *)shared;

@end
