/* Runtime dump - TSDSwatchCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSwatchCache : NSObject
{
    NSOperationQueue * mOperationQueue;
}

+ (NSCache *)swatchCache;

- (struct CGSize)shapeSwatchInset;
- (void)applyFakeShadowForWhitePresetsIfNecessary:(id)arg0 documentRoot:(struct CGSize)arg1;
- (struct CGImage *)p_newImageWithConnectionLineKnobsForShape:(id)arg0 atScale:(float)arg1 ofSize:(struct CGSize)arg2 overImage:(struct CGImage *)arg3;
- (NSData *)p_thumbnailImageDataForImageData:(NSData *)arg0;
- (NSDictionary *)p_maskInfoForMovieInfo:(NSDictionary *)arg0 context:(NSObject *)arg1;
- (void)warmStyle:(NSObject *)arg0 withFillProperty:(int)arg1 documentRoot:(struct CGSize)arg2;
- (NSSet *)imageForShapePreset:(NSSet *)arg0 imageSize:(struct CGSize)arg1 imageScale:(float)arg2 shapeType:(int)arg3 angle:(float)arg4 documentRoot:(struct CGSize)arg5;
- (NSSet *)imageForImagePreset:(NSSet *)arg0 imageSize:(struct CGSize)arg1 imageScale:(float)arg2 imageInfo:(struct CGSize)arg3 shouldClipVertically:(char)arg4 documentRoot:(struct CGSize)arg5;
- (NSSet *)imageForShapePreset:(NSSet *)arg0 imageSize:(struct CGSize)arg1 imageScale:(float)arg2 swatchFrame:(struct CGRect)arg3 shapeType:(struct CGSize)arg4 angle:(struct CGSize)arg5 documentRoot:(int)arg6;
- (NSSet *)imageForImagePreset:(NSSet *)arg0 imageSize:(struct CGSize)arg1 imageScale:(float)arg2 swatchFrame:(struct CGRect)arg3 imageInfo:(struct CGSize)arg4 shouldClipVertically:(id)arg5 documentRoot:(struct CGSize)arg6;
- (struct CGSize)imageSizeForPreset:(NSSet *)arg0 swatchSize:(struct CGSize)arg1;
- (NSSet *)imageForMoviePreset:(NSSet *)arg0 imageSize:(struct CGSize)arg1 imageScale:(float)arg2 swatchFrame:(struct CGRect)arg3 movieInfo:(struct CGSize)arg4 shouldClipVertically:(id)arg5 documentRoot:(struct CGSize)arg6;
- (NSSet *)imageForMoviePreset:(NSSet *)arg0 imageSize:(struct CGSize)arg1 imageScale:(float)arg2 movieInfo:(NSDictionary *)arg3 shouldClipVertically:(char)arg4 documentRoot:(struct CGSize)arg5;
- (void)dealloc;
- (TSDSwatchCache *)init;

@end
