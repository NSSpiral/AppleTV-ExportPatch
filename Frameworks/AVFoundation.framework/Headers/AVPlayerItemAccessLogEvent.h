/* Runtime dump - AVPlayerItemAccessLogEvent
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying>
{
    AVPlayerItemAccessLogEventInternal * _playerItemAccessLogEvent;
}

@property (readonly, nonatomic) int numberOfSegmentsDownloaded;
@property (readonly, nonatomic) int numberOfMediaRequests;
@property (readonly, nonatomic) NSDate * playbackStartDate;
@property (readonly, nonatomic) NSString * URI;
@property (readonly, nonatomic) NSString * serverAddress;
@property (readonly, nonatomic) int numberOfServerAddressChanges;
@property (readonly, nonatomic) NSString * playbackSessionID;
@property (readonly, nonatomic) double playbackStartOffset;
@property (readonly, nonatomic) double segmentsDownloadedDuration;
@property (readonly, nonatomic) double durationWatched;
@property (readonly, nonatomic) int numberOfStalls;
@property (readonly, nonatomic) long long numberOfBytesTransferred;
@property (readonly, nonatomic) double transferDuration;
@property (readonly, nonatomic) double observedBitrate;
@property (readonly, nonatomic) double indicatedBitrate;
@property (readonly, nonatomic) int numberOfDroppedVideoFrames;
@property (readonly, nonatomic) double startupTime;
@property (readonly, nonatomic) int downloadOverdue;
@property (readonly, nonatomic) double observedMaxBitrate;
@property (readonly, nonatomic) double observedMinBitrate;
@property (readonly, nonatomic) double observedBitrateStandardDeviation;
@property (readonly, nonatomic) NSString * playbackType;
@property (readonly, nonatomic) int mediaRequestsWWAN;
@property (readonly, nonatomic) double switchBitrate;

- (NSString *)serviceIdentifier;
- (double)transferDuration;
- (double)currentObservedBitrate;
- (double)startupTime;
- (int)downloadOverdue;
- (int)entryReasonCode;
- (double)observedMaxBitrate;
- (double)observedMinBitrate;
- (double)observedBitrateStandardDeviation;
- (NSString *)playbackType;
- (int)mediaRequestsWWAN;
- (double)switchBitrate;
- (int)numberOfMediaRequests;
- (NSDate *)playbackStartDate;
- (NSString *)URI;
- (NSString *)serverAddress;
- (int)numberOfServerAddressChanges;
- (NSString *)playbackSessionID;
- (double)playbackStartOffset;
- (double)segmentsDownloadedDuration;
- (double)durationWatched;
- (int)numberOfStalls;
- (long long)numberOfBytesTransferred;
- (double)observedBitrate;
- (double)indicatedBitrate;
- (int)numberOfDroppedVideoFrames;
- (int)numberOfSegmentsDownloaded;
- (void)dealloc;
- (AVPlayerItemAccessLogEvent *)init;
- (AVPlayerItemAccessLogEvent *)initWithDictionary:(NSDictionary *)arg0;
- (AVPlayerItemAccessLogEvent *)copyWithZone:(struct _NSZone *)arg0;
- (void)finalize;

@end
