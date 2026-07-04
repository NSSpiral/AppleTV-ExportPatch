/* Runtime dump - GKBluetoothSupport
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKBluetoothSupport : NSObject

+ (void)initialize;
+ (void)cleanup;
+ (int)_determineBluetoothStatus;
+ (void)_btPowerStateChanged:(NSNotification *)arg0;
+ (Class)_bluetoothManagerClass;
+ (int)bluetoothStatus;
+ (void)turnBluetoothOn;
+ (int)_directBTStatus;

@end
