/* Runtime dump - SASportsTeamRank
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsTeamRank : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSNumber * position;
@property (copy, nonatomic) NSNumber * primary;
@property (copy, nonatomic) NSString * source;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SASportsTeamRank *)teamRank;
+ (NSDictionary *)teamRankWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)primary;
- (void)setPosition:(NSNumber *)arg0;
- (NSNumber *)position;
- (NSString *)source;
- (void)setSource:(NSString *)arg0;
- (void)setPrimary:(NSNumber *)arg0;
- (NSString *)encodedClassName;

@end
