/* Runtime dump - PHVideoRequestOptions
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHVideoRequestOptions : NSObject
{
    char _networkAccessAllowed;
    char _streamingAllowed;
    int _version;
    int _deliveryMode;
    id _progressHandler;
}

@property (nonatomic) char networkAccessAllowed;
@property (nonatomic) int version;
@property (nonatomic) int deliveryMode;
@property (copy, nonatomic) id progressHandler;
@property (nonatomic) char streamingAllowed;

- (int)deliveryMode;
- (char)isNetworkAccessAllowed;
- (char)isStreamingAllowed;
- (PHVideoRequestOptions *)init;
- (NSString *)description;
- (PHVideoRequestOptions *)copyWithZone:(struct _NSZone *)arg0;
- (void)setVersion:(int)arg0;
- (int)version;
- (void).cxx_destruct;
- (void)setProgressHandler:(id /* block */)arg0;
- (id /* block */)progressHandler;
- (void)setNetworkAccessAllowed:(char)arg0;
- (void)setDeliveryMode:(int)arg0;
- (void)setStreamingAllowed:(char)arg0;

@end
