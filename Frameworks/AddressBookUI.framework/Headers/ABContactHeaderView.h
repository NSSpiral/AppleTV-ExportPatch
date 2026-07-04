/* Runtime dump - ABContactHeaderView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactHeaderView : UIView
{
    char _needsReload;
    NSDictionary * _nameTextAttributes;
    <ABPresenterDelegate> * _delegate;
    <ABContactHeaderViewDelegate> * _headerDelegate;
    CNContactStyle * _contactStyle;
    NSMutableArray * _headerConstraints;
    ABContactPhotoView * _photoView;
    CNContact * _contact;
    struct UIEdgeInsets _contentMargins;
}

@property (nonatomic) struct UIEdgeInsets contentMargins;
@property (copy, nonatomic) NSDictionary * nameTextAttributes;
@property (nonatomic) <ABPresenterDelegate> * delegate;
@property (nonatomic) <ABContactHeaderViewDelegate> * headerDelegate;
@property (retain, nonatomic) CNContactStyle * contactStyle;
@property (retain, nonatomic) NSMutableArray * headerConstraints;
@property (readonly, nonatomic) ABContactPhotoView * photoView;
@property (readonly, nonatomic) CNContact * contact;

- (CNContact *)contact;
- (void)reloadDataPreservingChanges:(char)arg0;
- (void)setContactStyle:(CNContactStyle *)arg0;
- (CNContactStyle *)contactStyle;
- (ABContactHeaderView *)initWithContact:(CNContact *)arg0 frame:(struct CGRect)arg1;
- (void)setNameTextAttributes:(NSDictionary *)arg0;
- (void)reloadDataIfNeeded;
- (NSMutableArray *)headerConstraints;
- (void)setHeaderConstraints:(NSMutableArray *)arg0;
- (ABContactPhotoView *)photoView;
- (struct UIEdgeInsets)contentMargins;
- (void)setNeedsReload;
- (NSDictionary *)nameTextAttributes;
- (void)updateWithNewContact:(char)arg0;
- (void)updateFontSizes;
- (void)setContentMargins:(struct UIEdgeInsets)arg0;
- (void)saveContactPhoto;
- (<ABContactHeaderViewDelegate> *)headerDelegate;
- (void)setHeaderDelegate:(<ABContactHeaderViewDelegate> *)arg0;
- (void)dealloc;
- (void)setDelegate:(<ABPresenterDelegate> *)arg0;
- (<ABPresenterDelegate> *)delegate;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2;
- (void)updateConstraints;

@end
