/* Runtime dump - SSMachineDataRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMachineDataRequest : SSRequest <SSXPCCoding>
{
    NSNumber * _accountID;
    NSData * _actionData;
    NSString * _actionName;
    char _allowsBootstrapCellularData;
    int _protocolVersion;
    char _waitsForPurchaseOperations;
}

@property (copy) NSNumber * accountIdentifier;
@property (copy) NSData * actionData;
@property (copy) NSString * actionName;
@property char allowsBootstrapCellularData;
@property int protocolVersion;
@property char waitsForPurchaseOperations;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSMachineDataRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void)setAccountIdentifier:(NSNumber *)arg0;
- (void)dealloc;
- (void)setActionName:(NSString *)arg0;
- (SSMachineDataRequest *)initWithURLResponse:(NSString *)arg0;
- (NSString *)actionName;
- (NSNumber *)accountIdentifier;
- (int)protocolVersion;
- (void)setProtocolVersion:(int)arg0;
- (char)allowsBootstrapCellularData;
- (void)setAllowsBootstrapCellularData:(char)arg0;
- (NSData *)actionData;
- (void)setActionData:(NSData *)arg0;
- (void)setWaitsForPurchaseOperations:(char)arg0;
- (char)waitsForPurchaseOperations;

@end
