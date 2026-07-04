/* Runtime dump - SASportsBaseballMatchup
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsBaseballMatchup : SASportsMatchup

@property (copy, nonatomic) NSNumber * awayErrors;
@property (copy, nonatomic) NSNumber * awayHits;
@property (copy, nonatomic) NSNumber * balls;
@property (copy, nonatomic) NSNumber * homeErrors;
@property (copy, nonatomic) NSNumber * homeHits;
@property (copy, nonatomic) NSString * inningStatus;
@property (copy, nonatomic) NSNumber * onFirst;
@property (copy, nonatomic) NSNumber * onSecond;
@property (copy, nonatomic) NSNumber * onThird;
@property (copy, nonatomic) NSNumber * outs;
@property (copy, nonatomic) NSNumber * strikes;

+ (SASportsBaseballMatchup *)baseballMatchup;
+ (NSDictionary *)baseballMatchupWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSNumber *)awayErrors;
- (void)setAwayErrors:(NSNumber *)arg0;
- (NSNumber *)awayHits;
- (void)setAwayHits:(NSNumber *)arg0;
- (NSNumber *)balls;
- (void)setBalls:(NSNumber *)arg0;
- (NSNumber *)homeErrors;
- (void)setHomeErrors:(NSNumber *)arg0;
- (NSNumber *)homeHits;
- (void)setHomeHits:(NSNumber *)arg0;
- (NSString *)inningStatus;
- (void)setInningStatus:(NSString *)arg0;
- (NSNumber *)onFirst;
- (void)setOnFirst:(NSNumber *)arg0;
- (NSNumber *)onSecond;
- (void)setOnSecond:(NSNumber *)arg0;
- (NSNumber *)onThird;
- (void)setOnThird:(NSNumber *)arg0;
- (NSNumber *)outs;
- (void)setOuts:(NSNumber *)arg0;
- (NSNumber *)strikes;
- (void)setStrikes:(NSNumber *)arg0;

@end
