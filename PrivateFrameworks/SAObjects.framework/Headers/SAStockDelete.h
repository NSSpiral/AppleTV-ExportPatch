/* Runtime dump - SAStockDelete
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockDelete : SADomainCommand

@property (copy, nonatomic) NSArray * stocks;

+ (SAStockDelete *)delete;
+ (NSDictionary *)deleteWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)stocks;
- (void)setStocks:(NSArray *)arg0;

@end
