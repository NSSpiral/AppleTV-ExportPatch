/* Runtime dump - BRDividerProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;
@protocol BRControlHeightFactory;
@protocol BRProvider;

@class ATVFeedDividerElement, BRControl, BRHorizontalDividerControl;
@interface BRDividerProvider : NSObject <BRControlFactory, BRControlHeightFactory, BRProvider>
{
    <BRProvider> * _provider;
    BRHorizontalDividerControl * _topDivider;
    char _dividerHidden;
    char _showDivider;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)providerWithProvider:(<BRProvider> *)arg0;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (float)heightForControlForData:(NSData *)arg0 requestedBy:(BRControl *)arg1;
- (ATVFeedDividerElement *)divider;
- (void)addDividerWithLabel:(NSString *)arg0;
- (void)setDividerHidden:(char)arg0;
- (char)_shouldShowDivider;
- (void)_providerDataSetChanged:(NSNotification *)arg0;
- (void)_providerItemsModified:(id)arg0;
- (void)_updateTopDividerControl;
- (void)removeDivider;
- (char)dividerHidden;
- (char)dividerVisible;
- (id)_shiftRangesDown:(id)arg0;
- (void)dealloc;
- (NSString *)identifier;
- (void)reset;
- (NSString *)accessibilityLabel;
- (NSObject *)dataAtIndex:(long)arg0;
- (BRDividerProvider *)initWithProvider:(<BRProvider> *)arg0;
- (<BRProvider> *)provider;

@end
