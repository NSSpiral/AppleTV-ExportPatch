/* Runtime dump - FigCameraViewfinderServer
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCameraViewfinderServer : NSObject <NSXPCListenerDelegate, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate>
{
    NSXPCListener * _serviceListener;
    NSMutableArray * _connections;
    NSObject<OS_dispatch_queue> * _callbackQueue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)start;

- (void)dealloc;
- (FigCameraViewfinderServer *)init;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (void)cameraViewfinder:(FigCameraViewfinder *)arg0 viewfinderSessionDidEnd:(id)arg1;
- (void)cameraViewfinder:(FigCameraViewfinder *)arg0 viewfinderSessionDidBegin:(id)arg1;
- (void)cameraViewfinderSession:(NSObject *)arg0 didCapturePhotoWithStatus:(long)arg1 thumbnailData:(NSData *)arg2 timestamp:(struct ?)arg3;
- (void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg0;
- (void)cameraViewfinderSession:(NSObject *)arg0 previewStreamDidCloseWithStatus:(long)arg1;
- (id)_remoteViewfinderForLocalViewfinder:(id)arg0;

@end
