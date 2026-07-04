/* Runtime dump - SKPaymentQueueClient
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentQueueClient : NSObject <NSCopying>
{
    char _allowsBootstrapCellularData;
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    char _hidesConfirmationDialogs;
    char _ignoresInAppPurchaseRestriction;
    NSString * _receiptDirectoryPath;
    char _requiresAuthenticationForPayment;
    NSNumber * _storeExternalVersion;
    NSNumber * _storeItemIdentifier;
    NSString * _vendorIdentifier;
}

@property (nonatomic) char allowsBootstrapCellularData;
@property (copy, nonatomic) NSString * bundleIdentifier;
@property (copy, nonatomic) NSString * bundleVersion;
@property (nonatomic) char hidesConfirmationDialogs;
@property (nonatomic) char ignoresInAppPurchaseRestriction;
@property (copy, nonatomic) NSString * receiptDirectoryPath;
@property (nonatomic) char requiresAuthenticationForPayment;
@property (copy, nonatomic) NSNumber * storeExternalVersion;
@property (copy, nonatomic) NSNumber * storeItemIdentifier;
@property (copy, nonatomic) NSString * vendorIdentifier;

- (NSDictionary *)copyXPCEncoding;
- (SKPaymentQueueClient *)initWithXPCEncoding:(NSString *)arg0;
- (NSNumber *)storeItemIdentifier;
- (void)setHidesConfirmationDialogs:(char)arg0;
- (void)setIgnoresInAppPurchaseRestriction:(char)arg0;
- (void)setReceiptDirectoryPath:(NSString *)arg0;
- (void)setRequiresAuthenticationForPayment:(char)arg0;
- (void)setStoreExternalVersion:(NSNumber *)arg0;
- (void)setStoreItemIdentifier:(NSNumber *)arg0;
- (void)setVendorIdentifier:(NSString *)arg0;
- (char)hidesConfirmationDialogs;
- (char)ignoresInAppPurchaseRestriction;
- (NSString *)receiptDirectoryPath;
- (char)requiresAuthenticationForPayment;
- (NSNumber *)storeExternalVersion;
- (NSString *)vendorIdentifier;
- (void)dealloc;
- (NSString *)bundleIdentifier;
- (SKPaymentQueueClient *)copyWithZone:(struct _NSZone *)arg0;
- (void)setBundleIdentifier:(NSString *)arg0;
- (NSString *)bundleVersion;
- (void)setBundleVersion:(NSString *)arg0;
- (char)allowsBootstrapCellularData;
- (void)setAllowsBootstrapCellularData:(char)arg0;

@end
