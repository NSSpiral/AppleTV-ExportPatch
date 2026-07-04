/* Runtime dump - GKLeaderboardScoreRequest
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLeaderboardScoreRequest : NSObject <NSSecureCoding>
{
    GKPlayerInternal * _playerInternal;
    NSString * _gameBundleID;
    NSString * _identifier;
    NSString * _groupIdentifier;
    char _friendsOnly;
    int _timeScope;
    char _prefetch;
}

@property (copy, nonatomic) GKPlayerInternal * playerInternal;
@property (copy, nonatomic) NSString * gameBundleID;
@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSString * groupIdentifier;
@property (nonatomic) char friendsOnly;
@property (nonatomic) int timeScope;
@property (nonatomic) char prefetch;

+ (char)supportsSecureCoding;
+ (GKLeaderboardScoreRequest *)requestForPlayerInternals:(id)arg0;
+ (NSObject *)requestForRankRange:(struct _NSRange)arg0;

- (NSString *)groupIdentifier;
- (void)setGroupIdentifier:(NSString *)arg0;
- (void)dealloc;
- (GKLeaderboardScoreRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (int)timeScope;
- (void)setPlayerInternal:(GKPlayerInternal *)arg0;
- (void)setGameBundleID:(NSString *)arg0;
- (void)setTimeScope:(int)arg0;
- (void)setFriendsOnly:(char)arg0;
- (GKPlayerInternal *)playerInternal;
- (NSString *)gameBundleID;
- (char)friendsOnly;
- (char)isPrefetch;
- (void)setPrefetch:(char)arg0;

@end
