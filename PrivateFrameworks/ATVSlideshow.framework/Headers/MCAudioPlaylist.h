/* Runtime dump - MCAudioPlaylist
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAudioPlaylist : MCObject
{
    NSMutableSet * mSongs;
    NSArray * mCachedOrderedSongs;
    float mVolume;
    float mDuckLevel;
    MCContainer * mContainer;
    double mFadeInDuration;
    double mFadeOutDuration;
    double mDuckInDuration;
    double mDuckOutDuration;
}

@property (readonly) NSSet * songs;
@property (readonly) NSArray * orderedSongs;
@property (nonatomic) float volume;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) float duckLevel;
@property (nonatomic) double duckInDuration;
@property (nonatomic) double duckOutDuration;
@property MCContainer * container;

+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;

- (MCAudioPlaylist *)init;
- (void)setContainer:(MCContainer *)arg0;
- (MCContainer *)container;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (double)fadeOutDuration;
- (void)setFadeInDuration:(double)arg0;
- (void)setFadeOutDuration:(double)arg0;
- (double)fadeInDuration;
- (double)duckInDuration;
- (void)setDuckInDuration:(double)arg0;
- (double)duckOutDuration;
- (void)setDuckOutDuration:(double)arg0;
- (float)duckLevel;
- (void)setDuckLevel:(float)arg0;
- (NSArray *)insertSongsForAssets:(NSArray *)arg0 atIndex:(unsigned int)arg1;
- (void)removeSongsAtIndices:(id)arg0;
- (void)moveSongsAtIndices:(id)arg0 toIndex:(unsigned int)arg1;
- (NSSet *)songs;
- (void)removeAllSongs;
- (unsigned int)countOfSongs;
- (NSArray *)addSongsForAssets:(NSArray *)arg0;
- (void)demolish;
- (NSArray *)orderedSongs;
- (MCAudioPlaylist *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (NSObject *)songAtIndex:(unsigned int)arg0;
- (NSSet *)addSongForAsset:(NSSet *)arg0;
- (NSSet *)insertSongForAsset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (NSDictionary *)imprint;
- (float)volume;
- (void)setVolume:(float)arg0;

@end
