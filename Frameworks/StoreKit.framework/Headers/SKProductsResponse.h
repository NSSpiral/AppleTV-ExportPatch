/* Runtime dump - SKProductsResponse
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProductsResponse : NSObject
{
    id _internal;
}

@property (readonly, nonatomic) NSArray * products;
@property (readonly, nonatomic) NSArray * invalidProductIdentifiers;

- (NSDictionary *)copyXPCEncoding;
- (SKProductsResponse *)initWithXPCEncoding:(NSString *)arg0;
- (NSArray *)invalidProductIdentifiers;
- (NSArray *)products;
- (void)_setInvalidIdentifiers:(id)arg0;
- (void)_setProducts:(id)arg0;
- (void)dealloc;
- (SKProductsResponse *)init;

@end
