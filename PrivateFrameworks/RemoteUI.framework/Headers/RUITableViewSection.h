/* Runtime dump - RUITableViewSection
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUITableViewSection : RUIElement <RUITableHeaderDelegate, RUITableFooterDelegate>
{
    NSMutableArray * _rows;
    int _disclosureLimit;
    RUITableViewRow * _showAllRow;
    NSNumber * _drawsTopSeparator;
    char _configured;
    <RUITableViewSectionDelegate> * _delegate;
    UIView<RemoteUITableHeader> * _headerView;
    UIView<RemoteUITableFooter> * _footerView;
    float _headerHeight;
    float _footerHeight;
    NSString * _headerText;
    NSDictionary * _headerAttributes;
    NSString * _HTMLHeaderContent;
    NSString * _detailHeaderText;
    NSString * _subHeaderText;
    NSDictionary * _subHeaderAttributes;
    NSString * _footerText;
    NSString * _HTMLFooterContent;
    NSDictionary * _footerAttributes;
}

@property (weak, nonatomic) <RUITableViewSectionDelegate> * delegate;
@property (readonly, nonatomic) NSArray * rows;
@property (retain, nonatomic) UIView<RemoteUITableHeader> * headerView;
@property (retain, nonatomic) UIView<RemoteUITableFooter> * footerView;
@property (nonatomic) float headerHeight;
@property (nonatomic) float footerHeight;
@property (nonatomic) char drawTopSeparator;
@property (copy, nonatomic) NSString * headerText;
@property (copy, nonatomic) NSDictionary * headerAttributes;
@property (copy, nonatomic) NSString * HTMLHeaderContent;
@property (copy, nonatomic) NSString * detailHeaderText;
@property (copy, nonatomic) NSString * subHeaderText;
@property (copy, nonatomic) NSDictionary * subHeaderAttributes;
@property (copy, nonatomic) NSString * footerText;
@property (copy, nonatomic) NSString * HTMLFooterContent;
@property (copy, nonatomic) NSDictionary * footerAttributes;
@property (nonatomic) char configured;

- (NSURL *)sourceURL;
- (void)setImage:(UIImage *)arg0;
- (void)setDelegate:(<RUITableViewSectionDelegate> *)arg0;
- (RUITableViewSection *)init;
- (<RUITableViewSectionDelegate> *)delegate;
- (UIView<RemoteUITableHeader> *)headerView;
- (void)setHeaderView:(UIView<RemoteUITableHeader> *)arg0;
- (NSArray *)rows;
- (void).cxx_destruct;
- (float)headerHeight;
- (float)footerHeight;
- (void)setHeaderHeight:(float)arg0;
- (void)setFooterHeight:(float)arg0;
- (UIView<RemoteUITableFooter> *)footerView;
- (void)setFooterView:(UIView<RemoteUITableFooter> *)arg0;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)populatePostbackDictionary:(NSDictionary *)arg0;
- (void)insertRow:(id)arg0 atIndex:(unsigned int)arg1;
- (void)removeRowAtIndex:(unsigned int)arg0;
- (void)setImageSize:(struct CGSize)arg0;
- (void)setImageAlignment:(int)arg0;
- (NSString *)subElementsWithName:(NSString *)arg0;
- (void)footerView:(UIView<RemoteUITableFooter> *)arg0 activatedLinkWithURL:(NSString *)arg1;
- (void)addRow:(id)arg0;
- (void)setHTMLHeaderContent:(NSObject *)arg0;
- (void)setHeaderText:(NSString *)arg0;
- (void)setHeaderAttributes:(NSDictionary *)arg0;
- (void)setDetailHeaderText:(NSString *)arg0;
- (void)setSubHeaderText:(NSString *)arg0;
- (void)setSubHeaderAttributes:(NSDictionary *)arg0;
- (void)setHTMLFooterContent:(NSObject *)arg0;
- (void)setFooterText:(NSString *)arg0;
- (void)setFooterAttributes:(NSDictionary *)arg0;
- (NSDictionary *)footerAttributes;
- (NSDictionary *)headerAttributes;
- (char)configured;
- (void)setConfigured:(char)arg0;
- (void)setDrawTopSeparator:(char)arg0;
- (NSDictionary *)subHeaderAttributes;
- (NSString *)HTMLHeaderContent;
- (NSString *)detailHeaderText;
- (NSString *)subHeaderText;
- (Class)_customHeaderClass;
- (NSString *)headerText;
- (NSString *)colorFromAttributeString:(NSString *)arg0;
- (NSString *)HTMLFooterContent;
- (NSString *)footerText;
- (Class)_customFooterClass;
- (void)headerView:(UIView<RemoteUITableHeader> *)arg0 activatedLinkWithURL:(NSString *)arg1;
- (char)drawTopSeparator;
- (char)hasValueForDrawsTopSeparator;
- (void)didTapShowAllRowWithTable:(id)arg0;
- (char)hasCustomHeader;
- (char)hasCustomFooter;

@end
