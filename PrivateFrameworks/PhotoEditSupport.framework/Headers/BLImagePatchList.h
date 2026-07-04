/* Runtime dump - BLImagePatchList
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLImagePatchList : NSObject
{
    struct CGImage * _baseImage;
    struct CGSize _size;
    NSMutableArray * _patchArray;
}

+ (UIImage *)imagePatchListWithSingleImage:(struct CGImage *)arg0;

- (void)dealloc;
- (struct CGSize)size;
- (int)count;
- (NSString *)description;
- (BLImagePatchList *)initWithImage:(struct CGImage *)arg0;
- (void)drawInContext:(struct CGContext *)arg0;
- (void)addPatch:(BLImagePatch *)arg0;
- (void)removeAllPatches;

@end
