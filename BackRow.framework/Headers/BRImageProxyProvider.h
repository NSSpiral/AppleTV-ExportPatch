/* Runtime dump - BRImageProxyProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;
@interface BRImageProxyProvider : NSObject <BRProvider>
{
    NSArray * _images;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)providerWithAssets:(NSArray *)arg0;
+ (BRImageProxyProvider *)providerWithImageProxies:(NSArray *)arg0;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (NSArray *)imageProxies;
- (BRImageProxyProvider *)initWithImageProxies:(NSArray *)arg0;
- (BRImageProxyProvider *)initWithAssets:(NSArray *)arg0;
- (void)dealloc;
- (NSObject *)dataAtIndex:(long)arg0;

@end
