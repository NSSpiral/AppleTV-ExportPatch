/* Runtime dump - PHImageRequest
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageRequest : PHImageManagerRequest
{
    int _contentMode;
    PHImageRequestOptions * _options;
    int _bestFormat;
    int _degradedFormat;
    id _resultHandler;
    struct CGSize _targetSize;
}

@property (readonly, nonatomic) struct CGSize targetSize;
@property (readonly, nonatomic) int contentMode;
@property (readonly, nonatomic) PHImageRequestOptions * options;
@property int bestFormat;
@property int degradedFormat;
@property (readonly, copy, nonatomic) id resultHandler;

+ (PHImageRequest *)descriptionWithContentMode:(int)arg0;
+ (NSSet *)imageRequestWithAsset:(NSSet *)arg0 targetSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(PHImageRequestOptions *)arg3 domain:(NSString *)arg4 resultHandler:(id /* block */)arg5;

- (void)cloneIDAndResultHandlerFromRequest:(NSURLRequest *)arg0;
- (void)clearResultHandler;
- (PHImageRequest *)initImageRequestWithAsset:(NSSet *)arg0 targetSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(PHImageRequestOptions *)arg3 domain:(NSString *)arg4 resultHandler:(id /* block */)arg5;
- (id /* block */)resultHandler;
- (int)degradedFormat;
- (void)setDegradedFormat:(int)arg0;
- (NSString *)description;
- (int)contentMode;
- (struct CGSize)targetSize;
- (PHImageRequestOptions *)options;
- (void).cxx_destruct;
- (int)bestFormat;
- (void)setBestFormat:(int)arg0;

@end
