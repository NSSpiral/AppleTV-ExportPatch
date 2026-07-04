/* Runtime dump - BRPhotoProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;
@interface BRPhotoProvider : NSObject <BRProvider>
{
    NSArray * _collections;
    <BRControlFactory> * _controlFactory;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRPhotoProvider *)providerWithCollections:(NSArray *)arg0 controlFactory:(<BRControlFactory> *)arg1;

- (long)dataCount;
- (<BRControlFactory> *)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (void)setControlFactory:(<BRControlFactory> *)arg0;
- (BRPhotoProvider *)initWithCollections:(NSArray *)arg0 controlFactory:(<BRControlFactory> *)arg1;
- (void)dealloc;
- (NSObject *)dataAtIndex:(long)arg0;

@end
