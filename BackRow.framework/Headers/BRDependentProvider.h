/* Runtime dump - BRDependentProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;

@class BRProviderGroup;
@interface BRDependentProvider : NSObject <BRProvider>
{
    <BRProvider> * _provider;
    BRProviderGroup * _providerGroup;
    long _threshold;
    char _hidden;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)providerWithDependentProvider:(NSObject *)arg0 providers:(NSArray *)arg1 threshold:(long)arg2;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (NSArray *)providers;
- (void)_providerDataSetChanged:(NSNotification *)arg0;
- (void)_providerItemsModified:(id)arg0;
- (BRDependentProvider *)initWithDependentProvider:(NSObject *)arg0 providers:(NSArray *)arg1 threshold:(long)arg2;
- (void)_groupDataCountChanged:(NSNotification *)arg0;
- (void)dealloc;
- (NSObject *)dataAtIndex:(long)arg0;
- (long)threshold;

@end
