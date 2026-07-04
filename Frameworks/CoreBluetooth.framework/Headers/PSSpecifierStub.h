/* Runtime dump - PSSpecifierStub
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface PSSpecifierStub : NSObject
{
    BluetoothDevice * _device;
    id _userInfo;
}

@property (retain, nonatomic) BluetoothDevice * device;
@property (retain, nonatomic) id userInfo;

- (void)setDevice:(BluetoothDevice *)arg0;
- (void)dealloc;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSDictionary *)userInfo;
- (BluetoothDevice *)device;

@end
