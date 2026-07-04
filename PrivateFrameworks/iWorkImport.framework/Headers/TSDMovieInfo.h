/* Runtime dump - TSDMovieInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMovieInfo : TSDMediaInfo <TSDMixing>
{
    TSPData * mMovieData;
    NSURL * mMovieRemoteURL;
    TSPData * mImportedAuxiliaryMovieData;
    TSPData * mAudioOnlyImageData;
    double mStartTime;
    double mEndTime;
    double mPosterTime;
    TSPData * mPosterImageData;
    char mPosterImageGeneratedWithAlphaSupport;
    struct CGSize mNaturalSize;
    unsigned int mLoopOption;
    float mVolume;
    char mAudioOnly;
    char mStreaming;
    TSDMediaStyle * mStyle;
}

@property (retain, nonatomic) TSPData * movieData;
@property (retain, nonatomic) NSURL * movieRemoteURL;
@property (retain, nonatomic) TSPData * importedAuxiliaryMovieData;
@property (retain, nonatomic) TSPData * audioOnlyImageData;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double posterTime;
@property (retain, nonatomic) TSPData * posterImageData;
@property (nonatomic) unsigned int loopOption;
@property (nonatomic) float volume;
@property (nonatomic) char audioOnly;
@property (nonatomic) char streaming;

+ (TSDMovieInfo *)presetKinds;
+ (double)defaultPosterTimeForDuration:(double)arg0;

- (TSDMovieInfo *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct MovieArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct MovieArchive *)arg0 unarchiver:(struct MovieArchive)arg1;
- (NSString *)presetKind;
- (int)intValueForProperty:(int)arg0;
- (Class)styleClass;
- (char)containsProperty:(int)arg0;
- (float)floatValueForProperty:(int)arg0;
- (Class)repClass;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0;
- (Class)layoutClass;
- (id)animationFilters;
- (TSDMovieInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1;
- (NSObject *)localizedChunkNameForTextureDeliveryStyle:(unsigned int)arg0 animationFilter:(NSString *)arg1 chunkIndex:(unsigned int)arg2;
- (char)supportsHyperlinks;
- (TSDMovieInfo *)subclassInitFromUnarchiver:(NSObject *)arg0;
- (char)supportsAttachedComments;
- (char)canChangeWrapType;
- (TSDMovieInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1 style:(NSObject *)arg2;
- (NSSet *)styleIdentifierTemplateForNewPreset;
- (NSString *)mediaDisplayName;
- (struct CGSize)rawDataSize;
- (void)p_setPropertiesFromLoadedAsset:(NSSet *)arg0;
- (TSPData *)movieData;
- (NSURL *)movieRemoteURL;
- (NSDictionary *)makeAVAssetWithOptions:(NSDictionary *)arg0;
- (NSSet *)makeAVAsset;
- (NSSet *)makePosterImageGeneratorWithAVAsset:(NSSet *)arg0;
- (NSString *)generateEmptyPosterImageForContext:(NSObject *)arg0;
- (TSPData *)posterImageData;
- (double)doubleValueForProperty:(int)arg0;
- (unsigned int)loopOption;
- (void)setMovieData:(TSPData *)arg0;
- (void)setMovieRemoteURL:(NSURL *)arg0;
- (TSPData *)importedAuxiliaryMovieData;
- (void)setImportedAuxiliaryMovieData:(TSPData *)arg0;
- (TSPData *)audioOnlyImageData;
- (void)setAudioOnlyImageData:(TSPData *)arg0;
- (void)setPosterTime:(double)arg0;
- (TSDMovieInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1 style:(NSObject *)arg2 movieData:(TSPData *)arg3 loadedAsset:(NSSet *)arg4;
- (TSDMovieInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1 style:(NSObject *)arg2 movieRemoteURL:(NSURL *)arg3 loadedAsset:(NSSet *)arg4;
- (void)setPosterImageData:(TSPData *)arg0;
- (void)setStreaming:(char)arg0;
- (void)setLoopOption:(unsigned int)arg0;
- (NSString *)synchronouslyGenerateDefaultPosterImageForContext:(NSObject *)arg0;
- (AVMediaFileType *)mediaFileType;
- (void)acceptVisitor:(NSObject *)arg0;
- (void)setEndTime:(double)arg0;
- (void)dealloc;
- (NSObject *)objectForProperty:(int)arg0;
- (void)setStartTime:(double)arg0;
- (NSDictionary *)style;
- (void)setStyle:(TSSStyle *)arg0;
- (double)startTime;
- (double)posterTime;
- (char)isStreaming;
- (char)isAudioOnly;
- (double)endTime;
- (float)volume;
- (void)setVolume:(float)arg0;
- (void)setAudioOnly:(char)arg0;

@end
