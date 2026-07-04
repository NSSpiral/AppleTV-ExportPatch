/* Runtime dump - MPMediaChapterTimeMarker
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaChapterTimeMarker : MPTimeMarker
{
    unsigned int _chapterIndex;
    NSArray * _chapters;
    char _hasArtworkAtPlaybackTime;
}

@property (nonatomic) unsigned int chapterIndex;
@property (retain, nonatomic) NSArray * chapters;
@property (nonatomic) char hasArtworkAtPlaybackTime;

- (char)hasArtworkAtPlaybackTime;
- (void)setChapterIndex:(unsigned int)arg0;
- (void)setHasArtworkAtPlaybackTime:(char)arg0;
- (unsigned int)chapterIndex;
- (void).cxx_destruct;
- (NSArray *)chapters;
- (void)setChapters:(NSArray *)arg0;

@end
