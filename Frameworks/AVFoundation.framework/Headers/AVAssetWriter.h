/* Runtime dump - AVAssetWriter
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriter : NSObject
{
    AVAssetWriterInternal * _internal;
}

@property (readonly, copy, nonatomic) NSURL * outputURL;
@property (readonly, copy, nonatomic) NSString * outputFileType;
@property (readonly, nonatomic) NSArray * availableMediaTypes;
@property (readonly) int status;
@property (readonly) NSError * error;
@property (copy, nonatomic) NSArray * metadata;
@property (nonatomic) char shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSURL * directoryForTemporaryFiles;
@property (readonly, nonatomic) NSArray * inputs;
@property (readonly, retain) AVAssetWriterHelper * helper;

+ (AVAssetWriter *)_errorForOSStatus:(long)arg0;
+ (AVAssetWriter *)assetWriterWithURL:(NSString *)arg0 fileType:(NSObject *)arg1 error:(id *)arg2;
+ (AVAssetWriter *)keyPathsForValuesAffectingStatus;
+ (NSError *)keyPathsForValuesAffectingError;
+ (void)initialize;
+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (NSArray *)inputs;
- (float)preferredRate;
- (float)preferredVolume;
- (void)setPreferredTransform:(struct CGAffineTransform)arg0;
- (void)setPreferredVolume:(float)arg0;
- (struct ?)movieFragmentInterval;
- (void)setMovieFragmentInterval:(struct ?)arg0;
- (char)shouldOptimizeForNetworkUse;
- (NSURL *)directoryForTemporaryFiles;
- (void)setDirectoryForTemporaryFiles:(NSURL *)arg0;
- (int)movieTimeScale;
- (void)setMovieTimeScale:(int)arg0;
- (void)setPreferredRate:(float)arg0;
- (NSArray *)inputGroups;
- (AVAssetWriter *)initWithURL:(NSString *)arg0 fileType:(NSObject *)arg1 error:(id *)arg2;
- (NSURL *)outputURL;
- (NSString *)outputFileType;
- (char)_setHelper:(NSObject *)arg0 ifCurrentHelper:(NSObject *)arg1 withBlock:(id /* block */)arg2;
- (NSArray *)availableMediaTypes;
- (char)canApplyOutputSettings:(NSDictionary *)arg0 forMediaType:(NSObject *)arg1;
- (char)canAddInput:(NSObject *)arg0;
- (void)addInput:(NSObject *)arg0;
- (char)canAddInputGroup:(NSObject *)arg0;
- (void)addInputGroup:(NSObject *)arg0;
- (void)startSessionAtSourceTime:(struct ?)arg0;
- (void)endSessionAtSourceTime:(struct ?)arg0;
- (void)cancelWriting;
- (char)finishWriting;
- (void)finishWritingWithCompletionHandler:(id /* block */)arg0;
- (char)_setHelper:(NSObject *)arg0 ifCurrentHelper:(NSObject *)arg1;
- (char)_supportsSampleReferencesReturningError:(id *)arg0;
- (void)_transitionToFailedStatusWithError:(NSError *)arg0;
- (AVAssetWriterHelper *)_helper;
- (void)dealloc;
- (AVAssetWriter *)init;
- (NSString *)description;
- (int)status;
- (NSError *)error;
- (char)startWriting;
- (void)setMetadata:(NSArray *)arg0;
- (NSArray *)metadata;
- (struct CGAffineTransform)preferredTransform;
- (void)setShouldOptimizeForNetworkUse:(char)arg0;
- (void)finalize;

@end
