/* Runtime dump - MPAudioPlaylist
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPAudioPlaylist : NSObject <NSCopying, NSCoding>
{
    NSMutableArray * _songs;
    MCAudioPlaylist * _audioPlaylist;
    MCPlug * _plug;
    NSObject<MPAudioSupport> * _parentObject;
    MCMontage * _montage;
    NSMutableDictionary * _attributes;
    MPPlaylistInternal * _internal;
}

@property double fadeInDuration;
@property double fadeOutDuration;
@property double duckInDuration;
@property double duckOutDuration;
@property float duckLevel;

+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;
+ (MCAudioPlaylist *)audioPlaylist;

- (void)dealloc;
- (MPAudioPlaylist *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPAudioPlaylist *)init;
- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (MPAudioPlaylist *)copyWithZone:(struct _NSZone *)arg0;
- (double)fadeOutDuration;
- (void)cleanup;
- (void)setFadeInDuration:(double)arg0;
- (void)setFadeOutDuration:(double)arg0;
- (double)fadeInDuration;
- (MPDocument *)parentDocument;
- (MCMontage *)montage;
- (double)duckInDuration;
- (void)setDuckInDuration:(double)arg0;
- (double)duckOutDuration;
- (void)setDuckOutDuration:(double)arg0;
- (float)duckLevel;
- (void)setDuckLevel:(float)arg0;
- (void)copySongs:(id)arg0;
- (void)copyStruct:(id)arg0;
- (void)insertSongs:(id)arg0 atIndex:(int)arg1;
- (void)removeSongsAtIndices:(id)arg0;
- (MCAudioPlaylist *)audioPlaylist;
- (NSMutableArray *)songs;
- (void)addSong:(MPSong *)arg0;
- (void)addSongs:(id)arg0;
- (void)removeAllSongs;
- (void)moveSongsFromIndices:(id)arg0 toIndex:(int)arg1;
- (NSObject<MPAudioSupport> *)parentObject;
- (int)countOfSongs;
- (void)setMontage:(MCMontage *)arg0;
- (void)setAudioPlaylist:(MCAudioPlaylist *)arg0;
- (void)setPlug:(MCPlug *)arg0;
- (void)setParentObject:(NSObject<MPAudioSupport> *)arg0;
- (NSObject *)objectInSongsAtIndex:(int)arg0;
- (void)insertObject:(NSObject *)arg0 inSongsAtIndex:(int)arg1;
- (void)removeObjectFromSongsAtIndex:(int)arg0;
- (void)replaceObjectInSongsAtIndex:(int)arg0 withObject:(NSObject *)arg1;
- (void)finalize;

@end
