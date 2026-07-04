/* Runtime dump - AVFormatReaderInspector
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFormatReaderInspector : AVAssetInspector
{
    struct OpaqueFigFormatReader * _formatReader;
    char didCheckForSaveRestriction;
    char hasSaveRestriction;
}

@property (retain, nonatomic) struct OpaqueFigFormatReader * formatReader;

- (float)preferredRate;
- (float)preferredVolume;
- (float)preferredSoundCheckVolumeNormalization;
- (int)naturalTimeScale;
- (char)providesPreciseDurationAndTiming;
- (NSArray *)alternateTrackGroups;
- (NSArray *)availableMetadataFormats;
- (NSString *)metadataForFormat:(NSString *)arg0;
- (char)isExportable;
- (char)isComposable;
- (char)canContainMovieFragments;
- (char)containsMovieFragments;
- (struct OpaqueFigFormatReader *)_formatReader;
- (AVFormatReaderInspector *)initWithFormatReader:(struct OpaqueFigFormatReader *)arg0;
- (void)_setFormatReader:(struct OpaqueFigFormatReader *)arg0;
- (char)_hasQTSaveRestriction;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg0;
- (NSDictionary *)trackReferences;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (struct ?)duration;
- (struct CGSize)naturalSize;
- (NSString *)lyrics;
- (long)trackCount;
- (char)isReadable;
- (struct CGAffineTransform)preferredTransform;
- (NSArray *)commonMetadata;
- (void)finalize;

@end
