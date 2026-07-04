/* Runtime dump - SAStockAddCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockAddCompleted : SABaseCommand <SAServerBoundCommand>

@property (retain, nonatomic) SAStockObject * aceStock;
@property (copy, nonatomic) NSURL * identifier;
@property (copy, nonatomic) NSArray * results;
@property (copy, nonatomic) NSArray * stockReferences;
@property (copy, nonatomic) NSArray * stocks;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAStockAddCompleted *)addCompleted;
+ (NSDictionary *)addCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSURL *)identifier;
- (void)setIdentifier:(NSURL *)arg0;
- (NSArray *)results;
- (void)setResults:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (NSArray *)stockReferences;
- (void)setStockReferences:(NSArray *)arg0;
- (NSArray *)stocks;
- (void)setStocks:(NSArray *)arg0;
- (SAStockObject *)aceStock;
- (void)setAceStock:(SAStockObject *)arg0;

@end
