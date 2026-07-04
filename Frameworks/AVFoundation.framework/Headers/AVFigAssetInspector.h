/* Runtime dump - AVFigAssetInspector
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigAssetInspector : AVAssetInspector
{
    struct OpaqueFigAsset * _figAsset;
    struct OpaqueFigFormatReader * _formatReader;
    long _formatReaderOnce;
    char didCheckForSaveRestriction;
    char hasSaveRestriction;
}

@property (readonly, nonatomic) struct OpaqueFigAsset * figAsset;
@property (readonly, nonatomic) struct OpaqueFigFormatReader * formatReader;
@property (readonly, nonatomic) NSURL * URL;
@property (readonly, nonatomic) NSArray * figChapterGroupInfo;
@property (readonly, nonatomic) NSArray * figChapters;
@property (readonly, nonatomic) NSURL * resolvedURL;
@property (readonly, nonatomic) char hasProtectedContent;
@property (readonly, nonatomic) char streaming;
@property (readonly, nonatomic) unsigned long long downloadToken;

- (struct OpaqueFigAsset *)_figAsset;
- (float)preferredRate;
- (float)preferredVolume;
- (float)preferredSoundCheckVolumeNormalization;
- (int)naturalTimeScale;
- (char)providesPreciseDurationAndTiming;
- (NSArray *)alternateTrackGroups;
- (NSArray *)mediaSelectionGroups;
- (NSArray *)availableMetadataFormats;
- (NSString *)metadataForFormat:(NSString *)arg0;
- (char)isExportable;
- (char)isComposable;
- (char)canContainMovieFragments;
- (char)containsMovieFragments;
- (struct OpaqueFigFormatReader *)_formatReader;
- (NSArray *)figChapterGroupInfo;
- (NSArray *)figChapters;
- (NSData *)SHA1Digest;
- (char)_hasQTSaveRestriction;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg0;
- (AVFigAssetInspector *)initWithFigAsset:(struct OpaqueFigAsset *)arg0;
- (NSDictionary *)trackReferences;
- (char)_isStreaming;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (struct ?)duration;
- (NSURL *)URL;
- (struct CGSize)naturalSize;
- (NSDate *)creationDate;
- (unsigned long long)downloadToken;
- (NSString *)lyrics;
- (char)hasProtectedContent;
- (long)trackCount;
- (char)isReadable;
- (char)isCompatibleWithSavedPhotosAlbum;
- (struct CGAffineTransform)preferredTransform;
- (NSArray *)commonMetadata;
- (char)isPlayable;
- (NSObject *)propertyListForProxy;
- (void)finalize;
- (NSURL *)resolvedURL;

@end
