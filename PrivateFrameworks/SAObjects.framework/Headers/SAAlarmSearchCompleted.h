/* Runtime dump - SAAlarmSearchCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * results;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAAlarmSearchCompleted *)searchCompleted;
+ (NSDictionary *)searchCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSArray *)searchCompletedWithResults:(NSArray *)arg0;

- (NSString *)groupIdentifier;
- (NSArray *)results;
- (void)setResults:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (SAAlarmSearchCompleted *)initWithResults:(NSArray *)arg0;

@end
