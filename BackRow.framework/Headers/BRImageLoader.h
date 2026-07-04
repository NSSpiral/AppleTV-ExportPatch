/* Runtime dump - BRImageLoader
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRInvalidatable;

@class BRAsyncTaskContext;
@interface BRImageLoader : NSObject <BRInvalidatable>
{
    long _queueSize;
    NSMutableArray * _imageQueue;
    NSMutableArray * _candidateImages;
    NSMutableArray * _pendingImages;
    <BRProvider> * _provider;
    char _randomize;
    long _serialIndex;
    long _imageArrayIndex;
    long _segmentCount;
    int _fillStrategy;
    long _failedLoadCount;
    BRAsyncTaskContext * _taskContext;
    char _saveQueueOnFlush;
    NSMutableArray * _savedImageProxyQueue;
    NSMutableArray * _activeImageProxyQueue;
    char _hasBeenInvalidated;
}

- (NSArray *)imageProxies;
- (void)setImageProxies:(NSArray *)arg0;
- (void)_providerUpdated:(id)arg0;
- (void)setFillStrategy:(int)arg0;
- (void)setSaveQueueOnFlush:(char)arg0;
- (void)setRandomize:(char)arg0;
- (char)queueReady;
- (UIImage *)nextImage;
- (UIImage *)finalFormForImage:(UIImage *)arg0;
- (char)isImageFinalForm:(id)arg0;
- (void)_updateArtwork:(UIImage *)arg0;
- (void)_abandonArtwork:(UIImage *)arg0;
- (void)_cleanupPendingQueue;
- (void)_setupForNewProvider;
- (char)_isQueuePrimed;
- (void)_primeQueue;
- (int)fillStrategy;
- (char)randomize;
- (void)_enqueueImage:(UIImage *)arg0;
- (UIImage *)_pendingImageDictionaryForImageID:(UIImage *)arg0;
- (NSObject *)_pullNextImageProxy;
- (void)_promoteCandidateImageProxy:(NSObject *)arg0 toPendingImageProxyForImageWithID:(int)arg1;
- (id)_pullNextImageProxyRandomly;
- (void)_prepareImageForQueue:(NSObject *)arg0 withID:(int)arg1 imageProxy:(NSObject *)arg2;
- (void)_abandonPendingImageProxyForImageWithID:(int)arg0;
- (void)setSegmentCount:(long)arg0;
- (void)dealloc;
- (BRImageLoader *)init;
- (void)invalidate;
- (long)imageCount;
- (void)flushQueue;
- (void)setProvider:(<BRProvider> *)arg0;
- (long)queueSize;
- (void)setQueueSize:(long)arg0;
- (long)segmentCount;

@end
