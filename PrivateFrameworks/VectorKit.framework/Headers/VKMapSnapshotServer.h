/* Runtime dump - VKMapSnapshotServer
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapSnapshotServer : NSObject
{
    char _softwareRendering;
    NSObject<OS_dispatch_queue> * _homeQueue;
}

- (void)dealloc;
- (void)renderRequest:(NSURLRequest *)arg0 completion:(id /* block */)arg1;
- (void)_renderRequest:(NSURLRequest *)arg0 completion:(id /* block */)arg1;
- (VKMapSnapshotServer *)initWithSoftwareRendering:(char)arg0 homeQueue:(NSObject<OS_dispatch_queue> *)arg1;

@end
