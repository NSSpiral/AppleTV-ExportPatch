/* Runtime dump - EABluetoothAccessoryPicker
 * Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EABluetoothAccessoryPicker : NSObject <BTDevicePickerDelegate>
{
    BTDevicePicker * _picker;
    <EABluetoothAccessoryPickerDelegate> * _delegate;
}

@property (nonatomic) <EABluetoothAccessoryPickerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)wakeSelectedBluetoothAccessories:(id)arg0;

- (void)devicePicker:(BTDevicePicker *)arg0 didDismissWithResult:(int)arg1 device:(NSObject *)arg2;
- (void)dismissPicker;
- (void)show;
- (void)dealloc;
- (void)setDelegate:(<EABluetoothAccessoryPickerDelegate> *)arg0;
- (<EABluetoothAccessoryPickerDelegate> *)delegate;
- (EABluetoothAccessoryPicker *)initWithPredicate:(NSPredicate *)arg0;

@end
