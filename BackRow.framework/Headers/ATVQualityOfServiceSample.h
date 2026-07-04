/* Runtime dump - ATVQualityOfServiceSample
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVQualityOfServiceSample : NSObject
{
    int _numberOfSegmentsDownloaded;
    NSString * _serverAddress;
    int _numberOfServerAddressChanges;
    NSString * _URI;
    int _numberOfStalls;
    int _numberOfDroppedVideoFrames;
    double _segmentsDownloadedDuration;
    double _durationWatched;
    long long _numberOfBytesTransferred;
    double _observedBitrate;
    double _indicatedBitrate;
}

@property (nonatomic) int numberOfSegmentsDownloaded;
@property (retain, nonatomic) NSString * serverAddress;
@property (nonatomic) int numberOfServerAddressChanges;
@property (retain, nonatomic) NSString * URI;
@property (nonatomic) double segmentsDownloadedDuration;
@property (nonatomic) double durationWatched;
@property (nonatomic) int numberOfStalls;
@property (nonatomic) long long numberOfBytesTransferred;
@property (nonatomic) double observedBitrate;
@property (nonatomic) double indicatedBitrate;
@property (nonatomic) int numberOfDroppedVideoFrames;

- (void)setNumberOfSegmentsDownloaded:(int)arg0;
- (void)setNumberOfServerAddressChanges:(int)arg0;
- (void)setSegmentsDownloadedDuration:(double)arg0;
- (void)setDurationWatched:(double)arg0;
- (void)setNumberOfStalls:(int)arg0;
- (void)setNumberOfBytesTransferred:(long long)arg0;
- (void)setObservedBitrate:(double)arg0;
- (void)setIndicatedBitrate:(double)arg0;
- (void)setNumberOfDroppedVideoFrames:(int)arg0;
- (void)setURI:(NSSet *)arg0;
- (NSString *)URI;
- (NSString *)serverAddress;
- (int)numberOfServerAddressChanges;
- (double)segmentsDownloadedDuration;
- (double)durationWatched;
- (int)numberOfStalls;
- (long long)numberOfBytesTransferred;
- (double)observedBitrate;
- (double)indicatedBitrate;
- (int)numberOfDroppedVideoFrames;
- (int)numberOfSegmentsDownloaded;
- (void)setServerAddress:(NSString *)arg0;
- (void)dealloc;

@end
