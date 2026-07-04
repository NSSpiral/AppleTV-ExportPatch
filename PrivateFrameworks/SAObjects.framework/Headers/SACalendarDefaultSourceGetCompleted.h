/* Runtime dump - SACalendarDefaultSourceGetCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <SAServerBoundCommand>

@property (retain, nonatomic) SACalendarSource * aceCalendarSource;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SACalendarDefaultSourceGetCompleted *)defaultSourceGetCompleted;
+ (SACalendarDefaultSourceGetCompleted *)defaultSourceGetCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (SACalendarDefaultSourceGetCompleted *)defaultSourceGetCompletedWithAceCalendarSource:(SACalendarSource *)arg0;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SACalendarDefaultSourceGetCompleted *)initWithAceCalendarSource:(SACalendarSource *)arg0;
- (void)setAceCalendarSource:(SACalendarSource *)arg0;
- (SACalendarSource *)aceCalendarSource;

@end
