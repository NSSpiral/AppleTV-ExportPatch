/* Runtime dump - MPTimeMarker
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTimeMarker : NSObject
{
    double _duration;
    unsigned int _index;
    double _time;
    NSString * _title;
    NSURL * _url;
    int _markerType;
    NSDictionary * _metadata;
}

@property (readonly, nonatomic) double comparableTime;
@property (nonatomic) double duration;
@property (nonatomic) unsigned int index;
@property (readonly, nonatomic) char hasArtworkAtPlaybackTime;
@property (nonatomic) double time;
@property (readonly, nonatomic) double maxTime;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSURL * url;
@property (retain, nonatomic) NSDictionary * metadata;
@property (readonly, nonatomic) int markerType;

- (MPTimeMarker *)initWithMarkerType:(int)arg0;
- (int)markerType;
- (double)comparableTime;
- (char)hasArtworkAtPlaybackTime;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (double)duration;
- (NSURL *)url;
- (void)setDuration:(double)arg0;
- (NSString *)title;
- (void)setUrl:(NSURL *)arg0;
- (void)setTime:(double)arg0;
- (double)time;
- (unsigned int)index;
- (void).cxx_destruct;
- (void)setIndex:(unsigned int)arg0;
- (NSSet *)urlTitleTrimmingCharacterSet;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;
- (double)maxTime;

@end
