/* Runtime dump - UIInputViewControllerInterfaceClient
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewControllerInterfaceClient : NSExtensionContext
{
    <_UIIVCInterface> * _forwardingInterface;
}

@property (retain, nonatomic) <_UIIVCInterface> * forwardingInterface;

+ (NSObject *)_extensionAuxiliaryVendorProtocol;
+ (NSObject *)_extensionAuxiliaryHostProtocol;

- (void)dealloc;
- (NSObject *)responseDelegate;
- (<_UIIVCInterface> *)forwardingInterface;
- (void)_handleInputViewControllerState:(NSObject *)arg0;
- (void)_tearDownRemoteService;
- (void)setForwardingInterface:(<_UIIVCInterface> *)arg0;

@end
