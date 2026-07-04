/* Runtime dump - AVAssetWriterHelper
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterHelper : NSObject
{
    AVAssetWriterConfigurationState * _configurationState;
    AVWeakReference * _weakReferenceToAssetWriter;
}

@property (readonly, nonatomic) AVAssetWriterConfigurationState * configurationState;
@property (retain) AVWeakReference * weakReferenceToAssetWriter;
@property (readonly, nonatomic) NSURL * outputURL;
@property (readonly, nonatomic) AVMediaFileType * mediaFileType;
@property (readonly, nonatomic) NSArray * availableMediaTypes;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) NSError * error;
@property (nonatomic) struct ? movieFragmentInterval;
@property (nonatomic) char shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSURL * directoryForTemporaryFiles;
@property (nonatomic) int movieTimeScale;
@property (copy, nonatomic) NSArray * metadata;
@property (nonatomic) struct CGAffineTransform preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic) float preferredRate;
@property (readonly, nonatomic) NSArray * inputs;
@property (readonly, nonatomic) NSArray * inputGroups;

- (NSArray *)inputs;
- (float)preferredRate;
- (float)preferredVolume;
- (void)setPreferredTransform:(struct CGAffineTransform)arg0;
- (void)setPreferredVolume:(float)arg0;
- (AVMediaFileType *)mediaFileType;
- (struct ?)movieFragmentInterval;
- (void)setMovieFragmentInterval:(struct ?)arg0;
- (char)shouldOptimizeForNetworkUse;
- (NSURL *)directoryForTemporaryFiles;
- (void)setDirectoryForTemporaryFiles:(NSURL *)arg0;
- (int)movieTimeScale;
- (void)setMovieTimeScale:(int)arg0;
- (void)setPreferredRate:(float)arg0;
- (NSArray *)inputGroups;
- (void)setWeakReferenceToAssetWriter:(AVWeakReference *)arg0;
- (NSURL *)outputURL;
- (NSArray *)availableMediaTypes;
- (char)canApplyOutputSettings:(NSDictionary *)arg0 forMediaType:(NSObject *)arg1;
- (char)canAddInput:(NSObject *)arg0;
- (void)addInput:(NSObject *)arg0;
- (char)canAddInputGroup:(NSObject *)arg0;
- (void)addInputGroup:(NSObject *)arg0;
- (void)startSessionAtSourceTime:(struct ?)arg0;
- (void)endSessionAtSourceTime:(struct ?)arg0;
- (void)cancelWriting;
- (void)finishWriting;
- (void)finishWritingWithCompletionHandler:(id /* block */)arg0;
- (void)transitionToFailedStatusWithError:(NSError *)arg0;
- (AVAssetWriterHelper *)initWithConfigurationState:(AVAssetWriterConfigurationState *)arg0;
- (char)_canApplyOutputSettings:(NSDictionary *)arg0 forMediaType:(NSObject *)arg1 sourceFormat:(struct opaqueCMFormatDescription *)arg2 exceptionReason:(id *)arg3;
- (char)_canApplyTrackReferences:(id)arg0 exceptionReason:(id *)arg1;
- (AVWeakReference *)weakReferenceToAssetWriter;
- (char)_transitionToClientInitiatedTerminalStatus:(int)arg0;
- (void)dealloc;
- (AVAssetWriterHelper *)init;
- (int)status;
- (NSError *)error;
- (AVAssetWriterConfigurationState *)configurationState;
- (void)startWriting;
- (void)setMetadata:(NSArray *)arg0;
- (NSArray *)metadata;
- (struct CGAffineTransform)preferredTransform;
- (void)setShouldOptimizeForNetworkUse:(char)arg0;

@end
