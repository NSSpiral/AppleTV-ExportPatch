/* Runtime dump - SAEmailSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAEmailSearch : SADomainCommand

@property (copy, nonatomic) NSDate * endDate;
@property (copy, nonatomic) NSString * fromEmail;
@property (copy, nonatomic) NSDate * startDate;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString * subject;
@property (copy, nonatomic) NSString * timeZoneId;
@property (copy, nonatomic) NSString * toEmail;

+ (NSDictionary *)searchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSString *)search;

- (NSString *)groupIdentifier;
- (void)setSubject:(NSString *)arg0;
- (int)status;
- (void)setStatus:(int)arg0;
- (NSString *)subject;
- (void)setStartDate:(NSDate *)arg0;
- (void)setEndDate:(NSDate *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)timeZoneId;
- (void)setTimeZoneId:(NSString *)arg0;
- (NSString *)fromEmail;
- (void)setFromEmail:(NSString *)arg0;
- (NSString *)toEmail;
- (void)setToEmail:(NSString *)arg0;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
