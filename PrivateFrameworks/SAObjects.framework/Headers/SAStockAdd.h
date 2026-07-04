/* Runtime dump - SAStockAdd
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockAdd : SABaseClientBoundCommand

@property (copy, nonatomic) NSURL * targetAppId;
@property (copy, nonatomic) NSString * companyName;
@property (copy, nonatomic) NSArray * stockReferences;
@property (copy, nonatomic) NSArray * stocks;
@property (copy, nonatomic) NSString * tickerSymbol;

+ (int)add;
+ (NSDictionary *)addWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setCompanyName:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSURL *)targetAppId;
- (void)setTargetAppId:(NSURL *)arg0;
- (NSArray *)stockReferences;
- (void)setStockReferences:(NSArray *)arg0;
- (NSArray *)stocks;
- (void)setStocks:(NSArray *)arg0;
- (NSString *)tickerSymbol;
- (void)setTickerSymbol:(NSString *)arg0;
- (NSString *)companyName;

@end
