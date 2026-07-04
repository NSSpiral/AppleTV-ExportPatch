/* Runtime dump - SAStockSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * stocks;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)stocks;
- (void)setStocks:(NSArray *)arg0;

@end
