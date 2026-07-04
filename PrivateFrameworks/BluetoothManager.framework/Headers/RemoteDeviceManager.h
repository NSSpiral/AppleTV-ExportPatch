/* Runtime dump - RemoteDeviceManager
 * Image: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

@interface RemoteDeviceManager : NSObject
{
    NSObject<OS_xpc_object> * _connection;
}

- (void)dealloc;
- (RemoteDeviceManager *)init;
- (void)disconnectDevice:(NSObject *)arg0;
- (void)sendMessage:(char *)arg0 args:(struct OpaqueJSValue * *)arg1;

@end
