/* Runtime dump - TSDFrameImageCacheEntry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFrameImageCacheEntry : NSObject
{
    TSDFrameSpec * mFrameSpec;
    float mAssetScale;
    struct CGSize mSize;
    float mViewScale;
    id mImages;
}

@property (nonatomic) TSDFrameSpec * frameSpec;
@property (nonatomic) float assetScale;
@property (nonatomic) struct CGSize size;
@property (nonatomic) float viewScale;

- (float)viewScale;
- (float)assetScale;
- (TSDFrameSpec *)frameSpec;
- (void)setAssetScale:(float)arg0;
- (struct CGImage *)newImageForCALayer:(char)arg0 mask:(char)arg1;
- (void)setImage:(struct CGImage *)arg0 forCALayer:(char)arg1 mask:(char)arg2;
- (void)setFrameSpec:(TSDFrameSpec *)arg0;
- (void)dealloc;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg0;
- (void)setViewScale:(float)arg0;

@end
