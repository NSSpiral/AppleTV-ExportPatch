/* Runtime dump - BRAirportNetworksProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;
@interface BRAirportNetworksProvider : NSObject <BRProvider>
{
    NSArray * _networks;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (BRAirportNetworksProvider *)initWithNetworks:(NSArray *)arg0;
- (void)setNetworks:(NSArray *)arg0;
- (void)dealloc;
- (NSObject *)dataAtIndex:(long)arg0;

@end
