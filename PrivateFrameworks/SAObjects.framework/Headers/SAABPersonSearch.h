/* Runtime dump - SAABPersonSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAABPersonSearch : SADomainCommand

@property (copy, nonatomic) NSURL * accountIdentifier;
@property (retain, nonatomic) SALocation * address;
@property (copy, nonatomic) NSDate * birthday;
@property (copy, nonatomic) NSString * company;
@property (retain, nonatomic) SAEmail * email;
@property (copy, nonatomic) NSNumber * me;
@property (copy, nonatomic) NSString * name;
@property (retain, nonatomic) SAPhone * phone;
@property (copy, nonatomic) NSString * relationship;
@property (copy, nonatomic) NSString * scope;

+ (SAABPersonSearch *)personSearch;
+ (NSDictionary *)personSearchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)company;
- (NSDate *)birthday;
- (void)setBirthday:(NSDate *)arg0;
- (NSString *)relationship;
- (void)setEmail:(SAEmail *)arg0;
- (NSString *)groupIdentifier;
- (void)setAccountIdentifier:(NSURL *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setScope:(NSString *)arg0;
- (NSString *)scope;
- (NSURL *)accountIdentifier;
- (void)setPhone:(SAPhone *)arg0;
- (void)setCompany:(NSString *)arg0;
- (SAPhone *)phone;
- (void)setAddress:(SALocation *)arg0;
- (SALocation *)address;
- (SAEmail *)email;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSNumber *)me;
- (void)setRelationship:(NSString *)arg0;
- (void)setMe:(NSNumber *)arg0;

@end
