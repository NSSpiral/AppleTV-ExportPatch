/* Runtime dump - SAPerson
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPerson : SADomainObject

@property (copy, nonatomic) NSArray * addresses;
@property (copy, nonatomic) NSDate * birthday;
@property (copy, nonatomic) NSString * company;
@property (copy, nonatomic) NSArray * emails;
@property (copy, nonatomic) NSString * firstName;
@property (copy, nonatomic) NSDictionary * firstNameAPGs;
@property (copy, nonatomic) NSString * firstNamePhonetic;
@property (copy, nonatomic) NSString * fullName;
@property (copy, nonatomic) NSString * internalGUID;
@property (copy, nonatomic) NSNumber * isBlocked;
@property (copy, nonatomic) NSString * lastName;
@property (copy, nonatomic) NSDictionary * lastNameAPGs;
@property (copy, nonatomic) NSString * lastNamePhonetic;
@property (copy, nonatomic) NSNumber * me;
@property (copy, nonatomic) NSString * middleName;
@property (copy, nonatomic) NSString * nickName;
@property (copy, nonatomic) NSDictionary * nickNameAPGs;
@property (copy, nonatomic) NSString * phonemeData;
@property (copy, nonatomic) NSArray * phones;
@property (copy, nonatomic) NSString * prefix;
@property (copy, nonatomic) NSNumber * pseudo;
@property (copy, nonatomic) NSArray * relatedNames;
@property (copy, nonatomic) NSArray * socialProfiles;
@property (copy, nonatomic) NSString * suffix;

+ (void *)person;
+ (NSDictionary *)personWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)company;
- (NSDate *)birthday;
- (NSString *)middleName;
- (NSArray *)relatedNames;
- (NSArray *)socialProfiles;
- (void)setBirthday:(NSDate *)arg0;
- (void)setMiddleName:(NSString *)arg0;
- (void)setRelatedNames:(NSArray *)arg0;
- (void)setSocialProfiles:(NSArray *)arg0;
- (NSArray *)addresses;
- (NSString *)groupIdentifier;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (void)setCompany:(NSString *)arg0;
- (void)setNickName:(NSString *)arg0;
- (NSString *)nickName;
- (NSNumber *)isBlocked;
- (NSString *)suffix;
- (void)setSuffix:(NSString *)arg0;
- (void)setAddresses:(NSArray *)arg0;
- (NSString *)fullName;
- (void)setFullName:(NSString *)arg0;
- (NSArray *)emails;
- (NSArray *)phones;
- (void)setEmails:(NSArray *)arg0;
- (void)setPhones:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSNumber *)me;
- (NSString *)internalGUID;
- (void)setInternalGUID:(NSString *)arg0;
- (NSNumber *)pseudo;
- (void)setPseudo:(NSNumber *)arg0;
- (NSDictionary *)firstNameAPGs;
- (void)setFirstNameAPGs:(NSDictionary *)arg0;
- (NSString *)firstNamePhonetic;
- (void)setFirstNamePhonetic:(NSString *)arg0;
- (void)setIsBlocked:(NSNumber *)arg0;
- (NSDictionary *)lastNameAPGs;
- (void)setLastNameAPGs:(NSDictionary *)arg0;
- (NSString *)lastNamePhonetic;
- (void)setLastNamePhonetic:(NSString *)arg0;
- (NSDictionary *)nickNameAPGs;
- (void)setNickNameAPGs:(NSDictionary *)arg0;
- (NSString *)phonemeData;
- (void)setPhonemeData:(NSString *)arg0;
- (void)setMe:(NSNumber *)arg0;
- (NSString *)prefix;
- (void)setPrefix:(NSString *)arg0;

@end
