/* Runtime dump - ATVUniversalPlaybackPositionRecord
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVUniversalPlaybackPositionRecord : NSObject <SBKUniversalPlaybackPositionMediaItem>
{
    NSString * _itemIdentifier;
    ATVDataType * _mediaType;
    NSNumber * _bookmarkTime;
    NSNumber * _hasBeenPlayed;
    NSNumber * _playCount;
    NSDate * _timestamp;
    NSURL * _podcastURL;
    ATVPodcastGUID * _podcastGUID;
}

@property (copy, nonatomic) NSString * itemIdentifier;
@property (retain, nonatomic) ATVDataType * mediaType;
@property (retain, nonatomic) NSNumber * bookmarkTime;
@property (retain, nonatomic) NSNumber * hasBeenPlayed;
@property (retain, nonatomic) NSNumber * playCount;
@property (retain, nonatomic) NSDate * timestamp;
@property (retain, nonatomic) NSURL * podcastURL;
@property (retain, nonatomic) ATVPodcastGUID * podcastGUID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSURL *)podcastURL;
- (NSNumber *)bookmarkTime;
- (void)enumerateValuesForProperties:(NSDictionary *)arg0 usingBlock:(id /* block */)arg1;
- (NSNumber *)hasBeenPlayed;
- (void)setHasBeenPlayed:(NSNumber *)arg0;
- (void)setItemIdentifier:(NSString *)arg0;
- (NSString *)description;
- (NSDate *)timestamp;
- (void)setTimestamp:(NSDate *)arg0;
- (void).cxx_destruct;
- (void)setBookmarkTime:(NSNumber *)arg0;
- (void)setPodcastGUID:(ATVPodcastGUID *)arg0;
- (void)setPodcastURL:(NSURL *)arg0;
- (ATVPodcastGUID *)podcastGUID;
- (NSDictionary *)_uppDictionary;
- (void)markAsWatched;
- (void)markAsUnwatched;
- (void)setPlayCount:(NSNumber *)arg0;
- (NSNumber *)playCount;
- (NSString *)itemIdentifier;
- (ATVDataType *)mediaType;
- (void)setMediaType:(ATVDataType *)arg0;

@end
