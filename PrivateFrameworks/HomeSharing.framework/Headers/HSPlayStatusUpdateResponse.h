/* Runtime dump - HSPlayStatusUpdateResponse
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSPlayStatusUpdateResponse : HSResponse
{
    unsigned int _nextRevisionID;
    NSDictionary * _playStatusInformation;
    unsigned long long _nowPlayingContainerID;
    unsigned long long _nowPlayingContainerItemID;
    unsigned long long _nowPlayingDatabaseID;
    unsigned long long _nowPlayingItemID;
}

@property (nonatomic) unsigned int nextRevisionID;
@property (nonatomic) unsigned long long nowPlayingContainerID;
@property (nonatomic) unsigned long long nowPlayingContainerItemID;
@property (nonatomic) unsigned long long nowPlayingDatabaseID;
@property (nonatomic) unsigned long long nowPlayingItemID;
@property (copy, nonatomic) NSDictionary * playStatusInformation;

- (NSString *)description;
- (void).cxx_destruct;
- (void)setNextRevisionID:(unsigned int)arg0;
- (void)setNowPlayingDatabaseID:(unsigned long long)arg0;
- (void)setNowPlayingContainerID:(unsigned long long)arg0;
- (void)setNowPlayingContainerItemID:(unsigned long long)arg0;
- (void)setNowPlayingItemID:(unsigned long long)arg0;
- (void)setPlayStatusInformation:(NSDictionary *)arg0;
- (unsigned int)nextRevisionID;
- (unsigned long long)nowPlayingContainerID;
- (unsigned long long)nowPlayingContainerItemID;
- (unsigned long long)nowPlayingDatabaseID;
- (unsigned long long)nowPlayingItemID;
- (NSDictionary *)playStatusInformation;

@end
