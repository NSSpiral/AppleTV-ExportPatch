/* Runtime dump - TSDThumbnailController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDThumbnailController : NSObject <TSDThumbnailConsumer>
{
    TSKDocumentRoot * _documentRoot;
    <TSDThumbnailControllerDelegate> * _delegate;
    <TSDThumbnailProducer> * _producer;
    TSDThumbnailGenerator * _generator;
    char _thumbnailRequested;
    char _thumbnailerEnabled;
    unsigned int _thumbnailSuspendCount;
    NSMutableSet * _dirtySet;
    TSULRUCache * _thumbnailCache;
    double _delayBeforeRedraw;
    char _tornDown;
    char _callbackScheduled;
    int _delayHandlingStatus;
    NSDate * _drawingStartDate;
    NSObject<OS_dispatch_queue> * _thumbnailGenerationQueue;
}

@property (nonatomic) <TSDThumbnailControllerDelegate> * delegate;
@property (nonatomic) <TSDThumbnailProducer> * producer;
@property (nonatomic) struct CGColor * backgroundColor;
@property (nonatomic) double delayBeforeRedraw;
@property (readonly, nonatomic) NSSet * dirtySet;
@property (nonatomic) char enabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)suspendThumbnailing;
- (void)resumeThumbnailing;
- (void)p_thumbnailEvicted:(id)arg0 identifier:(NSString *)arg1;
- (void)p_handleMemoryNotification:(NSNotification *)arg0;
- (void)setProducer:(<TSDThumbnailProducer> *)arg0;
- (char)p_isThumbnailGenerationActive;
- (void)updateThumbnails;
- (char)p_notGeneratingThumbnail;
- (void)thumbnailCountDidChange;
- (void)p_scheduleThumbnailGeneration;
- (void)p_scheduleThumbnailGenerationMainThreadEntry;
- (UIImage *)cachedThumbnail:(UIImage *)arg0;
- (void)updateThumbnail:(UIImage *)arg0 identifier:(NSString *)arg1 continueThumbnailing:(char)arg2;
- (char)p_mustCacheThumbnailsForAllPrincipalThumbnailIdentifiers;
- (void)commitThumbnail:(UIImage *)arg0 identifier:(NSString *)arg1;
- (char)shouldCallCommit;
- (NSString *)nextThumbnailIdentifier;
- (TSDThumbnailController *)initWithDocumentRoot:(TSKDocumentRoot *)arg0 cacheSize:(unsigned int)arg1;
- (void)invalidateAllThumbnailsAndOptionallyClearCache:(char)arg0;
- (void)invalidateThumbnail:(UIImage *)arg0;
- (UIImage *)thumbnail:(UIImage *)arg0 waitIfNecessary:(char)arg1;
- (void)waitForIdentifiersOfThumbnailsToHaveThumbnails:(id)arg0;
- (<TSDThumbnailProducer> *)producer;
- (double)delayBeforeRedraw;
- (void)setDelayBeforeRedraw:(double)arg0;
- (NSSet *)dirtySet;
- (void)dealloc;
- (void)setBackgroundColor:(struct CGColor *)arg0;
- (struct CGColor *)backgroundColor;
- (void)setDelegate:(<TSDThumbnailControllerDelegate> *)arg0;
- (<TSDThumbnailControllerDelegate> *)delegate;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (void)teardown;

@end
