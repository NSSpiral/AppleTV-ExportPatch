/* Runtime dump - AVAssetWriterInput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInput : NSObject
{
    AVAssetWriterInputInternal * _internal;
}

@property (readonly, nonatomic) NSString * mediaType;
@property (readonly, nonatomic) NSDictionary * outputSettings;
@property (readonly, nonatomic) struct opaqueCMFormatDescription * sourceFormatHint;
@property (copy, nonatomic) NSArray * metadata;
@property (readonly, nonatomic) char readyForMoreMediaData;
@property (nonatomic) char expectsMediaDataInRealTime;
@property (readonly, nonatomic) AVOutputSettings * outputSettingsObject;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) char attachedToMetadataAdaptor;
@property (retain, nonatomic) AVWeakReference * weakReferenceToAssetWriter;
@property (readonly, nonatomic) int trackID;
@property (nonatomic) short alternateGroupID;
@property (readonly, nonatomic) NSDictionary * trackReferences;
@property (retain, nonatomic) AVAssetWriterInputHelper * helper;
@property (copy, nonatomic) NSDictionary * sourcePixelBufferAttributes;
@property (readonly, nonatomic) struct __CVPixelBufferPool * pixelBufferPool;
@property (nonatomic) char attachedToPixelBufferAdaptor;
@property (readonly) int numberOfAppendFailures;

+ (AVAssetWriterInput *)keyPathsForValuesAffectingStatus;
+ (AVAssetWriterInput *)assetWriterInputWithMediaType:(NSString *)arg0 outputSettings:(NSDictionary *)arg1;
+ (AVAssetWriterInput *)assetWriterInputWithMediaType:(NSString *)arg0 outputSettings:(NSDictionary *)arg1 sourceFormatHint:(struct opaqueCMFormatDescription *)arg2;
+ (NSData *)keyPathsForValuesAffectingReadyForMoreMediaData;
+ (AVAssetWriterInput *)keyPathsForValuesAffectingCanPerformMultiplePasses;
+ (NSString *)keyPathsForValuesAffectingCurrentPassDescription;
+ (void)initialize;

- (void)setExtendedLanguageTag:(NSString *)arg0;
- (float)preferredVolume;
- (char)_isAttachedToMetadataAdaptor;
- (int)_status;
- (void)_attachToMetadataAdaptor:(id)arg0;
- (NSDictionary *)_trackReferences;
- (NSArray *)availableTrackAssociationTypes;
- (void)setNaturalSize:(struct CGSize)arg0;
- (void)setPreferredVolume:(float)arg0;
- (AVOutputSettings *)_outputSettingsObject;
- (struct opaqueCMFormatDescription *)sourceFormatHint;
- (void)_setWeakReferenceToAssetWriter:(NSObject *)arg0;
- (void)setMarksOutputTrackAsEnabled:(char)arg0;
- (void)_setAlternateGroupID:(short)arg0;
- (short)_alternateGroupID;
- (char)expectsMediaDataInRealTime;
- (char)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg0 mediaFileType:(NSObject *)arg1 error:(id *)arg2;
- (int)_trackID;
- (void)_didStartInitialSession;
- (void)_prepareToEndSession;
- (char)_prepareToFinishWritingReturningError:(id *)arg0;
- (void)_transitionToTerminalStatus:(int)arg0;
- (AVWeakReference *)_weakReferenceToAssetWriter;
- (char)marksOutputTrackAsEnabled;
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
- (NSDictionary *)_sourcePixelBufferAttributes;
- (int)numberOfAppendFailures;
- (AVAssetWriterInput *)initWithMediaType:(NSString *)arg0 outputSettings:(NSDictionary *)arg1;
- (AVAssetWriterInput *)initWithMediaType:(NSString *)arg0 outputSettings:(NSDictionary *)arg1 sourceFormatHint:(struct opaqueCMFormatDescription *)arg2;
- (void)_setHelper:(NSObject *)arg0;
- (char)isReadyForMoreMediaData;
- (char)canPerformMultiplePasses;
- (AVAssetWriterInputPassDescription *)currentPassDescription;
- (void)requestMediaDataWhenReadyOnQueue:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
- (char)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (void)markCurrentPassAsFinished;
- (char)canAddTrackAssociationWithTrackOfInput:(NSObject *)arg0 type:(NSObject *)arg1;
- (void)addTrackAssociationWithTrackOfInput:(NSObject *)arg0 type:(NSObject *)arg1;
- (NSObject *)associatedInputsWithTrackAssociationType:(NSObject *)arg0;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(NSError *)arg0;
- (struct __CVPixelBufferPool *)_pixelBufferPool;
- (void)_setSourcePixelBufferAttributes:(NSDictionary *)arg0;
- (char)_isAttachedToPixelBufferAdaptor;
- (void)_setAttachedToPixelBufferAdaptor:(char)arg0;
- (void)respondToEachPassDescriptionOnQueue:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
- (char)_appendPixelBuffer:(struct __CVBuffer *)arg0 withPresentationTime:(struct ?)arg1;
- (AVAssetWriterInputHelper *)_helper;
- (void)dealloc;
- (int)layer;
- (AVAssetWriterInput *)init;
- (NSString *)description;
- (void)setTransform:(struct CGAffineTransform)arg0;
- (void)setLayer:(int)arg0;
- (struct CGAffineTransform)transform;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSString *)languageCode;
- (struct CGSize)naturalSize;
- (NSDictionary *)outputSettings;
- (void)setLanguageCode:(NSString *)arg0;
- (void)markAsFinished;
- (void)setMetadata:(NSArray *)arg0;
- (NSArray *)metadata;
- (NSString *)mediaType;
- (NSString *)extendedLanguageTag;
- (void)finalize;

@end
