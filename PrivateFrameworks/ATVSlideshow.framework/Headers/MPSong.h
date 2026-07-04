/* Runtime dump - MPSong
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPSong : NSObject <NSCoding, NSCopying>
{
    NSString * _path;
    MCSong * _song;
    MPAudioPlaylist * _parentPlaylist;
    MPSongInternal * _internal;
}

@property (nonatomic) float audioVolume;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString * path;
@property (copy, nonatomic) NSURL * URL;

+ (MPSong *)songWithPath:(NSString *)arg0;
+ (MPSong *)songWithURL:(NSURL *)arg0;
+ (MCSong *)song;

- (double)maxDuration;
- (void)dealloc;
- (MPSong *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPSong *)init;
- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void)setStartTime:(double)arg0;
- (NSString *)path;
- (MPSong *)copyWithZone:(struct _NSZone *)arg0;
- (NSURL *)URL;
- (int)index;
- (void)setPath:(NSString *)arg0;
- (void)setURL:(NSURL *)arg0;
- (MPSong *)initWithPath:(NSString *)arg0;
- (double)startTime;
- (double)fadeOutDuration;
- (void)setFadeInDuration:(double)arg0;
- (void)setFadeOutDuration:(double)arg0;
- (double)fadeInDuration;
- (MPDocument *)parentDocument;
- (void)setParentPlaylist:(MPAudioPlaylist *)arg0;
- (void)copyStruct:(id)arg0;
- (void)setAudioVolume:(float)arg0;
- (float)audioVolume;
- (MPAudioPlaylist *)parentPlaylist;
- (void)setInternalDuration;
- (void)setInternalStartTime;
- (double)stopTime;
- (void)setSong:(MCSong *)arg0;
- (MCSong *)song;

@end
