/* Runtime dump - SAWebNewsResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebNewsResult : SAWebWebResult

@property (copy, nonatomic) NSDate * publicationDate;
@property (copy, nonatomic) NSString * source;

+ (NSObject *)newsResult;
+ (NSDictionary *)newsResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)source;
- (void)setSource:(NSString *)arg0;
- (NSDate *)publicationDate;
- (void)setPublicationDate:(NSDate *)arg0;
- (NSString *)encodedClassName;

@end
