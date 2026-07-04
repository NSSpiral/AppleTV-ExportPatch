/* Runtime dump - SSVShowDialogRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVShowDialogRequest : SSRequest <SSXPCCoding>
{
    NSObject<OS_xpc_object> * _dialog;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> * encodedDialog;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSVShowDialogRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void).cxx_destruct;
- (SSVShowDialogRequest *)initWithEncodedDialog:(NSObject<OS_xpc_object> *)arg0;
- (NSObject<OS_xpc_object> *)encodedDialog;
- (void)startWithDialogResponseBlock:(id /* block */)arg0;

@end
