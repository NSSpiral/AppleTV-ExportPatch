/* Runtime dump - SALocalSearchBusiness2
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchBusiness2 : SADomainObject <SAAceSerializable>

@property (retain, nonatomic) SALocation * address;
@property (copy, nonatomic) NSURL * businessUrl;
@property (copy, nonatomic) NSArray * categories;
@property (copy, nonatomic) NSArray * commands;
@property (copy, nonatomic) NSString * currencySymbol;
@property (copy, nonatomic) NSString * descriptionText;
@property (copy, nonatomic) NSString * extSessionGuid;
@property (copy, nonatomic) NSDate * extSessionGuidCreatedTimestamp;
@property (copy, nonatomic) NSDictionary * identifierMap;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSArray * offerLists;
@property (retain, nonatomic) SALocalSearchOperationHours * operationHours;
@property (copy, nonatomic) NSString * phoneNumber;
@property (copy, nonatomic) NSArray * photoList;
@property (copy, nonatomic) NSData * placeData2;
@property (copy, nonatomic) NSString * priceRange;
@property (copy, nonatomic) NSArray * reviewList;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SALocalSearchBusiness2 *)business2;
+ (NSDictionary *)business2WithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (void)setPhoneNumber:(NSString *)arg0;
- (NSString *)currencySymbol;
- (void)setCurrencySymbol:(NSString *)arg0;
- (NSString *)groupIdentifier;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)phoneNumber;
- (NSArray *)categories;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (void)setAddress:(SALocation *)arg0;
- (SALocation *)address;
- (void)setDescriptionText:(NSString *)arg0;
- (NSString *)descriptionText;
- (void)setCategories:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (NSURL *)businessUrl;
- (void)setBusinessUrl:(NSURL *)arg0;
- (NSString *)extSessionGuid;
- (void)setExtSessionGuid:(NSString *)arg0;
- (NSDate *)extSessionGuidCreatedTimestamp;
- (void)setExtSessionGuidCreatedTimestamp:(NSDate *)arg0;
- (NSData *)placeData2;
- (void)setPlaceData2:(NSData *)arg0;
- (NSArray *)reviewList;
- (NSString *)priceRange;
- (void)setPriceRange:(NSString *)arg0;
- (NSDictionary *)identifierMap;
- (void)setIdentifierMap:(NSDictionary *)arg0;
- (NSArray *)offerLists;
- (void)setOfferLists:(NSArray *)arg0;
- (SALocalSearchOperationHours *)operationHours;
- (void)setOperationHours:(SALocalSearchOperationHours *)arg0;
- (NSArray *)photoList;
- (void)setPhotoList:(NSArray *)arg0;
- (void)setReviewList:(NSArray *)arg0;

@end
