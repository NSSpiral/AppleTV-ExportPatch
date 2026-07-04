/* Runtime dump - SASportsSeasonRange
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsSeasonRange : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSDate * end;
@property (copy, nonatomic) NSString * seasonType;
@property (copy, nonatomic) NSDate * start;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)seasonRange;
+ (NSDictionary *)seasonRangeWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSDate *)start;
- (NSDate *)end;
- (void)setStart:(NSDate *)arg0;
- (void)setEnd:(NSDate *)arg0;
- (NSString *)encodedClassName;
- (NSString *)seasonType;
- (void)setSeasonType:(NSString *)arg0;

@end
