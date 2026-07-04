/* Runtime dump - SKProductInternal
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProductInternal : NSObject
{
    NSString * _contentVersion;
    char _downloadable;
    NSArray * _downloadContentLengths;
    NSString * _localeIdentifier;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    NSDecimalNumber * _price;
    NSLocale * _priceLocale;
    NSString * _productIdentifier;
}

- (void)dealloc;

@end
