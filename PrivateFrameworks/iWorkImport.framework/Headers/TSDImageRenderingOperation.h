/* Runtime dump - TSDImageRenderingOperation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageRenderingOperation : TSDSwatchRenderingOperation
{
    TSDImageInfo * mImageInfo;
    char mShouldClipVertically;
}

@property (retain) TSDImageInfo * imageInfo;

- (void)doWorkWithReadLock;
- (TSDImageRenderingOperation *)initWithPreset:(NSSet *)arg0 imageSize:(struct CGSize)arg1 imageScale:(float)arg2 swatchFrame:(struct CGRect)arg3 imageInfo:(struct CGSize)arg4 documentRoot:(struct CGSize)arg5 shouldClipVertically:(id)arg6;
- (TSDImageRenderingOperation *)initWithPreset:(NSSet *)arg0 imageSize:(struct CGSize)arg1 imageScale:(float)arg2 swatchFrame:(struct CGRect)arg3 imageInfo:(struct CGSize)arg4 documentRoot:(struct CGSize)arg5;
- (void)setImageInfo:(TSDImageInfo *)arg0;
- (void)dealloc;
- (TSDImageInfo *)imageInfo;

@end
