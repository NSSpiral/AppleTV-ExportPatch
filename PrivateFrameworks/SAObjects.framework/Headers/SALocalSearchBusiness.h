/* Runtime dump - SALocalSearchBusiness
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchBusiness : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSNumber * businessId;
@property (copy, nonatomic) NSDictionary * businessIds;
@property (copy, nonatomic) NSURL * businessUrl;
@property (copy, nonatomic) NSArray * categories;
@property (copy, nonatomic) NSString * extSessionGuid;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * openingHours;
@property (copy, nonatomic) NSArray * phoneNumbers;
@property (copy, nonatomic) NSURL * photo;
@property (retain, nonatomic) SALocalSearchRating * rating;
@property (copy, nonatomic) NSArray * reviews;
@property (nonatomic) int totalNumberOfReviews;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SALocalSearchBusiness2 *)business;
+ (NSDictionary *)businessWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (void)setPhoneNumbers:(NSArray *)arg0;
- (NSString *)groupIdentifier;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSArray *)categories;
- (NSArray *)phoneNumbers;
- (void)setReviews:(NSArray *)arg0;
- (NSArray *)reviews;
- (SALocalSearchRating *)rating;
- (NSURL *)photo;
- (void)setRating:(SALocalSearchRating *)arg0;
- (NSDictionary *)businessIds;
- (void)setPhoto:(NSURL *)arg0;
- (void)setCategories:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (NSNumber *)businessId;
- (void)setBusinessId:(NSNumber *)arg0;
- (void)setBusinessIds:(NSDictionary *)arg0;
- (NSURL *)businessUrl;
- (void)setBusinessUrl:(NSURL *)arg0;
- (NSString *)extSessionGuid;
- (void)setExtSessionGuid:(NSString *)arg0;
- (NSString *)openingHours;
- (void)setOpeningHours:(NSString *)arg0;
- (int)totalNumberOfReviews;
- (void)setTotalNumberOfReviews:(int)arg0;

@end
