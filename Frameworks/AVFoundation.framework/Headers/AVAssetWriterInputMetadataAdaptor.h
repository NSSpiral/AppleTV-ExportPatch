/* Runtime dump - AVAssetWriterInputMetadataAdaptor
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputMetadataAdaptor : NSObject
{
    AVAssetWriterInputMetadataAdaptorInternal * _internal;
}

@property (readonly, nonatomic) AVAssetWriterInput * assetWriterInput;

+ (AVAssetWriterInputMetadataAdaptor *)assetWriterInputMetadataAdaptorWithAssetWriterInput:(AVAssetWriterInput *)arg0;
+ (void)initialize;

- (AVAssetWriterInputMetadataAdaptor *)initWithAssetWriterInput:(AVAssetWriterInput *)arg0;
- (AVAssetWriterInput *)assetWriterInput;
- (char)appendTimedMetadataGroup:(NSObject *)arg0;
- (void)dealloc;
- (AVAssetWriterInputMetadataAdaptor *)init;
- (NSString *)description;
- (void)finalize;

@end
