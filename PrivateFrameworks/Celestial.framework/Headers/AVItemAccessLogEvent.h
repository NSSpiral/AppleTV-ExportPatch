/* Runtime dump - AVItemAccessLogEvent
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVItemAccessLogEvent : NSObject <NSCopying>
{
    AVItemAccessLogEventInternal * _playerItemAccessLogEvent;
}

@property (readonly, nonatomic) int numberOfSegmentsDownloaded;
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
@property (readonly, nonatomic) double observedBitrate;
@property (readonly, nonatomic) double indicatedBitrate;
@property (readonly, nonatomic) int numberOfDroppedVideoFrames;

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
- (AVItemAccessLogEvent *)init;
- (AVItemAccessLogEvent *)initWithDictionary:(NSDictionary *)arg0;
- (AVItemAccessLogEvent *)copyWithZone:(struct _NSZone *)arg0;
- (void)finalize;

@end
