/* Runtime dump - ABContactsFilter
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactsFilter : NSObject
{
    void * _addressBook;
    char _showsAllContacts;
    NSArray * _groups;
    NSArray * _sources;
    void * _directorySource;
}

@property (readonly, nonatomic) void * addressBook;
@property (readonly, nonatomic) NSArray * groups;
@property (readonly, nonatomic) NSArray * sources;
@property (readonly, nonatomic) void * directorySource;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) void * sourceForNewRecords;
@property (readonly, nonatomic) void * groupForNewRecords;
@property (readonly, nonatomic) char editable;
@property (readonly, nonatomic) char isDirectory;
@property (readonly, nonatomic) char shouldChangeModelSelectionWhenDisplayed;
@property (readonly, nonatomic) char showsAllContacts;

+ (NSDictionary *)_newContactsFilterFromGroupWrapperRepresentation:(NSDictionary *)arg0 withAddressBook:(void *)arg1;
+ (NSDictionary *)newContactsFilterFromDictionaryRepresentation:(NSDictionary *)arg0 withAddressBook:(void *)arg1;

- (ABContactsFilter *)initWithAddressBook:(void *)arg0;
- (char)showsAllContacts;
- (ABContactsFilter *)initWithGroups:(NSArray *)arg0 sources:(NSArray *)arg1 addressBook:(void *)arg2;
- (ABContactsFilter *)initWithDirectorySource:(void *)arg0 addressBook:(void *)arg1;
- (id)sortedGroupsForGroups:(id)arg0;
- (id)sortedSourcesForSources:(id)arg0;
- (void *)_defaultSourceForAccountContainingSource:(void *)arg0;
- (void)_getWritableSource:(void * *)arg0 andGroup:(void *)arg1;
- (NSArray *)_sortedRecordsForRecords:(NSArray *)arg0 byNameProperty:(int)arg1;
- (void *)directorySource;
- (void)invalidateSourcesForAllContacts;
- (NSDictionary *)copyDictionaryRepresentation;
- (char)shouldChangeModelSelectionWhenDisplayed;
- (void *)groupForNewRecords;
- (void *)sourceForNewRecords;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (char)isEditable;
- (char)isDirectory;
- (NSArray *)sources;
- (NSArray *)groups;
- (void *)addressBook;

@end
