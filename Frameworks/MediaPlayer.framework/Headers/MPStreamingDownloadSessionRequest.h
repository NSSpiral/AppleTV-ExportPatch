/* Runtime dump - MPStreamingDownloadSessionRequest
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStreamingDownloadSessionRequest : NSObject
{
    char _shouldStartLeaseSession;
    char _shouldUseAccountLessStreaming;
    MPMediaPlaybackItemMetadata * _playbackItemMetadata;
    unsigned int _preferredAssetQuality;
    NSString * _buyParameters;
    int _endpointType;
    long long _storeAdamID;
}

@property (retain, nonatomic) MPMediaPlaybackItemMetadata * playbackItemMetadata;
@property (nonatomic) unsigned int preferredAssetQuality;
@property (nonatomic) char shouldStartLeaseSession;
@property (nonatomic) char shouldUseAccountLessStreaming;
@property (readonly, copy, nonatomic) NSString * buyParameters;
@property (readonly, nonatomic) int endpointType;
@property (readonly, nonatomic) long long storeAdamID;
@property (readonly, nonatomic) char usesSubscriptionLease;

- (NSString *)buyParameters;
- (char)usesSubscriptionLease;
- (int)endpointType;
- (long long)storeAdamID;
- (MPMediaPlaybackItemMetadata *)playbackItemMetadata;
- (void)setPlaybackItemMetadata:(MPMediaPlaybackItemMetadata *)arg0;
- (void)setPreferredAssetQuality:(unsigned int)arg0;
- (char)shouldUseAccountLessStreaming;
- (void)setShouldUseAccountLessStreaming:(char)arg0;
- (void)setShouldStartLeaseSession:(char)arg0;
- (unsigned int)preferredAssetQuality;
- (char)shouldStartLeaseSession;
- (void).cxx_destruct;

@end
