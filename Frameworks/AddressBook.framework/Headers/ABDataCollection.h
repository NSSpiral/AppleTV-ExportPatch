/* Runtime dump - ABDataCollection
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABDataCollection : NSObject
{
    void * _addressBook;
    BOOL _runningUnitTests;
    BOOL _isLocalSourceOnly;
    BOOL _isLocalSourceRemaining;
    BOOL _isMeCardSet;
    BOOL _isMeCardHomeAddressSet;
    BOOL _isMeCardWorkAddressSet;
    int _totalContacts;
    int _totalGroups;
    NSCountedSet * _sourceTypeScalarKeys;
    int _totalContactsWithPhotos;
    int _totalContactsWithBirthdays;
    int _totalContactsWithYearOnBirthday;
    int _totalContactsWithAnniversaries;
    NSMutableDictionary * _propertyCountForRecordID;
}

@property (nonatomic) BOOL runningUnitTests;
@property (nonatomic) int totalContacts;
@property (nonatomic) int totalGroups;
@property (retain, nonatomic) NSCountedSet * sourceTypeScalarKeys;
@property (nonatomic) BOOL isLocalSourceOnly;
@property (nonatomic) BOOL isLocalSourceRemaining;
@property (nonatomic) BOOL isMeCardSet;
@property (nonatomic) BOOL isMeCardHomeAddressSet;
@property (nonatomic) BOOL isMeCardWorkAddressSet;
@property (nonatomic) int totalContactsWithPhotos;
@property (nonatomic) int totalContactsWithBirthdays;
@property (nonatomic) int totalContactsWithYearOnBirthday;
@property (nonatomic) int totalContactsWithAnniversaries;
@property (retain, nonatomic) NSMutableDictionary * propertyCountForRecordID;

+ (void)logContactCreation:(long long)arg0;
+ (void)logContactUpdate:(long long)arg0;
+ (void)logPropertyAdded:(int)arg0 forContact:(void *)arg1;
+ (char)isEnabled;

- (ABDataCollection *)initWithAddressBook:(void *)arg0;
- (void)logAllData;
- (void)logTotalContacts;
- (void)logTotalGroups;
- (void)logSources;
- (void)logMeCard;
- (void)logTotalContactsWithPhotos;
- (void)logTotalContactsWithAnniversary;
- (void)logTotalContactsWithBirthday;
- (void)logTotalContactsWithYearOnBirthday;
- (void)logPropertyCountPerContact;
- (void)setTotalContacts:(int)arg0;
- (int)totalContacts;
- (void)setTotalGroups:(int)arg0;
- (int)totalGroups;
- (void)setIsLocalSourceOnly:(BOOL)arg0;
- (void)setIsLocalSourceRemaining:(BOOL)arg0;
- (NSString *)_sourceTypeAsString:(int)arg0;
- (BOOL)runningUnitTests;
- (NSCountedSet *)sourceTypeScalarKeys;
- (void)setSourceTypeScalarKeys:(NSCountedSet *)arg0;
- (BOOL)isLocalSourceOnly;
- (BOOL)isLocalSourceRemaining;
- (void)setIsMeCardSet:(BOOL)arg0;
- (void)setIsMeCardHomeAddressSet:(BOOL)arg0;
- (void)setIsMeCardWorkAddressSet:(BOOL)arg0;
- (BOOL)isMeCardHomeAddressSet;
- (BOOL)isMeCardWorkAddressSet;
- (BOOL)isMeCardSet;
- (void)setTotalContactsWithPhotos:(int)arg0;
- (int)totalContactsWithPhotos;
- (void)setTotalContactsWithBirthdays:(int)arg0;
- (int)totalContactsWithBirthdays;
- (void)setTotalContactsWithAnniversaries:(int)arg0;
- (int)totalContactsWithAnniversaries;
- (void)setTotalContactsWithYearOnBirthday:(int)arg0;
- (int)totalContactsWithYearOnBirthday;
- (NSMutableDictionary *)propertyCountForRecordID;
- (void)setPropertyCountForRecordID:(NSMutableDictionary *)arg0;
- (void)logTotalContactsWithManualLinks;
- (void)setRunningUnitTests:(BOOL)arg0;

@end
