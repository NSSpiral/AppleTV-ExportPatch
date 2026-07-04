/* Runtime dump - GKLeaderboardSetInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLeaderboardSetInternal : GKInternalRepresentation
{
    NSString * _identifier;
    NSString * _groupIdentifier;
    NSString * _title;
    NSDictionary * _leaderboardIdentifiers;
    NSDictionary * _icons;
}

@property (retain, nonatomic) NSString * setIdentifier;
@property (retain, nonatomic) NSString * identifier;
@property (retain, nonatomic) NSString * groupIdentifier;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSDictionary * leaderboardIdentifiers;
@property (retain, nonatomic) NSDictionary * icons;

+ (NSArray *)secureCodedPropertyKeys;

- (NSString *)groupIdentifier;
- (void)setGroupIdentifier:(NSString *)arg0;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)identifier;
- (NSString *)title;
- (void)setIdentifier:(NSString *)arg0;
- (NSDictionary *)icons;
- (void)setIcons:(NSDictionary *)arg0;
- (NSDictionary *)leaderboardIdentifiers;
- (void)setLeaderboardIdentifiers:(NSDictionary *)arg0;
- (NSString *)setIdentifier;
- (void)setSetIdentifier:(NSString *)arg0;

@end
