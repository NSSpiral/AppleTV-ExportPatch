/* Runtime dump - MPMovieAccessLogEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovieAccessLogEvent : NSObject <NSCopying>
{
    AVPlayerItemAccessLogEvent * _event;
}

@property (readonly, nonatomic) unsigned int numberOfSegmentsDownloaded;
@property (readonly, nonatomic) NSDate * playbackStartDate;
@property (readonly, nonatomic) NSString * URI;
@property (readonly, nonatomic) NSString * serverAddress;
@property (readonly, nonatomic) unsigned int numberOfServerAddressChanges;
@property (readonly, nonatomic) NSString * playbackSessionID;
@property (readonly, nonatomic) double playbackStartOffset;
@property (readonly, nonatomic) double segmentsDownloadedDuration;
@property (readonly, nonatomic) double durationWatched;
@property (readonly, nonatomic) int numberOfStalls;
@property (readonly, nonatomic) long long numberOfBytesTransferred;
@property (readonly, nonatomic) double observedBitrate;
@property (readonly, nonatomic) double indicatedBitrate;
@property (readonly, nonatomic) int numberOfDroppedVideoFrames;

- (NSObject *)_initWithAVItemAccessLogEvent:(NSObject *)arg0;
- (NSDate *)playbackStartDate;
- (NSString *)URI;
- (NSString *)serverAddress;
- (unsigned int)numberOfServerAddressChanges;
- (NSString *)playbackSessionID;
- (double)playbackStartOffset;
- (double)segmentsDownloadedDuration;
- (double)durationWatched;
- (int)numberOfStalls;
- (long long)numberOfBytesTransferred;
- (double)observedBitrate;
- (double)indicatedBitrate;
- (int)numberOfDroppedVideoFrames;
- (unsigned int)numberOfSegmentsDownloaded;
- (MPMovieAccessLogEvent *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
