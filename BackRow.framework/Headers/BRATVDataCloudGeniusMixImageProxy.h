/* Runtime dump - BRATVDataCloudGeniusMixImageProxy
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRATVDataImageProxy.h>
@interface BRATVDataCloudGeniusMixImageProxy : BRATVDataImageProxy
{
    NSMutableArray * _imageProxies;
    NSMutableArray * _imageIDs;
    NSMutableDictionary * _geniusMixImages;
    unsigned int _pendingRequestCount;
}

- (ATVImage *)imageForImageSize:(int)arg0;
- (void)_imageUpdated:(id)arg0;
- (void)_imageUnavailable:(id)arg0;
- (void)cancelImageRequestsForImageSizes:(int)arg0;
- (void)_loadArtwork;
- (void)_postATVImageRequestProcessedNotification:(NSNotification *)arg0;
- (void)_generateGeniusMixClusterImage;
- (void)_postATVImageRequestProcessedNotification:(NSNotification *)arg0 withImageData:(NSData *)arg1;
- (void)_handleFinishedImageRequests;
- (void)dealloc;
- (void).cxx_destruct;

@end
