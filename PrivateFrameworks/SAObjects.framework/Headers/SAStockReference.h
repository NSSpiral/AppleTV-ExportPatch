/* Runtime dump - SAStockReference
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockReference : SADomainObject

@property (copy, nonatomic) NSString * companyName;
@property (copy, nonatomic) NSString * symbol;

+ (struct ?)reference;
+ (NSDictionary *)referenceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)symbol;
- (void)setSymbol:(NSString *)arg0;
- (void)setCompanyName:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)companyName;

@end
