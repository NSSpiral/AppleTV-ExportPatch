/* Runtime dump - SBCPlaybackPositionEntity
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@interface SBCPlaybackPositionEntity : NSObject <NSCopying, NSSecureCoding>
{
    char _hasBeenPlayed;
    SBCPlaybackPositionDomain * _playbackPositionDomain;
    NSString * _ubiquitousIdentifier;
    unsigned int _userPlayCount;
    long long _foreignDatabaseEntityID;
    double _bookmarkTimestamp;
    double _bookmarkTime;
}

@property (readonly, nonatomic) SBCPlaybackPositionDomain * playbackPositionDomain;
@property (readonly, nonatomic) NSString * ubiquitousIdentifier;
@property (readonly, nonatomic) long long foreignDatabaseEntityID;
@property (nonatomic) double bookmarkTimestamp;
@property (nonatomic) double bookmarkTime;
@property (nonatomic) unsigned int userPlayCount;
@property (nonatomic) char hasBeenPlayed;

+ (char)supportsSecureCoding;
+ (NSObject *)ubiquitousIdentifierWithUniqueStoreID:(long long)arg0;
+ (NSString *)ubiquitousIdentifierWithItemTitle:(NSString *)arg0 albumName:(NSString *)arg1 itemArtistName:(NSString *)arg2;
+ (NSURL *)ubiquitousIdentifierWithPodcastFeedURL:(NSURL *)arg0 feedGUID:(NSString *)arg1;
+ (NSURL *)ubiquitousIdentifierWithiTunesUFeedURL:(NSURL *)arg0 feedGUID:(NSString *)arg1;

- (double)bookmarkTime;
- (char)hasBeenPlayed;
- (void)setHasBeenPlayed:(char)arg0;
- (SBCPlaybackPositionEntity *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SBCPlaybackPositionEntity *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setBookmarkTime:(double)arg0;
- (void)setBookmarkTimestamp:(double)arg0;
- (double)bookmarkTimestamp;
- (SBCPlaybackPositionDomain *)playbackPositionDomain;
- (SBCPlaybackPositionEntity *)initWithPlaybackPositionDomain:(SBCPlaybackPositionDomain *)arg0 ubiquitousIdentifier:(NSString *)arg1 foreignDatabaseEntityID:(long long)arg2;
- (void)setUserPlayCount:(unsigned int)arg0;
- (unsigned int)userPlayCount;
- (NSString *)ubiquitousIdentifier;
- (NSDictionary *)SBKUniversalPlaybackPositionMetadata;
- (NSDictionary *)copyWithValuesFromSBKUniversalPlaybackPositionMetadata:(NSDictionary *)arg0;
- (long long)foreignDatabaseEntityID;

@end
