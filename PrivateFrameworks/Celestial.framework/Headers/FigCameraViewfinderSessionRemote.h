/* Runtime dump - FigCameraViewfinderSessionRemote
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCameraViewfinderSessionRemote : FigCameraViewfinderSession
{
    <FigCameraViewfinderSessionRemoteObject> * _remoteViewfinderSession;
    unsigned int _state;
    FigStateMachine * _stateMachine;
}

- (void)_serverDied;
- (void)dealloc;
- (void)_setupStateMachine;
- (void)openPreviewStreamWithOptions:(NSDictionary *)arg0;
- (void)closePreviewStream;
- (void)_clientDisconnectedFromServer;
- (NSObject *)_initWithRemoteViewfinderSession:(<FigCameraViewfinderSessionRemoteObject> *)arg0 delegateStorage:(FigDelegateStorage *)arg1;
- (void)_previewStreamDidOpen;
- (void)_previewStreamDidCloseWithStatus:(long)arg0;

@end
