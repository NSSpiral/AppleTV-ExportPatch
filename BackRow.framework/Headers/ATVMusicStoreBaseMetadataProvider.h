/* Runtime dump - ATVMusicStoreBaseMetadataProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRMetadataProvider;

@class BRControl;
@interface ATVMusicStoreBaseMetadataProvider : NSObject <BRMetadataProvider>
{
    NSDictionary * _catalogItem;
    char _useAlternateMetadata;
    char _shouldPerformUberLayout;
    char _shouldShowExpandedSummary;
    UIColor * _titleColor;
    UIColor * _bodyColor;
    UIColor * _secondaryBodyColor;
}

@property (nonatomic) char shouldPerformUberLayout;
@property (retain, nonatomic) UIColor * titleColor;
@property (retain, nonatomic) UIColor * bodyColor;
@property (retain, nonatomic) UIColor * secondaryBodyColor;
@property (nonatomic) char shouldShowExpandedSummary;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)providerWithCatalogItem:(NSDictionary *)arg0;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (ATVMusicStoreBaseMetadataProvider *)initWithCatalogItem:(NSDictionary *)arg0;
- (void)setBodyColor:(UIColor *)arg0;
- (void)setSecondaryBodyColor:(UIColor *)arg0;
- (void)populateMetadataForControl:(BRControl *)arg0;
- (char)useAlternateMetadata;
- (void)setUseAlternateMetadata:(char)arg0;
- (char)shouldPerformUberLayout;
- (void)setShouldPerformUberLayout:(char)arg0;
- (UIColor *)bodyColor;
- (UIColor *)secondaryBodyColor;
- (char)shouldShowExpandedSummary;
- (void)setShouldShowExpandedSummary:(char)arg0;
- (void)dealloc;
- (UIColor *)titleColor;
- (void)setTitleColor:(UIColor *)arg0;
- (NSObject *)dataAtIndex:(long)arg0;

@end
