/* Runtime dump - BRLegacyProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;
@protocol BRControlHeightFactory;
@protocol BRProvider;

@class BRControl;
@interface BRLegacyProvider : NSObject <BRControlFactory, BRControlHeightFactory, BRProvider>
{
    <BRMenuListItemProvider> * _source;
    NSMutableArray * _dividers;
    long _firstDividerIndex;
    long _lastDividerIndex;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (void)setDatasource:(YTSearchVideoDataSource *)arg0;
- (float)heightForControlForData:(NSData *)arg0 requestedBy:(BRControl *)arg1;
- (void)addDividerAtIndex:(long)arg0 withLabel:(NSString *)arg1;
- (long)providerIndexForDatasourceIndex:(long)arg0;
- (NSObject *)datasource;
- (void)_updateDividers;
- (long)_providerRowForListRow:(long)arg0 divider:(id *)arg1;
- (long)_listRowForProviderRow:(long)arg0;
- (void)removeDividerAtIndex:(long)arg0;
- (void)removeDividers;
- (long)datasourceIndexForProviderIndex:(long)arg0;
- (void)dealloc;
- (NSObject *)dataAtIndex:(long)arg0;

@end
