/* Runtime dump - AVAssetWriterUnknownHelper
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper
{
    short _alternateGroupID;
}

- (void)setPreferredTransform:(struct CGAffineTransform)arg0;
- (void)setPreferredVolume:(float)arg0;
- (void)setMovieFragmentInterval:(struct ?)arg0;
- (void)setDirectoryForTemporaryFiles:(NSURL *)arg0;
- (void)setMovieTimeScale:(int)arg0;
- (void)setPreferredRate:(float)arg0;
- (AVAssetWriterUnknownHelper *)initWithURL:(NSString *)arg0 fileType:(NSObject *)arg1;
- (char)canAddInput:(NSObject *)arg0;
- (void)addInput:(NSObject *)arg0;
- (char)canAddInputGroup:(NSObject *)arg0;
- (void)addInputGroup:(NSObject *)arg0;
- (void)cancelWriting;
- (AVAssetWriterUnknownHelper *)initWithConfigurationState:(AVAssetWriterConfigurationState *)arg0;
- (char)_canAddInput:(NSObject *)arg0 exceptionReason:(id *)arg1;
- (char)_canAddInputGroup:(NSObject *)arg0 exceptionReason:(id *)arg1;
- (int)status;
- (void)startWriting;
- (void)setMetadata:(NSDictionary *)arg0;
- (void)setShouldOptimizeForNetworkUse:(char)arg0;

@end
