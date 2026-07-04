/* Runtime dump - FigCameraViewfinderRemote
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCameraViewfinderRemote : FigCameraViewfinder <FigCameraViewfinderRemoteObjectCallbacks>
{
    NSMapTable * _weakSessionTable;
    FigStateMachine * _stateMachine;
    FigNSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionManagementQueue;
    <FigCameraViewfinderRemoteObject> * _remoteViewfinder;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (FigCameraViewfinderRemote *)cameraViewfinder;
+ (FigCameraViewfinderRemote *)remoteObjectCallbacksInterface;

- (void)dealloc;
- (FigCameraViewfinderRemote *)init;
- (void)stop;
- (void)_setupStateMachine;
- (void)startWithOptions:(NSDictionary *)arg0;
- (void)viewfinderSessionDidBegin:(id)arg0 withIdentifier:(long long)arg1;
- (void)viewfinderSessionDidEnd;
- (void)viewfinderSession:(long long)arg0 didCapturePhotoWithStatus:(long)arg1 thumbnailData:(NSData *)arg2 timestamp:(struct ?)arg3;
- (void)viewfinderSessionPreviewStreamDidOpen:(long long)arg0;
- (void)viewfinderSession:(long long)arg0 previewStreamDidCloseWithStatus:(long)arg1;
- (void)_bringupXPCConnectionAndStartRemoteViewfinderWithOptions:(NSDictionary *)arg0;
- (void)_teardownXPCConnectionAndRemoteViewfinder;
- (void)_handleServerDeathWithOptions:(NSDictionary *)arg0 reconnect:(char)arg1;

@end
