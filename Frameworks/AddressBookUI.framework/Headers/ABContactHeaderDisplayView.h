/* Runtime dump - ABContactHeaderDisplayView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactHeaderDisplayView : ABContactHeaderView
{
    UILabel * _nameLabel;
    UILabel * _taglineLabel;
    UILabel * _fakeTaglineAlignmentLabel;
    UIView * _markerView;
    UIView * _personHeaderView;
    NSDictionary * _taglineTextAttributes;
    NSString * _alternateName;
    NSString * _message;
}

@property (copy, nonatomic) NSDictionary * taglineTextAttributes;
@property (retain, nonatomic) NSString * alternateName;
@property (retain, nonatomic) NSString * message;
@property (retain, nonatomic) UIView * personHeaderView;

+ (ABContactHeaderDisplayView *)contactHeaderViewWithContact:(id)arg0 personHeaderView:(UIView *)arg1;

- (NSString *)alternateName;
- (void)reloadDataPreservingChanges:(char)arg0;
- (void)setNameTextAttributes:(NSDictionary *)arg0;
- (void)updateFontSizes;
- (ABContactHeaderDisplayView *)initWithContact:(CNContact *)arg0 personHeaderView:(UIView *)arg1 frame:(struct CGRect)arg2;
- (void)handleNameLabelLongPress:(id)arg0;
- (void)setTaglineTextAttributes:(NSDictionary *)arg0;
- (void)menuWillHide:(id)arg0;
- (void)disablePhotoTapGesture;
- (id)_headerStringForContact:(id)arg0;
- (id)_taglineStringForContact:(id)arg0;
- (void)_updatePhotoView;
- (NSDictionary *)taglineTextAttributes;
- (UIView *)personHeaderView;
- (void)setPersonHeaderView:(UIView *)arg0;
- (void)setAlternateName:(NSString *)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (char)canPerformAction:(SEL)arg0 withSender:(NSObject *)arg1;
- (char)canBecomeFirstResponder;
- (void)tintColorDidChange;
- (NSString *)message;
- (void)updateConstraints;
- (void)copy:(id)arg0;
- (void)setMessage:(NSString *)arg0;

@end
