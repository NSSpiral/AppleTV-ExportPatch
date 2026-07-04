/* Runtime dump - SCROIOHIDElement
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROIOHIDElement : SCROIOElement <SCROIOHIDElementProtocol>
{
    struct __IOHIDDevice * _hidDevice;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (SCROIOHIDElement *)copyWithZone:(struct _NSZone *)arg0;
- (int)transport;
- (SCROIOHIDElement *)initWithIOObject:(unsigned int)arg0;
- (struct __IOHIDDevice *)hidDevice;

@end
