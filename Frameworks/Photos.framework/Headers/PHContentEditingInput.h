/* Runtime dump - PHContentEditingInput
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHContentEditingInput : NSObject
{
    long long _sandboxExtensionHandle;
    NSObject<OS_dispatch_queue> * _avAssetIsolationQueue;
    AVAsset * _avAsset;
    int _mediaType;
    unsigned int _mediaSubtypes;
    NSDate * _creationDate;
    CLLocation * _location;
    NSString * _uniformTypeIdentifier;
    PHAdjustmentData * _adjustmentData;
    UIImage * _displaySizeImage;
    NSURL * _fullSizeImageURL;
    int _fullSizeImageOrientation;
    int _baseVersion;
    NSURL * _videoURL;
}

@property int mediaType;
@property unsigned int mediaSubtypes;
@property (copy) NSDate * creationDate;
@property (copy) CLLocation * location;
@property (copy) NSString * uniformTypeIdentifier;
@property (retain) PHAdjustmentData * adjustmentData;
@property (retain) UIImage * displaySizeImage;
@property (copy) NSURL * fullSizeImageURL;
@property int fullSizeImageOrientation;
@property (readonly) AVAsset * avAsset;
@property (nonatomic) int baseVersion;
@property (copy, nonatomic) NSURL * videoURL;

- (AVVideoComposition *)videoComposition;
- (AVAudioMix *)audioMix;
- (unsigned int)mediaSubtypes;
- (void)setMediaSubtypes:(unsigned int)arg0;
- (void)setDisplaySizeImage:(UIImage *)arg0;
- (void)setFullSizeImageOrientation:(int)arg0;
- (void)consumeSandboxExtensionToken:(NSString *)arg0;
- (void)requestFullSizeImageURLWithCompletionHandler:(id /* block */)arg0;
- (UIImage *)displaySizeImage;
- (int)fullSizeImageOrientation;
- (void)_invalidateAVAsset;
- (void)loadFullSizeImageDataWithCompletionHandler:(id /* block */)arg0;
- (id)imagePreview;
- (void)dealloc;
- (PHContentEditingInput *)init;
- (NSString *)description;
- (CLLocation *)location;
- (void).cxx_destruct;
- (NSURL *)videoURL;
- (void)setVideoURL:(NSURL *)arg0;
- (NSDate *)creationDate;
- (void)setAdjustmentData:(PHAdjustmentData *)arg0;
- (AVAsset *)avAsset;
- (char)isMediaSubtype:(unsigned int)arg0;
- (NSString *)uniformTypeIdentifier;
- (void)setLocation:(CLLocation *)arg0;
- (void)setUniformTypeIdentifier:(NSString *)arg0;
- (PHAdjustmentData *)adjustmentData;
- (void)setCreationDate:(NSDate *)arg0;
- (int)mediaType;
- (void)setMediaType:(int)arg0;
- (NSURL *)fullSizeImageURL;
- (void)setFullSizeImageURL:(NSURL *)arg0;
- (int)baseVersion;
- (void)setBaseVersion:(int)arg0;

@end
