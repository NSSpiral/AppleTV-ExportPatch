/* Runtime dump - AVAssetInspector
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetInspector : AVFigObjectInspector <NSCopying>

@property (readonly, nonatomic) struct ? duration;
@property (readonly, nonatomic) float preferredRate;
@property (readonly, nonatomic) float preferredVolume;
@property (readonly, nonatomic) float preferredSoundCheckVolumeNormalization;
@property (readonly, nonatomic) struct CGAffineTransform preferredTransform;
@property (readonly, nonatomic) struct CGSize naturalSize;
@property (readonly, nonatomic) int naturalTimeScale;
@property (readonly, nonatomic) char providesPreciseDurationAndTiming;
@property (readonly, nonatomic) long trackCount;
@property (readonly, nonatomic) NSArray * trackIDs;
@property (readonly, nonatomic) NSArray * alternateTrackGroups;
@property (readonly, nonatomic) NSDictionary * trackReferences;
@property (readonly, nonatomic) NSArray * mediaSelectionGroups;
@property (readonly, nonatomic) AVMetadataItem * creationDate;
@property (readonly, nonatomic) NSString * lyrics;
@property (readonly, nonatomic) NSArray * commonMetadata;
@property (readonly, nonatomic) NSArray * availableMetadataFormats;
@property (readonly, nonatomic) char playable;
@property (readonly, nonatomic) char exportable;
@property (readonly, nonatomic) char readable;
@property (readonly, nonatomic) char composable;
@property (readonly, nonatomic) char compatibleWithSavedPhotosAlbum;
@property (readonly, nonatomic) NSData * SHA1Digest;
@property (readonly, nonatomic) char canContainMovieFragments;
@property (readonly, nonatomic) char containsMovieFragments;
@property (readonly, nonatomic) id propertyListForProxy;

- (float)preferredRate;
- (float)preferredVolume;
- (float)preferredSoundCheckVolumeNormalization;
- (int)naturalTimeScale;
- (char)providesPreciseDurationAndTiming;
- (NSArray *)alternateTrackGroups;
- (NSArray *)trackIDs;
- (NSArray *)mediaSelectionGroups;
- (NSArray *)availableMetadataFormats;
- (NSString *)metadataForFormat:(NSString *)arg0;
- (char)isExportable;
- (char)isComposable;
- (char)canContainMovieFragments;
- (char)containsMovieFragments;
- (NSData *)SHA1Digest;
- (NSDictionary *)trackReferences;
- (struct ?)duration;
- (AVAssetInspector *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGSize)naturalSize;
- (AVMetadataItem *)creationDate;
- (NSString *)lyrics;
- (char)hasProtectedContent;
- (long)trackCount;
- (char)isReadable;
- (char)isCompatibleWithSavedPhotosAlbum;
- (struct CGAffineTransform)preferredTransform;
- (NSArray *)commonMetadata;
- (char)isPlayable;
- (NSObject *)propertyListForProxy;

@end
