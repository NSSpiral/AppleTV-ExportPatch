/* Runtime dump - PHImageRequestOptions
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageRequestOptions : NSObject <NSCopying>
{
    char _networkAccessAllowed;
    char _synchronous;
    char _memoryCachingAllowed;
    char _deliveryFirstResultAsynchronously;
    char _degradedFormatPreferJPEG;
    char _allowPlaceholder;
    int _version;
    int _deliveryMode;
    int _resizeMode;
    id _progressHandler;
    int _loadingMode;
    int _rank;
    id _cachingCompletedHandler;
    double _demoteFactor;
    double _aspectRatioHint;
    double _downloadUpdateInterval;
    struct CGRect _normalizedCropRect;
}

@property (nonatomic) int version;
@property (nonatomic) int deliveryMode;
@property (nonatomic) int resizeMode;
@property (nonatomic) struct CGRect normalizedCropRect;
@property (nonatomic) char networkAccessAllowed;
@property (nonatomic) char synchronous;
@property (copy, nonatomic) id progressHandler;
@property (nonatomic) int loadingMode;
@property (nonatomic) char memoryCachingAllowed;
@property (nonatomic) char deliveryFirstResultAsynchronously;
@property (nonatomic) char degradedFormatPreferJPEG;
@property (nonatomic) char allowPlaceholder;
@property (nonatomic) int rank;
@property (nonatomic) double demoteFactor;
@property (nonatomic) double aspectRatioHint;
@property (nonatomic) double downloadUpdateInterval;
@property (copy, nonatomic) id cachingCompletedHandler;

+ (PHImageRequestOptions *)defaultOptionsAllowingPlaceholder;

- (void)setAllowPlaceholder:(char)arg0;
- (int)deliveryMode;
- (int)loadingMode;
- (int)resizeMode;
- (char)isNetworkAccessAllowed;
- (char)isMemoryCachingAllowed;
- (void)setMemoryCachingAllowed:(char)arg0;
- (char)isSynchronous;
- (char)deliveryFirstResultAsynchronously;
- (char)degradedFormatPreferJPEG;
- (void)setDegradedFormatPreferJPEG:(char)arg0;
- (char)allowPlaceholder;
- (double)demoteFactor;
- (void)setDemoteFactor:(double)arg0;
- (double)aspectRatioHint;
- (void)setAspectRatioHint:(double)arg0;
- (double)downloadUpdateInterval;
- (void)setDownloadUpdateInterval:(double)arg0;
- (id /* block */)cachingCompletedHandler;
- (void)setCachingCompletedHandler:(id /* block */)arg0;
- (PHImageRequestOptions *)init;
- (NSString *)description;
- (PHImageRequestOptions *)copyWithZone:(struct _NSZone *)arg0;
- (void)setVersion:(int)arg0;
- (int)version;
- (void).cxx_destruct;
- (void)setProgressHandler:(id /* block */)arg0;
- (int)rank;
- (id /* block */)progressHandler;
- (void)setRank:(int)arg0;
- (void)setNetworkAccessAllowed:(char)arg0;
- (void)setDeliveryMode:(int)arg0;
- (void)setLoadingMode:(int)arg0;
- (void)setDeliveryFirstResultAsynchronously:(char)arg0;
- (void)setResizeMode:(int)arg0;
- (void)setSynchronous:(char)arg0;
- (struct CGRect)normalizedCropRect;
- (void)setNormalizedCropRect:(struct CGRect)arg0;

@end
