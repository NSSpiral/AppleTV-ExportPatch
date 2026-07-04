/* Runtime dump - PLImageLoadingThread
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageLoadingThread : NSObject
{
    char _running;
    char _paused;
    char _canceled;
    NSMutableSet * _queues;
    NSMutableDictionary * _requestsByKey;
    NSObject<OS_dispatch_queue> * _isolation;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_dispatch_queue> * _highestPriorityQueue;
    NSMutableArray * _highestPriorityRequests;
    NSObject<OS_dispatch_queue> * _highPriorityQueue;
    NSMutableArray * _highPriorityRequests;
    NSObject<OS_dispatch_queue> * _normalPriorityQueue;
    NSMutableArray * _normalPriorityRequests;
    PLPhotoLibrary * _library;
    PLImageCache * _weak_cache;
}

- (void)dealloc;
- (void)stop;
- (void)_start;
- (void)resume;
- (void)pause;
- (PLImageLoadingThread *)initWithImageCache:(NSObject *)arg0;
- (void)cacheWasDeallocated;
- (NSObject *)loadImageFromSource:(NSObject *)arg0 asset:(NSSet *)arg1 forImageLoadingQueue:(NSObject *)arg2 synchronously:(char)arg3 priority:(int)arg4 completion:(id /* block */)arg5;
- (void)addImageLoadingQueue:(NSObject *)arg0;
- (void)removeImageLoadingQueue:(NSObject *)arg0;
- (void)cancelLoadFromSource:(NSObject *)arg0 asset:(NSSet *)arg1 imageLoadingQueue:(PLImageLoadingQueue *)arg2;
- (void)_setImageCache:(NSObject *)arg0;
- (NSCache *)_imageCache;
- (char)_dequeueRequest:(NSURLRequest *)arg0;
- (void)_requeueRequest:(NSURLRequest *)arg0 oldPriority:(int)arg1;
- (void)_enqueueRequest:(NSURLRequest *)arg0;
- (void)_serviceRequestFrom:(NSObject *)arg0;
- (void)_serviceRequest:(NSURLRequest *)arg0;

@end
