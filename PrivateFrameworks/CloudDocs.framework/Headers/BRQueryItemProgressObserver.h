/* Runtime dump - BRQueryItemProgressObserver
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRQueryItemProgressObserver : NSObject
{
    BRQueryItem * _item;
    NSObject<OS_dispatch_queue> * _queue;
    id _subscriber;
    NSProgress * _progress;
    char _stopped;
    char _isUpload;
    id _progressHandler;
}

@property (nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (copy, nonatomic) id progressHandler;
@property (readonly, nonatomic) BRQueryItem * item;

- (void)dealloc;
- (NSString *)description;
- (BRQueryItem *)item;
- (void)stop;
- (BRQueryItemProgressObserver *)initWithItem:(BRQueryItem *)arg0;
- (void)start;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)setProgressHandler:(id /* block */)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (id /* block */)progressHandler;

@end
