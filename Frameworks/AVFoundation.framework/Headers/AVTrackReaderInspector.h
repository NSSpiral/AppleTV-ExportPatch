/* Runtime dump - AVTrackReaderInspector
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVTrackReaderInspector : AVAssetTrackInspector
{
    struct OpaqueFigFormatReader * _formatReader;
    struct OpaqueFigTrackReader * _trackReader;
    int _trackID;
    unsigned long _mediaType;
    AVWeakReference * _weakReferenceToAsset;
}

- (float)preferredVolume;
- (int)naturalTimeScale;
- (NSArray *)availableMetadataFormats;
- (NSString *)metadataForFormat:(NSString *)arg0;
- (NSSet *)_initWithAsset:(NSSet *)arg0 trackID:(int)arg1 trackIndex:(long)arg2;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (char)isSelfContained;
- (char)requiresFrameReordering;
- (float)estimatedDataRate;
- (NSDictionary *)loudnessInfo;
- (struct ?)minSampleDuration;
- (NSArray *)segments;
- (id)segmentForTrackTime:(struct ?)arg0;
- (int)alternateGroupID;
- (char)isExcludedFromAutoselectionInTrackGroup;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg0;
- (unsigned long)_figMediaType;
- (void)dealloc;
- (int)layer;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (char)isEnabled;
- (NSSet *)asset;
- (struct CGSize)dimensions;
- (NSString *)languageCode;
- (struct CGSize)naturalSize;
- (NSArray *)formatDescriptions;
- (struct ?)timeRange;
- (struct CGAffineTransform)preferredTransform;
- (float)nominalFrameRate;
- (NSArray *)commonMetadata;
- (unsigned long)mediaType;
- (int)trackID;
- (NSString *)extendedLanguageTag;
- (void)finalize;
- (long long)totalSampleDataLength;

@end
