/* Runtime dump - NetflixMovieAccessLogEvent
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface NetflixMovieAccessLogEvent : NSObject
{
    int numberOfStalls_;
    int numberOfSegmentsDownloaded_;
    double indicatedBitrate_;
    double observedBitrate_;
    long long numberOfBytesTransferred_;
    double durationWatched_;
    double segmentsDownloadedDuration_;
}

@property (nonatomic) double indicatedBitrate;
@property (nonatomic) double observedBitrate;
@property (nonatomic) int numberOfStalls;
@property (nonatomic) long long numberOfBytesTransferred;
@property (nonatomic) double durationWatched;
@property (nonatomic) int numberOfSegmentsDownloaded;
@property (nonatomic) double segmentsDownloadedDuration;

- (void)setNumberOfSegmentsDownloaded:(int)arg0;
- (void)setSegmentsDownloadedDuration:(double)arg0;
- (void)setDurationWatched:(double)arg0;
- (void)setNumberOfStalls:(int)arg0;
- (void)setNumberOfBytesTransferred:(long long)arg0;
- (void)setObservedBitrate:(double)arg0;
- (void)setIndicatedBitrate:(double)arg0;
- (double)segmentsDownloadedDuration;
- (double)durationWatched;
- (int)numberOfStalls;
- (long long)numberOfBytesTransferred;
- (double)observedBitrate;
- (double)indicatedBitrate;
- (int)numberOfSegmentsDownloaded;

@end
