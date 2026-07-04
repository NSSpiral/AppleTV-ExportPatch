/* Runtime dump - PHContentEditingInputRequestOptions
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHContentEditingInputRequestOptions : NSObject
{
    char _networkAccessAllowed;
    id _canHandleAdjustmentData;
    id _progressHandler;
}

@property (copy, nonatomic) id canHandleAdjustmentData;
@property (nonatomic) char networkAccessAllowed;
@property (copy, nonatomic) id progressHandler;

- (char)isNetworkAccessAllowed;
- (NSData *)canHandleAdjustmentData;
- (PHContentEditingInputRequestOptions *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setProgressHandler:(id /* block */)arg0;
- (id /* block */)progressHandler;
- (void)setNetworkAccessAllowed:(char)arg0;
- (void)setCanHandleAdjustmentData:(NSData *)arg0;

@end
