/* Runtime dump - SAStockDeleteCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockDeleteCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * results;
@property (copy, nonatomic) NSArray * stocks;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAStockDeleteCompleted *)deleteCompleted;
+ (NSDictionary *)deleteCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)results;
- (void)setResults:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (NSArray *)stocks;
- (void)setStocks:(NSArray *)arg0;

@end
