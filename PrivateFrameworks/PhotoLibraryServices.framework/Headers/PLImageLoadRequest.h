/* Runtime dump - PLImageLoadRequest
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageLoadRequest : NSObject
{
    NSManagedObjectID * _assetID;
    PLImageSource * _source;
    NSMutableSet * _queues;
    int _priority;
    NSMutableArray * _completionBlocks;
    PLLoadRequestKey * _key;
}

@property (nonatomic) int priority;
@property (readonly, nonatomic) NSArray * completionBlocks;
@property (readonly, retain, nonatomic) PLImageSource * source;
@property (readonly, retain, nonatomic) PLLoadRequestKey * key;

+ (NSSet *)requestWithAsset:(NSSet *)arg0 source:(PLImageSource *)arg1 priority:(int)arg2 completion:(id /* block */)arg3 loadingQueue:(/* block */ id)arg4;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)debugDescription;
- (PLLoadRequestKey *)key;
- (void)setPriority:(int)arg0;
- (PLImageSource *)source;
- (int)priority;
- (char)isImageLoadingQueueRegistered:(id)arg0;
- (void)deregisterImageLoadingQueue:(NSObject *)arg0;
- (char)someImageLoadingQueuesRegistered;
- (void)addCompletionBlock:(id /* block */)arg0;
- (void)registerImageLoadingQueue:(NSObject *)arg0;
- (void)notifyImageLoadingQueuesOfImageAvailability:(id)arg0;
- (NSObject *)assetInPhotoLibrary:(NSObject *)arg0;
- (PLImageLoadRequest *)initWithAsset:(NSSet *)arg0 source:(PLImageSource *)arg1 priority:(int)arg2;
- (NSArray *)completionBlocks;

@end
