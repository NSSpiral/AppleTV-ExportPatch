/* Runtime dump - SKStorePageRequest
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStorePageRequest : NSObject
{
    int _pageStyle;
    NSDictionary * _productParameters;
    NSURL * _productURL;
}

@property (nonatomic) int productPageStyle;
@property (copy, nonatomic) NSDictionary * productParameters;
@property (copy, nonatomic) NSURL * productURL;

- (void)setProductPageStyle:(int)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SKStorePageRequest *)initWithXPCEncoding:(NSString *)arg0;
- (int)productPageStyle;
- (NSDictionary *)productParameters;
- (void)setProductParameters:(NSDictionary *)arg0;
- (NSURL *)productURL;
- (void)setProductURL:(NSURL *)arg0;
- (void)dealloc;

@end
