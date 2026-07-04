/* Runtime dump - AVAssetWriterInputHelper
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputHelper : NSObject
{
    AVAssetWriterInputConfigurationState * _configurationState;
    AVWeakReference * _weakReferenceToAssetWriterInput;
}

@property (readonly, nonatomic) AVAssetWriterInputConfigurationState * configurationState;
@property (retain) AVWeakReference * weakReferenceToAssetWriterInput;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic) NSString * mediaType;
@property (readonly, nonatomic) AVOutputSettings * outputSettings;
@property (readonly, nonatomic) struct opaqueCMFormatDescription * sourceFormatHint;
@property (nonatomic) struct CGAffineTransform transform;
@property (copy, nonatomic) NSArray * metadata;
@property (nonatomic) int mediaTimeScale;
@property (readonly, nonatomic) char readyForMoreMediaData;
@property (nonatomic) char expectsMediaDataInRealTime;
@property (nonatomic) struct CGSize naturalSize;
@property (copy, nonatomic) NSString * languageCode;
@property (copy, nonatomic) NSString * extendedLanguageTag;
@property (nonatomic) char marksOutputTrackAsEnabled;
@property (nonatomic) float preferredVolume;
@property (nonatomic) int layer;
@property (nonatomic) short alternateGroupID;
@property (readonly, nonatomic) NSDictionary * trackReferences;
@property (nonatomic) char performsMultiPassEncodingIfSupported;
@property (readonly, nonatomic) char canPerformMultiplePasses;
@property (readonly, nonatomic) AVAssetWriterInputPassDescription * currentPassDescription;
@property (readonly, nonatomic) char shouldRespondToInitialPassDescription;
@property (nonatomic) struct ? preferredMediaChunkDuration;
@property (nonatomic) int preferredMediaChunkAlignment;
@property (nonatomic) int preferredMediaChunkSize;
@property (copy, nonatomic) NSURL * sampleReferenceBaseURL;
@property (copy, nonatomic) NSDictionary * sourcePixelBufferAttributes;
@property (readonly, nonatomic) struct __CVPixelBufferPool * pixelBufferPool;

- (void)setExtendedLanguageTag:(NSString *)arg0;
- (float)preferredVolume;
- (short)alternateGroupID;
- (NSArray *)availableTrackAssociationTypes;
- (void)setNaturalSize:(struct CGSize)arg0;
- (void)setPreferredVolume:(float)arg0;
- (void)setAlternateGroupID:(short)arg0;
- (AVAssetWriterInputHelper *)initWithConfigurationState:(AVAssetWriterInputConfigurationState *)arg0;
- (struct opaqueCMFormatDescription *)sourceFormatHint;
- (void)setMarksOutputTrackAsEnabled:(char)arg0;
- (char)expectsMediaDataInRealTime;
- (char)marksOutputTrackAsEnabled;
- (NSDictionary *)sourcePixelBufferAttributes;
- (void)setSourcePixelBufferAttributes:(NSDictionary *)arg0;
- (int)mediaTimeScale;
- (void)setMediaTimeScale:(int)arg0;
- (void)setExpectsMediaDataInRealTime:(char)arg0;
- (char)performsMultiPassEncodingIfSupported;
- (void)setPerformsMultiPassEncodingIfSupported:(char)arg0;
- (struct ?)preferredMediaChunkDuration;
- (void)setPreferredMediaChunkDuration:(struct ?)arg0;
- (int)preferredMediaChunkAlignment;
- (void)setPreferredMediaChunkAlignment:(int)arg0;
- (int)preferredMediaChunkSize;
- (void)setPreferredMediaChunkSize:(int)arg0;
- (NSURL *)sampleReferenceBaseURL;
- (void)setSampleReferenceBaseURL:(NSURL *)arg0;
- (void)setWeakReferenceToAssetWriterInput:(AVWeakReference *)arg0;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (void)didStartInitialSession;
- (void)prepareToEndSession;
- (char)prepareToFinishWritingReturningError:(id *)arg0;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(int)arg0;
- (char)isReadyForMoreMediaData;
- (char)canPerformMultiplePasses;
- (AVAssetWriterInputPassDescription *)currentPassDescription;
- (char)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg0;
- (char)shouldRespondToInitialPassDescription;
- (void)requestMediaDataWhenReadyOnQueue:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
- (char)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (char)appendPixelBuffer:(struct __CVBuffer *)arg0 withPresentationTime:(struct ?)arg1;
- (void)markCurrentPassAsFinished;
- (char)canAddTrackAssociationWithTrackOfInput:(NSObject *)arg0 type:(NSObject *)arg1;
- (void)addTrackAssociationWithTrackOfInput:(NSObject *)arg0 type:(NSObject *)arg1;
- (NSObject *)associatedInputsWithTrackAssociationType:(NSObject *)arg0;
- (AVWeakReference *)weakReferenceToAssetWriterInput;
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(NSError *)arg0;
- (NSDictionary *)trackReferences;
- (void)dealloc;
- (int)layer;
- (NSString *)description;
- (void)setTransform:(struct CGAffineTransform)arg0;
- (void)setLayer:(int)arg0;
- (struct CGAffineTransform)transform;
- (NSString *)languageCode;
- (struct CGSize)naturalSize;
- (int)status;
- (AVOutputSettings *)outputSettings;
- (void)setLanguageCode:(NSString *)arg0;
- (void)markAsFinished;
- (AVAssetWriterInputConfigurationState *)configurationState;
- (void)setMetadata:(NSArray *)arg0;
- (NSArray *)metadata;
- (NSString *)mediaType;
- (int)trackID;
- (NSString *)extendedLanguageTag;

@end
