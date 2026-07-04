/* Runtime dump - PHContentEditingOutput
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHContentEditingOutput : NSObject <NSSecureCoding>
{
    PHAdjustmentData * _adjustmentData;
    int _baseVersion;
    char _isSubstandardRender;
    NSURL * _renderedContentURL;
    int _fullSizeRenderWidth;
    int _fullSizeRenderHeight;
    NSData * _penultimateRenderedJPEGData;
    NSURL * _editorBundleURL;
    int _mediaType;
}

@property (retain) PHAdjustmentData * adjustmentData;
@property (copy) NSURL * renderedContentURL;
@property int baseVersion;
@property (nonatomic) char isSubstandardRender;
@property (nonatomic) int fullSizeRenderWidth;
@property (nonatomic) int fullSizeRenderHeight;
@property (retain) NSData * penultimateRenderedJPEGData;
@property (retain) NSURL * editorBundleURL;
@property (readonly) int mediaType;

+ (unsigned int)maximumAdjustmentDataLength;
+ (char)supportsSecureCoding;

- (NSURL *)renderedContentURL;
- (void)setRenderedJPEGData:(NSData *)arg0;
- (void)setPenultimateRenderedJPEGData:(NSData *)arg0;
- (void)setIsSubstandardRender:(char)arg0;
- (void)setFullSizeRenderWidth:(int)arg0;
- (void)setFullSizeRenderHeight:(int)arg0;
- (NSURL *)editorBundleURL;
- (NSData *)penultimateRenderedJPEGData;
- (char)isSubstandardRender;
- (int)fullSizeRenderWidth;
- (int)fullSizeRenderHeight;
- (PHContentEditingOutput *)initWithContentEditingInput:(NSObject *)arg0;
- (PHContentEditingOutput *)initWithPlaceholderForCreatedAsset:(PHObjectPlaceholder *)arg0;
- (void)setEditorBundleURL:(NSURL *)arg0;
- (PHContentEditingOutput *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void)_commonInit;
- (void).cxx_destruct;
- (void)setAdjustmentData:(PHAdjustmentData *)arg0;
- (PHContentEditingOutput *)initWithAdjustmentBaseVersion:(int)arg0 mediaType:(int)arg1;
- (void)setRenderedContentURL:(NSURL *)arg0;
- (PHAdjustmentData *)adjustmentData;
- (int)mediaType;
- (int)baseVersion;
- (void)setBaseVersion:(int)arg0;

@end
