/* Runtime dump - SAReminderSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderSearch : SADomainCommand

@property (copy, nonatomic) NSNumber * completionStatus;
@property (copy, nonatomic) NSDate * dueAfter;
@property (copy, nonatomic) NSDate * dueBefore;
@property (copy, nonatomic) NSString * listName;
@property (copy, nonatomic) NSString * subject;
@property (copy, nonatomic) NSString * timeZoneId;

+ (NSDictionary *)searchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSString *)search;

- (void)setDueAfter:(NSDate *)arg0;
- (void)setDueBefore:(NSDate *)arg0;
- (NSDate *)dueAfter;
- (NSDate *)dueBefore;
- (NSString *)groupIdentifier;
- (void)setSubject:(NSString *)arg0;
- (NSString *)subject;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)timeZoneId;
- (void)setTimeZoneId:(NSString *)arg0;
- (NSNumber *)completionStatus;
- (void)setCompletionStatus:(NSNumber *)arg0;
- (NSString *)listName;
- (void)setListName:(NSString *)arg0;

@end
