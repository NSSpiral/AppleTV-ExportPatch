/* Runtime dump - MPVideoView
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVideoView : UIView
{
    MPAVController * _player;
    double _startTime;
    double _stopTime;
    NSDictionary * _AVURLAssetOptions;
    NSString * _movieSubtitle;
    NSString * _movieTitle;
    unsigned int _scaleMode;
}

@property (weak, nonatomic) MPAVController * player;
@property (retain, nonatomic) NSString * movieSubtitle;
@property (retain, nonatomic) NSString * movieTitle;
@property (nonatomic) double startTime;
@property (nonatomic) double stopTime;
@property (readonly, nonatomic) char canChangeScaleMode;
@property (nonatomic) unsigned int scaleMode;
@property (readonly, nonatomic) unsigned int effectiveScaleMode;
@property (readonly, nonatomic) struct CGRect movieFrame;
@property (readonly, nonatomic) struct CGRect movieContentFrame;
@property (retain, nonatomic) NSDictionary * AVURLAssetOptions;

+ (Class)layerClass;

- (NSString *)movieSubtitle;
- (NSString *)movieTitle;
- (void)setMovieSubtitle:(NSString *)arg0;
- (void)setMovieTitle:(NSString *)arg0;
- (void)_bufferingStateChangedNotification:(NSNotification *)arg0;
- (void)toggleScaleMode:(char)arg0;
- (char)canChangeScaleMode;
- (void)setScaleMode:(unsigned int)arg0;
- (void)setScaleMode:(unsigned int)arg0 animated:(char)arg1;
- (void)_playbackStateChangedNotification:(NSNotification *)arg0;
- (void)setScaleMode:(unsigned int)arg0 duration:(float)arg1;
- (unsigned int)effectiveScaleMode;
- (struct CGRect)movieFrame;
- (struct CGRect)movieContentFrame;
- (NSDictionary *)AVURLAssetOptions;
- (void)setAVURLAssetOptions:(NSDictionary *)arg0;
- (unsigned int)scaleMode;
- (MPVideoView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)startTime;
- (void)setStopTime:(double)arg0;
- (double)stopTime;
- (void)setPlayer:(MPAVController *)arg0;
- (MPAVController *)player;

@end
