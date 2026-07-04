/* Runtime dump - RUITrailersProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;
@interface RUITrailersProvider : NSObject <BRProvider>
{
    NSArray * _trailers;
    <BRControlFactory> * _factory;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (long)dataCount;
- (RUITrailersProvider *)initWithData:(NSData *)arg0 controlFactory:(<BRControlFactory> *)arg1;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (void)dealloc;
- (NSObject *)dataAtIndex:(long)arg0;

@end
