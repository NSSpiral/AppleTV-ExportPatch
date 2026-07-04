/* Runtime dump - MPArrayQueueItem
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArrayQueueItem : NSObject
{
    MPAVItem * _item;
    NSString * _path;
    double _startTime;
    double _stopTime;
}

@property (readonly, nonatomic) MPAVItem * item;
@property (copy, nonatomic) NSString * path;
@property (nonatomic) double startTime;
@property (nonatomic) double stopTime;

- (MPArrayQueueItem *)initWithMPAVItem:(NSObject *)arg0;
- (MPArrayQueueItem *)init;
- (MPAVItem *)item;
- (void)setStartTime:(double)arg0;
- (NSString *)path;
- (void)setPath:(NSString *)arg0;
- (void).cxx_destruct;
- (double)startTime;
- (void)setStopTime:(double)arg0;
- (double)stopTime;

@end
