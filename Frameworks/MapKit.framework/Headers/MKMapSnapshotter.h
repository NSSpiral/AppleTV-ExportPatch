/* Runtime dump - MKMapSnapshotter
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshotter : NSObject
{
    MKMapSnapshotOptions * _options;
    int _loadingFlag;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id _completionHandler;
    VKMapSnapshotCreator * _snapshotCreator;
    char _needsResume;
}

@property (readonly, nonatomic) char loading;

- (void)startWithQueue:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)_exitBackground:(NSNotification *)arg0;
- (void)_performSnapshot;
- (void)_cleanupSnapshotCreator;
- (void)_succeedWithSnapshot:(NSObject *)arg0;
- (void)_enterBackground:(NSNotification *)arg0;
- (void)cancel;
- (void)dealloc;
- (MKMapSnapshotter *)init;
- (char)isLoading;
- (void).cxx_destruct;
- (void)_cancel;
- (MKMapSnapshotter *)initWithOptions:(MKMapSnapshotOptions *)arg0;
- (void)_failWithError:(NSError *)arg0;
- (void)startWithCompletionHandler:(id /* block */)arg0;

@end
