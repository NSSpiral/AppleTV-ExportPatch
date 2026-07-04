/* Runtime dump - AVAssetReaderOutputMetadataAdaptor
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderOutputMetadataAdaptor : NSObject
{
    AVAssetReaderOutputMetadataAdaptorInternal * _internal;
}

@property (readonly, nonatomic) AVAssetReaderTrackOutput * assetReaderTrackOutput;

+ (AVAssetReaderOutputMetadataAdaptor *)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:(AVAssetReaderTrackOutput *)arg0;

- (AVAssetReaderOutputMetadataAdaptor *)initWithAssetReaderTrackOutput:(AVAssetReaderTrackOutput *)arg0;
- (AVAssetReaderTrackOutput *)assetReaderTrackOutput;
- (NSObject *)nextTimedMetadataGroup;
- (void)dealloc;
- (AVAssetReaderOutputMetadataAdaptor *)init;
- (void)finalize;

@end
