/* Runtime dump - LTImageTrickPlayAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/LTTrickPlayAsset.h>

@class ATVMerchant;
@interface LTImageTrickPlayAsset : LTTrickPlayAsset
{
    NSArray * _frames;
    double _frameTimeDifferenceInSeconds;
    NSString * _frameFileNameFormat;
    float _frameCountMultipler;
    char _isEncrypted;
    char _isReady;
    int _preloadedFilesOnEitherEnd;
    NSMutableIndexSet * _mutableActiveRequestsIndexSet;
    struct _opaque_pthread_mutex_t _activeImageRequestMutex;
}

- (double)frameTimeDifferenceInSeconds;
- (LTImageTrickPlayAsset *)initWithAsset:(NSSet *)arg0 andMerchant:(id)arg1;
- (void)_fetchTrackConfigFileAtURL:(NSURL *)arg0 forMerchant:(ATVMerchant *)arg1;
- (void)_setTrackConfig:(NSObject *)arg0;
- (unsigned int)indexForTime:(double)arg0;
- (id)URLsForTime:(double)arg0 direction:(int)arg1 withPreloadedImageURLsCount:(unsigned int)arg2;
- (id)URLsForTime:(double)arg0 direction:(int)arg1 withPreloadedImageURLsCount:(unsigned int)arg2 atInterval:(int)arg3;
- (UIImage *)imageForTime:(double)arg0 direction:(int)arg1 withPreloadedImageURLsCount:(unsigned int)arg2;
- (id)firstImageFromURLs:(id)arg0;
- (id)URLForTime:(double)arg0;
- (id)URLsForTime:(double)arg0;
- (id)URLsForTime:(double)arg0 withPreloadedImageURLsCount:(unsigned int)arg1;
- (void)cancelPriorImageLoadsFromTime:(double)arg0 direction:(int)arg1;
- (UIImage *)imageForTime:(double)arg0;
- (UIImage *)imageForTime:(double)arg0 withPreloadedImageURLsCount:(unsigned int)arg1;
- (UIImage *)imageForTime:(double)arg0 direction:(int)arg1;
- (void)_trackConfigFileReady:(id)arg0;
- (NSNumber *)_loadImageURLsForCount:(unsigned int)arg0 forBaseURL:(NSURL *)arg1 isOneBasedNamingScheme:(char)arg2;
- (NSNumber *)_loadImageURLsForCount:(unsigned int)arg0 forBaseURL:(NSURL *)arg1;
- (void)dealloc;
- (LTImageTrickPlayAsset *)initWithAsset:(NSSet *)arg0;
- (void).cxx_destruct;
- (char)isReady;

@end
