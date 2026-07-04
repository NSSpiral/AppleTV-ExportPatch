/* Runtime dump - SANoteSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANoteSearch : SADomainCommand

@property (copy, nonatomic) NSString * contentQuery;
@property (copy, nonatomic) NSDate * fromDate;
@property (copy, nonatomic) NSDate * toDate;

+ (NSDictionary *)searchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSString *)search;

- (NSString *)groupIdentifier;
- (NSDate *)toDate;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)contentQuery;
- (void)setContentQuery:(NSString *)arg0;
- (NSDate *)fromDate;
- (void)setFromDate:(NSDate *)arg0;
- (void)setToDate:(NSDate *)arg0;

@end
