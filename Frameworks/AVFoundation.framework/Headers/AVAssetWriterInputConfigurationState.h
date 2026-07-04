/* Runtime dump - AVAssetWriterInputConfigurationState
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputConfigurationState : NSObject
{
    NSString * _mediaType;
    AVOutputSettings * _outputSettings;
    struct opaqueCMFormatDescription * _sourceFormatHint;
    NSDictionary * _sourcePixelBufferAttributes;
    char _attachedToPixelBufferAdaptor;
    NSArray * _metadataItems;
    struct CGAffineTransform _transform;
    int _mediaTimeScale;
    char _expectsMediaDataInRealTime;
    struct CGSize _naturalSize;
    NSString * _languageCode;
    NSString * _extendedLanguageTag;
    char _marksOutputTrackAsEnabled;
    float _preferredVolume;
    int _layer;
    short _alternateGroupID;
    NSDictionary * _trackReferences;
    char _performsMultiPassEncodingIfSupported;
    struct ? _chunkDuration;
    int _chunkAlignment;
    int _chunkSize;
    NSURL * _sampleReferenceBaseURL;
}

@property (copy, nonatomic) NSString * mediaType;
@property (copy, nonatomic) AVOutputSettings * outputSettings;
@property (retain, nonatomic) struct opaqueCMFormatDescription * sourceFormatHint;
@property (copy, nonatomic) NSDictionary * sourcePixelBufferAttributes;
@property (nonatomic) char attachedToPixelBufferAdaptor;
@property (copy, nonatomic) NSArray * metadataItems;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) int mediaTimeScale;
@property (nonatomic) char expectsMediaDataInRealTime;
@property (nonatomic) struct CGSize naturalSize;
@property (copy, nonatomic) NSString * languageCode;
@property (copy, nonatomic) NSString * extendedLanguageTag;
@property (nonatomic) char marksOutputTrackAsEnabled;
@property (nonatomic) float preferredVolume;
@property (nonatomic) int layer;
@property (nonatomic) short alternateGroupID;
@property (copy, nonatomic) NSDictionary * trackReferences;
@property (nonatomic) char performsMultiPassEncodingIfSupported;
@property (nonatomic) struct ? preferredMediaChunkDuration;
@property (nonatomic) int preferredMediaChunkAlignment;
@property (nonatomic) int preferredMediaChunkSize;
@property (copy, nonatomic) NSURL * sampleReferenceBaseURL;

- (void)setExtendedLanguageTag:(NSString *)arg0;
- (float)preferredVolume;
- (short)alternateGroupID;
- (void)setNaturalSize:(struct CGSize)arg0;
- (void)setPreferredVolume:(float)arg0;
- (void)setAlternateGroupID:(short)arg0;
- (NSArray *)metadataItems;
- (void)setMetadataItems:(NSArray *)arg0;
- (struct opaqueCMFormatDescription *)sourceFormatHint;
- (void)setMarksOutputTrackAsEnabled:(char)arg0;
- (char)expectsMediaDataInRealTime;
- (char)marksOutputTrackAsEnabled;
- (void)setSourceFormatHint:(struct opaqueCMFormatDescription *)arg0;
- (NSDictionary *)sourcePixelBufferAttributes;
- (void)setSourcePixelBufferAttributes:(NSDictionary *)arg0;
- (char)attachedToPixelBufferAdaptor;
- (void)setAttachedToPixelBufferAdaptor:(char)arg0;
- (int)mediaTimeScale;
- (void)setMediaTimeScale:(int)arg0;
- (void)setExpectsMediaDataInRealTime:(char)arg0;
- (void)setTrackReferences:(NSDictionary *)arg0;
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
- (NSDictionary *)trackReferences;
- (void)dealloc;
- (int)layer;
- (void)setTransform:(struct CGAffineTransform)arg0;
- (void)setLayer:(int)arg0;
- (struct CGAffineTransform)transform;
- (NSString *)languageCode;
- (struct CGSize)naturalSize;
- (AVOutputSettings *)outputSettings;
- (void)setOutputSettings:(AVOutputSettings *)arg0;
- (void)setLanguageCode:(NSString *)arg0;
- (NSString *)mediaType;
- (void)setMediaType:(NSString *)arg0;
- (NSString *)extendedLanguageTag;

@end
