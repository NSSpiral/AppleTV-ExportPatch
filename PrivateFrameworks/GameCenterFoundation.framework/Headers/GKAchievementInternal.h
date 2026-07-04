/* Runtime dump - GKAchievementInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAchievementInternal : GKInternalRepresentation
{
    NSString * _identifier;
    NSString * _groupIdentifier;
    NSString * _title;
    NSString * _achievedDescription;
    NSString * _unachievedDescription;
    NSDictionary * _icons;
    GKPlayerInternal * _player;
    id _attributes;
    NSDate * _lastReportedDate;
    double _percentComplete;
}

@property (retain, nonatomic) NSString * identifier;
@property (retain, nonatomic) NSString * groupIdentifier;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * achievedDescription;
@property (retain, nonatomic) NSString * unachievedDescription;
@property (retain, nonatomic) NSDictionary * icons;
@property (nonatomic) unsigned short maximumPoints;
@property (nonatomic) char hidden;
@property (nonatomic) char replayable;
@property (retain, nonatomic) NSDate * lastReportedDate;
@property (nonatomic) double percentComplete;
@property (retain, nonatomic) GKPlayerInternal * player;
@property (nonatomic) unsigned int attributes;

+ (char)supportsSecureCoding;
+ (NSArray *)secureCodedPropertyKeys;

- (NSString *)groupIdentifier;
- (void)setGroupIdentifier:(NSString *)arg0;
- (void)dealloc;
- (GKAchievementInternal *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isHidden;
- (void)setHidden:(char)arg0;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (double)percentComplete;
- (NSString *)identifier;
- (NSString *)title;
- (void)setIdentifier:(NSString *)arg0;
- (NSDictionary *)icons;
- (void)setIcons:(NSDictionary *)arg0;
- (unsigned int)attributes;
- (void)setAttributes:(unsigned int)arg0;
- (void)setPercentComplete:(double)arg0;
- (NSDictionary *)serverRepresentation;
- (void)setLastReportedDate:(NSDate *)arg0;
- (NSDate *)lastReportedDate;
- (char)isReplayable;
- (NSString *)achievedDescription;
- (NSString *)unachievedDescription;
- (unsigned short)maximumPoints;
- (void)setMaximumPoints:(unsigned short)arg0;
- (void)setReplayable:(char)arg0;
- (void)setAchievedDescription:(NSString *)arg0;
- (void)setUnachievedDescription:(NSString *)arg0;
- (void)mergePropertiesFromDescription:(NSString *)arg0;
- (void)setPlayer:(GKPlayerInternal *)arg0;
- (GKPlayerInternal *)player;

@end
