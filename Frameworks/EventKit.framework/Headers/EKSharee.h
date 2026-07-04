/* Runtime dump - EKSharee
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol>

@property (readonly, nonatomic) NSString * UUID;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * emailAddress;
@property (copy, nonatomic) NSString * firstName;
@property (copy, nonatomic) NSString * lastName;
@property (copy, nonatomic) NSString * externalID;
@property (nonatomic) int shareeStatus;
@property (nonatomic) int shareeAccessLevel;
@property (readonly, nonatomic) EKCalendar * owner;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (EKSharee *)shareeWithName:(NSString *)arg0 emailAddress:(NSString *)arg1 externalID:(NSString *)arg2;
+ (EKSharee *)shareeWithEmailAddress:(NSString *)arg0 name:(NSString *)arg1;

- (EKSharee *)initWithName:(NSString *)arg0 emailAddress:(NSString *)arg1 externalID:(NSString *)arg2;
- (EKSharee *)initWithEmailAddress:(NSString *)arg0 name:(NSString *)arg1;
- (void)setExternalID:(NSString *)arg0;
- (NSString *)externalID;
- (int)shareeStatus;
- (void)setShareeStatus:(int)arg0;
- (int)shareeAccessLevel;
- (void)setShareeAccessLevel:(int)arg0;
- (NSString *)lazyLoadRelationForKey:(NSString *)arg0;
- (void *)ABRecordWithAddressBook:(void *)arg0;
- (id)_persistentSharee;
- (EKSharee *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (EKSharee *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)UUID;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (EKCalendar *)owner;
- (NSString *)emailAddress;
- (void)setEmailAddress:(NSString *)arg0;

@end
