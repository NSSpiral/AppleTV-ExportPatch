/* Runtime dump - SASportsMatchupLineScore
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsMatchupLineScore : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * period;
@property (copy, nonatomic) NSString * score;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SASportsMatchupLineScore *)matchupLineScore;
+ (NSDictionary *)matchupLineScoreWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)period;
- (void)setPeriod:(NSString *)arg0;
- (NSString *)score;
- (void)setScore:(NSString *)arg0;

@end
