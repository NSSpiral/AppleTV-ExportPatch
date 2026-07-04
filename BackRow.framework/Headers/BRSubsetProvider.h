/* Runtime dump - BRSubsetProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;
@interface BRSubsetProvider : NSObject <BRProvider>
{
    id _provider;
    int _dataLimit;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)providerWithProvider:(NSObject *)arg0;
+ (NSObject *)providerWithProvider:(NSObject *)arg0 dataLimit:(int)arg1;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (void)_providerUpdated:(id)arg0;
- (BRSubsetProvider *)initWithProvider:(NSObject *)arg0 dataLimit:(int)arg1;
- (void)setDataLimit:(int)arg0;
- (int)dataLimit;
- (void)dealloc;
- (NSObject *)dataAtIndex:(long)arg0;

@end
