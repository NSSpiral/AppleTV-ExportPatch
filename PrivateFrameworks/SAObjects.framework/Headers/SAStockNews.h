/* Runtime dump - SAStockNews
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockNews : SADomainObject

@property (copy, nonatomic) NSDate * timeStamp;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * url;

+ (NSArray *)news;
+ (NSDictionary *)newsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)url;
- (NSString *)title;
- (void)setUrl:(NSString *)arg0;
- (NSDate *)timeStamp;
- (void)setTimeStamp:(NSDate *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;

@end
