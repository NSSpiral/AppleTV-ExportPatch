/* Runtime dump - GKScoreInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKScoreInternal : GKInternalRepresentation
{
    GKPlayerInternal * _player;
    NSString * _leaderboardIdentifier;
    NSString * _groupLeaderboardIdentifier;
    NSString * _formattedValue;
    NSDate * _date;
    long long _value;
    unsigned long long _context;
    unsigned int _rank;
    char _valueSet;
}

@property (readonly, nonatomic) NSString * playerID;
@property (retain, nonatomic) NSString * category;
@property (retain, nonatomic) NSString * groupCategory;
@property (retain, nonatomic) GKPlayerInternal * player;
@property (retain, nonatomic) NSString * leaderboardIdentifier;
@property (retain, nonatomic) NSString * groupLeaderboardIdentifier;
@property (retain, nonatomic) NSString * formattedValue;
@property (retain, nonatomic) NSDate * date;
@property (nonatomic) long long value;
@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned int rank;
@property (nonatomic) char valueSet;

+ (char)supportsSecureCoding;
+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (GKScoreInternal *)initWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setCategory:(NSString *)arg0;
- (NSString *)category;
- (NSDate *)date;
- (long long)value;
- (void)setValue:(long long)arg0;
- (GKScoreInternal *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned long long)context;
- (void)setContext:(unsigned long long)arg0;
- (void)setDate:(NSDate *)arg0;
- (unsigned int)rank;
- (NSDictionary *)serverRepresentation;
- (NSString *)groupLeaderboardIdentifier;
- (NSString *)leaderboardIdentifier;
- (void)setLeaderboardIdentifier:(NSString *)arg0;
- (void)setGroupLeaderboardIdentifier:(NSString *)arg0;
- (void)setFormattedValue:(NSString *)arg0;
- (char)valueSet;
- (NSString *)formattedValue;
- (void)setGroupCategory:(NSString *)arg0;
- (void)setValueSet:(char)arg0;
- (NSString *)groupCategory;
- (NSString *)playerID;
- (void)setRank:(unsigned int)arg0;
- (void)setPlayer:(GKPlayerInternal *)arg0;
- (GKPlayerInternal *)player;

@end
