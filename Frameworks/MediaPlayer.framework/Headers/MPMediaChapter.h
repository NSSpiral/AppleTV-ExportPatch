/* Runtime dump - MPMediaChapter
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaChapter : NSObject
{
    int _chapterType;
    unsigned int _indexInChaptersWithAnyType;
    unsigned int _indexInChaptersWithSameType;
    double _playbackDuration;
    double _playbackTime;
    id _value;
    id _valueLoader;
    MPMediaLibraryArtworkRequest * _artworkRequest;
    MPMediaLibraryArtworkDataSource * _artworkDataSource;
}

@property (nonatomic) int chapterType;
@property (retain, nonatomic) id value;
@property (nonatomic) double playbackTime;
@property (nonatomic) double playbackDuration;
@property (copy, nonatomic) id valueLoader;
@property (nonatomic) unsigned int indexInChaptersWithSameType;
@property (nonatomic) unsigned int indexInChaptersWithAnyType;
@property (retain, nonatomic) MPMediaLibraryArtworkRequest * artworkRequest;
@property (weak, nonatomic) MPMediaLibraryArtworkDataSource * artworkDataSource;

- (MPArtworkCatalog *)artworkCatalog;
- (MPMediaLibraryArtworkDataSource *)artworkDataSource;
- (int)chapterType;
- (double)playbackTime;
- (unsigned int)indexInChaptersWithAnyType;
- (unsigned int)indexInChaptersWithSameType;
- (double)playbackDuration;
- (int)_sortByChapterIndex:(NSObject *)arg0;
- (void)setArtworkRequest:(MPMediaLibraryArtworkRequest *)arg0;
- (void)setArtworkDataSource:(MPMediaLibraryArtworkDataSource *)arg0;
- (void)setChapterType:(int)arg0;
- (void)setIndexInChaptersWithSameType:(unsigned int)arg0;
- (void)setIndexInChaptersWithAnyType:(unsigned int)arg0;
- (void)setPlaybackTime:(double)arg0;
- (void)setPlaybackDuration:(double)arg0;
- (void)setValueLoader:(id)arg0;
- (id)valueLoader;
- (MPMediaLibraryArtworkRequest *)artworkRequest;
- (MPMediaChapter *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (double)duration;
- (NSString *)title;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (void).cxx_destruct;

@end
