/* Runtime dump - SAAnswerSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerSearch : SADomainCommand

@property (retain, nonatomic) SALocation * address;
@property (copy, nonatomic) NSString * attribute;
@property (copy, nonatomic) NSString * miscQuestion;
@property (copy, nonatomic) NSString * placeAttribute;
@property (copy, nonatomic) NSArray * product;
@property (copy, nonatomic) NSString * timeQuestion;
@property (copy, nonatomic) NSString * verbType;

+ (NSDictionary *)searchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSString *)search;

- (NSString *)attribute;
- (NSString *)groupIdentifier;
- (void)setAddress:(SALocation *)arg0;
- (SALocation *)address;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (void)setAttribute:(NSString *)arg0;
- (NSString *)miscQuestion;
- (void)setMiscQuestion:(NSString *)arg0;
- (NSString *)placeAttribute;
- (void)setPlaceAttribute:(NSString *)arg0;
- (NSArray *)product;
- (void)setProduct:(NSArray *)arg0;
- (NSString *)timeQuestion;
- (void)setTimeQuestion:(NSString *)arg0;
- (NSString *)verbType;
- (void)setVerbType:(NSString *)arg0;

@end
