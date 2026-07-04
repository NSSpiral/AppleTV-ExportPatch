/* Runtime dump - ABUIPerson
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABUIPerson : NSObject <NSCopying>
{
    void * _record;
    void * _addressBook;
    void * _source;
    NSArray * _linkedPeople;
}

@property (readonly) int recordID;
@property (readonly) unsigned int recordType;
@property (readonly) void * record;
@property (readonly) void * source;
@property (readonly) void * addressBook;
@property (readonly) char recordWasDeleted;
@property (readonly) char hasValidRecordID;
@property (readonly) char isMeCard;
@property (readonly) char hasLinkedPeople;
@property (readonly) unsigned int linkedPeopleCount;
@property (readonly) NSArray * linkedPeople;
@property (readonly) char isReadonly;
@property (readonly) char areAllLinkedPeopleReadonly;
@property (readonly) char isRemote;
@property (readonly) void * policy;
@property (readonly) int kind;
@property (readonly) NSString * name;
@property (readonly) NSString * phoneticName;
@property (readonly) NSData * photoThumbnail;
@property (readonly) ABUIPerson * preferredPersonForName;
@property (readonly) NSString * preferredName;
@property (readonly) ABUIPerson * preferredPersonForPhoto;
@property (readonly) NSData * preferredPhotoThumbnail;
@property (readonly) char hasPhoto;
@property (readonly) char hasPreferredPhoto;
@property (readonly) NSString * primarySourceName;
@property (readonly) NSString * secondarySourceName;
@property (readonly) char isFromFacebook;

+ (NSObject *)personWithABPerson:(void *)arg0;
+ (NSObject *)personInSource:(void *)arg0;
+ (NSObject *)personWithABRecordID:(int)arg0 fromAddressBook:(void *)arg1;
+ (ABUIPerson *)personInAddressBook:(void *)arg0;
+ (void *)person;
+ (void)setAccountStore:(ACAccountStore *)arg0;

- (char)hasValidRecordID;
- (NSData *)photoThumbnail;
- (NSData *)preferredPhotoThumbnail;
- (NSString *)primarySourceName;
- (NSString *)secondarySourceName;
- (void *)copyPropertyValue:(int)arg0;
- (void *)policy;
- (char)allowsCustomLabelsForProperty:(int)arg0;
- (char)isMeCard;
- (NSArray *)linkedPeople;
- (ABUIPerson *)preferredPersonForName;
- (void)removePropertyValue:(int)arg0;
- (id)nameIgnoringOrganization:(char)arg0;
- (char)addToGroup:(void *)arg0;
- (char)addToAddressBook:(void *)arg0;
- (char)updateNewPersonKindFromName;
- (ABUIPerson *)preferredPersonForPhoto;
- (char)isFromFacebook;
- (id)policiesForAllLinkedPeople;
- (char)areAllLinkedPeopleReadonly;
- (void)setNamePropertiesFromPerson:(NSObject *)arg0;
- (char)linkToPerson:(NSObject *)arg0;
- (void)mergeValuesFromRecord:(void *)arg0;
- (char)updatePersonKindFromName;
- (char)isRemote;
- (char)hasLinkedPeople;
- (NSString *)preferredName;
- (void)setAsPreferredPersonForName;
- (char)recordWasDeleted;
- (id)reloadFromDB;
- (ABUIPerson *)initWithABPerson:(void *)arg0;
- (ABUIPerson *)initWithABRecordID:(int)arg0 fromAddressBook:(void *)arg1;
- (unsigned int)linkedPeopleCount;
- (char)_updatePersonKindFromNamePreserveOrganizationKind:(char)arg0;
- (void)mergeProperties:(NSDictionary *)arg0 fromRecord:(void *)arg1;
- (void)setAsPreferredPersonForPhoto;
- (char)hasPreferredPhoto;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (ABUIPerson *)copyWithZone:(struct _NSZone *)arg0;
- (void *)source;
- (void *)valueForProperty:(int)arg0;
- (int)kind;
- (char)isReadonly;
- (void *)record;
- (int)recordID;
- (unsigned int)recordType;
- (NSString *)phoneticName;
- (char)hasPhoto;
- (void)setValue:(void *)arg0 forProperty:(int)arg1;
- (void *)addressBook;

@end
