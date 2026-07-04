/* Runtime dump - ABContactView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactView : UITableView
{
    char _cellsLayoutCachingEnabled;
    UIView * _customHeaderView;
    CNContact * _contact;
    UIColor * _sectionBackgroundColor;
    UIColor * _selectedCellBackgroundColor;
    NSDictionary * _labelTextAttributes;
    NSDictionary * _valueTextAttributes;
    NSDictionary * _actionTextAttributes;
    struct UIEdgeInsets _contentMargins;
}

@property (retain, nonatomic) UIView * customHeaderView;
@property (readonly, nonatomic) ABContactHeaderView * defaultHeaderView;
@property (retain, nonatomic) CNContact * contact;
@property (nonatomic) <ABContactViewDataSource> * dataSource;
@property (nonatomic) <ABContactViewDelegate> * delegate;
@property (nonatomic) char cellsLayoutCachingEnabled;
@property (retain, nonatomic) UIColor * backgroundColor;
@property (retain, nonatomic) UIColor * separatorColor;
@property (retain, nonatomic) UIColor * sectionBackgroundColor;
@property (retain, nonatomic) UIColor * selectedCellBackgroundColor;
@property (copy, nonatomic) NSDictionary * labelTextAttributes;
@property (copy, nonatomic) NSDictionary * valueTextAttributes;
@property (copy, nonatomic) NSDictionary * actionTextAttributes;
@property (nonatomic) struct UIEdgeInsets contentMargins;

+ (char)isMultiValueProperty:(NSObject *)arg0;
+ (char)isFixedValueProperty:(NSObject *)arg0;
+ (NSDictionary *)requiredNameProperties;
+ (NSDictionary *)nameProperties;
+ (NSObject *)cellIdentifierForClass:(Class)arg0;
+ (ABContactView *)namePropertiesForContact:(id)arg0;
+ (ABContactView *)cellIdentifierForActions;
+ (ABContactView *)cellIdentifierForSplitActions;
+ (NSString *)cellIdentifierForPropertyPlaceholder;
+ (NSObject *)cellIdentifierForFaceTimeGroup;
+ (NSObject *)cellIdentifierForLinkedCardsGroup;
+ (NSObject *)cellIdentifierForLinkedCardsEditingGroup;
+ (NSObject *)cellIdentifierForLinkedCardsPlaceholderGroup;
+ (NSObject *)cellIdentifierForProperty:(NSString *)arg0;
+ (NSObject *)cellIdentifierForEditingProperty:(NSObject *)arg0;
+ (Class)classForCellIdentifier:(NSString *)arg0;
+ (NSDictionary *)allCardProperties;
+ (ABContactView *)defaultCardProperties;
+ (NSDictionary *)optionalCardProperties;

- (CNContact *)contact;
- (void)setContact:(CNContact *)arg0;
- (void)setLabelTextAttributes:(NSDictionary *)arg0;
- (void)setAttributesFromContactView:(NSObject *)arg0;
- (UIColor *)sectionBackgroundColor;
- (struct UIEdgeInsets)contentMargins;
- (void)updateFontSizes;
- (void)setContentMargins:(struct UIEdgeInsets)arg0;
- (void)setSectionBackgroundColor:(UIColor *)arg0;
- (void)setValueTextAttributes:(NSDictionary *)arg0;
- (void)setActionTextAttributes:(NSDictionary *)arg0;
- (void)updateFontColors;
- (void)registerContactCellClass:(Class)arg0;
- (ABContactView *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1 contact:(CNContact *)arg2;
- (UIView *)customHeaderView;
- (void)setCustomHeaderView:(UIView *)arg0;
- (UIColor *)selectedCellBackgroundColor;
- (void)setSelectedCellBackgroundColor:(UIColor *)arg0;
- (NSDictionary *)labelTextAttributes;
- (NSDictionary *)valueTextAttributes;
- (NSDictionary *)actionTextAttributes;
- (ABContactHeaderView *)defaultHeaderView;
- (void)updateVisibleCells;
- (void)applyCellAppearance:(NSObject *)arg0;
- (ABContactView *)initWithFrame:(struct CGRect)arg0 contact:(struct CGSize)arg1;
- (char)isCellsLayoutCachingEnabled;
- (void)setCellsLayoutCachingEnabled:(char)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (UIColor *)backgroundColor;
- (void)layoutMarginsDidChange;
- (void)tintColorDidChange;
- (void)setTableHeaderView:(UIView *)arg0;

@end
