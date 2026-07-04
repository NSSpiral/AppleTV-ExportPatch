/* Runtime dump - CNMutableContact
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNMutableContact : CNContact

@property (copy) NSString * namePrefix;
@property (copy) NSString * givenName;
@property (copy) NSString * middleName;
@property (copy) NSString * familyName;
@property (copy) NSString * nameSuffix;
@property (copy) NSString * previousFamilyName;
@property (copy) NSString * nickname;
@property (copy) NSString * phoneticGivenName;
@property (copy) NSString * phoneticMiddleName;
@property (copy) NSString * phoneticFamilyName;
@property (copy) NSString * organizationName;
@property (copy) NSString * departmentName;
@property (copy) NSString * jobTitle;
@property (copy) NSDateComponents * birthday;
@property (copy) NSDateComponents * alternateBirthday;
@property (copy) NSString * note;
@property int contactType;
@property (copy) NSArray * phoneNumbers;
@property (copy) NSArray * emailAddresses;
@property (copy) NSArray * urlAddresses;
@property (copy) NSArray * dates;
@property (copy) NSArray * instantMessageAddresses;
@property (copy) NSArray * relatedNames;
@property (copy) NSArray * socialProfiles;
@property (copy) NSArray * postalAddresses;
@property (copy) NSArray * ringtone;
@property (copy) NSArray * textTone;
@property (copy) NSArray * birthdays;

+ (CNContact *)contact;
+ (CNContact *)contactWithRecord:(void *)arg0;
+ (CNContact *)contactWithRecord:(void *)arg0 unify:(char)arg1;

- (char)deleteContact;
- (void)addProperties:(NSDictionary *)arg0 excludingProperties:(NSDictionary *)arg1 fromContact:(CNContact *)arg2;
- (void)updateContactType:(char)arg0;
- (char)saveContactInAddressBook:(void *)arg0;
- (char)linkToContact:(id)arg0;
- (char)unlinkContact;
- (char)addToGroup:(void *)arg0;
- (void)setPhoneNumbers:(NSArray *)arg0;
- (void)setGivenName:(NSString *)arg0;
- (void)setFamilyName:(NSString *)arg0;
- (char)saveContact;
- (void)setPostalAddresses:(NSArray *)arg0;
- (CNMutableContact *)initWithRecord:(void *)arg0 unify:(char)arg1 originalRecord:(void *)arg2;
- (char)isEqualToContact:(id)arg0 includeIdentifiers:(char)arg1;
- (char)isEqualToContact:(id)arg0;
- (void)setContactType:(int)arg0;
- (void)setBirthday:(NSDateComponents *)arg0;
- (void)setAlternateBirthday:(NSDateComponents *)arg0;
- (void)_setMultiValueForProperty:(int)arg0 values:(NSArray *)arg1 valueFromCNValue:(id)arg2;
- (void)_setStringMultiValueForProperty:(int)arg0 values:(NSArray *)arg1;
- (struct __CFString *)_ABLabelFromCNLabel:(NSString *)arg0;
- (void)setMiddleName:(NSString *)arg0;
- (void)setPreviousFamilyName:(NSString *)arg0;
- (void)setNickname:(NSString *)arg0;
- (void)setPhoneticGivenName:(NSString *)arg0;
- (void)setPhoneticMiddleName:(NSString *)arg0;
- (void)setPhoneticFamilyName:(NSString *)arg0;
- (void)setOrganizationName:(NSString *)arg0;
- (void)setDepartmentName:(NSString *)arg0;
- (void)setJobTitle:(NSString *)arg0;
- (void)setBirthdays:(NSArray *)arg0;
- (void)setNote:(NSString *)arg0;
- (void)setPreferredForName;
- (void)setPreferredForPhoto;
- (void)setUrlAddresses:(NSArray *)arg0;
- (void)setDates:(NSArray *)arg0;
- (void)setInstantMessageAddresses:(NSArray *)arg0;
- (void)setRelatedNames:(NSArray *)arg0;
- (void)setSocialProfiles:(NSArray *)arg0;
- (void)setRingtone:(NSArray *)arg0;
- (void)setTextTone:(NSArray *)arg0;
- (CNMutableContact *)init;
- (char)isEqual:(NSObject *)arg0;
- (void)_setValue:(NSValue *)arg0 forProperty:(int)arg1;
- (CNMutableContact *)initWithRecord:(void *)arg0;
- (void)setEmailAddresses:(NSArray *)arg0;
- (char)hasChanges;
- (void)setNamePrefix:(NSString *)arg0;
- (void)setNameSuffix:(NSString *)arg0;

@end
