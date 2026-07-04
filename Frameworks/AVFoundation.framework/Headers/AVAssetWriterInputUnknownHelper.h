/* Runtime dump - AVAssetWriterInputUnknownHelper
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper

+ (AVAssetWriterInputUnknownHelper *)keyPathsForValuesAffectingCanPerformMultiplePasses;

- (void)setExtendedLanguageTag:(NSString *)arg0;
- (void)setNaturalSize:(struct CGSize)arg0;
- (void)setPreferredVolume:(float)arg0;
- (void)setAlternateGroupID:(short)arg0;
- (AVAssetWriterInputUnknownHelper *)initWithConfigurationState:(AVAssetWriterInputConfigurationState *)arg0;
- (void)setMarksOutputTrackAsEnabled:(char)arg0;
- (void)setSourcePixelBufferAttributes:(NSDictionary *)arg0;
- (void)setMediaTimeScale:(int)arg0;
- (void)setExpectsMediaDataInRealTime:(char)arg0;
- (void)setPerformsMultiPassEncodingIfSupported:(char)arg0;
- (void)setPreferredMediaChunkDuration:(struct ?)arg0;
- (void)setPreferredMediaChunkAlignment:(int)arg0;
- (void)setPreferredMediaChunkSize:(int)arg0;
- (void)setSampleReferenceBaseURL:(NSURL *)arg0;
- (AVAssetWriterInputUnknownHelper *)initWithMediaType:(NSObject *)arg0 outputSettings:(NSDictionary *)arg1 sourceFormatHint:(struct opaqueCMFormatDescription *)arg2;
- (char)canPerformMultiplePasses;
- (char)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg0;
- (char)canAddTrackAssociationWithTrackOfInput:(NSObject *)arg0 type:(NSObject *)arg1;
- (void)addTrackAssociationWithTrackOfInput:(NSObject *)arg0 type:(NSObject *)arg1;
- (char)_validateLanguageCode:(id)arg0;
- (char)_canAddTrackAssociationWithTrackOfInput:(NSObject *)arg0 type:(NSObject *)arg1 exceptionReason:(id *)arg2;
- (void)setTransform:(struct CGAffineTransform)arg0;
- (void)setLayer:(int)arg0;
- (int)status;
- (void)setLanguageCode:(NSString *)arg0;
- (void)setMetadata:(NSDictionary *)arg0;

@end
