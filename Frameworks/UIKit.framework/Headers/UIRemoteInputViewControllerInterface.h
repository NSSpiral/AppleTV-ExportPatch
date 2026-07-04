/* Runtime dump - UIRemoteInputViewControllerInterface
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate>
{
    <_UIIVCResponseDelegate> * _responseDelegate;
}

@property (retain, nonatomic) <_UIIVCResponseDelegate> * responseDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)_extensionAuxiliaryVendorProtocol;
+ (NSObject *)_extensionAuxiliaryHostProtocol;

- (<_UIIVCResponseDelegate> *)responseDelegate;
- (void)setResponseDelegate:(<_UIIVCResponseDelegate> *)arg0;
- (void)_performInputViewControllerOutput:(NSObject *)arg0;
- (void)_handleInputViewControllerState:(NSObject *)arg0;
- (void)_tearDownRemoteService;
- (void)_openURL:(NSURL *)arg0 completion:(id /* block */)arg1;

@end
