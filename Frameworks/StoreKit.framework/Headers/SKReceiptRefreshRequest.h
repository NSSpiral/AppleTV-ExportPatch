/* Runtime dump - SKReceiptRefreshRequest
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKReceiptRefreshRequest : SKRequest
{
    NSDictionary * _properties;
}

@property (readonly, nonatomic) NSDictionary * receiptProperties;

- (void)_handleReply:(id /* block */)arg0;
- (void)_sendXPCMessage;
- (char)_wantsExpired;
- (char)_wantsRevoked;
- (char)_wantsVPP;
- (SKReceiptRefreshRequest *)initWithReceiptProperties:(NSDictionary *)arg0;
- (NSDictionary *)receiptProperties;
- (void)dealloc;

@end
