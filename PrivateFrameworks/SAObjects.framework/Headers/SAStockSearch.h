/* Runtime dump - SAStockSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSURL * targetAppId;
@property (copy, nonatomic) NSArray * companyNameList;
@property (copy, nonatomic) NSArray * stockReferences;

+ (NSDictionary *)searchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSString *)search;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSURL *)targetAppId;
- (void)setTargetAppId:(NSURL *)arg0;
- (NSArray *)stockReferences;
- (void)setStockReferences:(NSArray *)arg0;
- (NSArray *)companyNameList;
- (void)setCompanyNameList:(NSArray *)arg0;

@end
