/* Runtime dump - SSPurchaseReceipt
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchaseReceipt : NSObject
{
    ISPurchaseReceipt * _purchaseReceipt;
}

@property (readonly) char isVPPLicensed;
@property (readonly) char isRevoked;
@property (readonly) NSDate * expirationDate;

+ (void)getReceiptPathWithCompletionBlock:(id /* block */)arg0;

- (char)isRevoked;
- (SSPurchaseReceipt *)initWithContentsOfFile:(NSString *)arg0;
- (void).cxx_destruct;
- (NSDate *)expirationDate;
- (char)isVPPLicensed;
- (SSPurchaseReceipt *)initWithContainerPath:(NSString *)arg0;

@end
