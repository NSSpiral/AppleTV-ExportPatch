/* Runtime dump - SAStockRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockRequest : SADomainObject

@property (copy, nonatomic) NSDate * endDate;
@property (copy, nonatomic) NSString * requestType;
@property (copy, nonatomic) NSDate * startDate;

+ (NSURLRequest *)request;
+ (NSDictionary *)requestWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setStartDate:(NSDate *)arg0;
- (void)setEndDate:(NSDate *)arg0;
- (void)setRequestType:(NSString *)arg0;
- (NSString *)requestType;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
