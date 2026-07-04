/* Runtime dump - SALocalSearchRangePeriod
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod>

@property (nonatomic) int endSecondsSinceMidnight;
@property (nonatomic) int startSecondsSinceMidnight;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SALocalSearchRangePeriod *)rangePeriod;
+ (NSDictionary *)rangePeriodWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (int)endSecondsSinceMidnight;
- (void)setEndSecondsSinceMidnight:(int)arg0;
- (int)startSecondsSinceMidnight;
- (void)setStartSecondsSinceMidnight:(int)arg0;

@end
