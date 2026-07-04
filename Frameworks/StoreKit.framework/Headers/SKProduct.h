/* Runtime dump - SKProduct
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProduct : NSObject
{
    id _internal;
}

@property (readonly, nonatomic) NSString * localizedDescription;
@property (readonly, nonatomic) NSString * localizedTitle;
@property (readonly, nonatomic) NSDecimalNumber * price;
@property (readonly, nonatomic) NSLocale * priceLocale;
@property (readonly, nonatomic) NSString * productIdentifier;
@property (readonly, nonatomic) char downloadable;
@property (readonly, nonatomic) NSArray * downloadContentLengths;
@property (readonly, nonatomic) NSString * downloadContentVersion;
@property (copy, nonatomic) NSString * _localeIdentifier;

- (NSDecimalNumber *)price;
- (char)isDownloadable;
- (NSDictionary *)copyXPCEncoding;
- (SKProduct *)initWithXPCEncoding:(NSString *)arg0;
- (NSString *)productIdentifier;
- (NSArray *)downloadContentLengths;
- (NSString *)downloadContentVersion;
- (NSLocale *)priceLocale;
- (NSString *)_localeIdentifier;
- (void)_setContentVersion:(NSString *)arg0;
- (void)_setDownloadContentLengths:(id)arg0;
- (void)_setDownloadable:(char)arg0;
- (void)_setLocaleIdentifier:(NSString *)arg0;
- (void)_setLocalizedDescription:(NSString *)arg0;
- (void)_setLocalizedTitle:(NSString *)arg0;
- (void)_setPrice:(id)arg0;
- (void)_setPriceLocale:(NSObject *)arg0;
- (void)_setProductIdentifier:(NSString *)arg0;
- (void)dealloc;
- (SKProduct *)init;
- (NSString *)localizedDescription;
- (NSString *)localizedTitle;

@end
