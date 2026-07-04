/* Runtime dump - BRMediaObjectProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;
@interface BRMediaObjectProvider : NSObject <BRProvider>
{
    <BRControlFactory> * _controlFactory;
    NSArray * _mediaObjects;
    NSString * _name;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)providerWithMediaObjects:(NSArray *)arg0 controlFactory:(<BRControlFactory> *)arg1;

- (long)dataCount;
- (<BRControlFactory> *)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (void)setControlFactory:(<BRControlFactory> *)arg0;
- (NSArray *)mediaObjects;
- (long)controlCount;
- (void)setMediaObjects:(NSArray *)arg0;
- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)identifier;
- (NSObject *)dataAtIndex:(long)arg0;

@end
