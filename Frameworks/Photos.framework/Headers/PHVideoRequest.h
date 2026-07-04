/* Runtime dump - PHVideoRequest
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHVideoRequest : PHImageManagerRequest
{
    PHVideoRequestOptions * _options;
    id _resultHandler;
}

@property (readonly, nonatomic) PHVideoRequestOptions * options;
@property (readonly, copy, nonatomic) id resultHandler;

+ (NSSet *)videoRequestWithAsset:(NSSet *)arg0 options:(PHVideoRequestOptions *)arg1 domain:(NSString *)arg2 resultHandler:(id /* block */)arg3;

- (void)cloneIDAndResultHandlerFromRequest:(NSURLRequest *)arg0;
- (void)clearResultHandler;
- (id /* block */)resultHandler;
- (PHVideoRequest *)initVideoRequestWithAsset:(NSSet *)arg0 options:(PHVideoRequestOptions *)arg1 domain:(NSString *)arg2 resultHandler:(id /* block */)arg3;
- (NSString *)description;
- (PHVideoRequestOptions *)options;
- (void).cxx_destruct;
- (char)isVideo;

@end
