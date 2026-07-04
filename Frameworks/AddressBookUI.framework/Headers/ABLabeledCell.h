/* Runtime dump - ABLabeledCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABLabeledCell : ABContactCell
{
    NSDictionary * _labelTextAttributes;
    NSDictionary * _valueTextAttributes;
    UIImageView * _chevron;
}

@property (readonly, nonatomic) float chevronWidth;
@property (readonly, nonatomic) UIImageView * chevron;
@property (readonly, nonatomic) UIView<ABText> * labelView;
@property (readonly, nonatomic) UIView<ABText> * valueView;
@property (readonly, nonatomic) float topBaselineConstant;
@property (readonly, nonatomic) float bottomBaselineConstant;
@property (readonly, nonatomic) UIView * rightMostView;
@property (readonly, nonatomic) UILabel * standardLabelView;
@property (readonly, nonatomic) UILabel * standardValueView;
@property (readonly, nonatomic) NSString * labelString;
@property (readonly, nonatomic) NSString * valueString;
@property (copy, nonatomic) NSDictionary * labelTextAttributes;
@property (copy, nonatomic) NSDictionary * valueTextAttributes;

+ (char)wantsChevron;
+ (char)wantsHorizontalLayout;
+ (char)wantsStandardConstraints;

- (UILabel *)standardLabelView;
- (void)setLabelTextAttributes:(NSDictionary *)arg0;
- (NSArray *)variableConstraints;
- (UIView<ABText> *)labelView;
- (float)minCellHeight;
- (NSArray *)constantConstraints;
- (UIView *)rightMostView;
- (void)setValueTextAttributes:(NSDictionary *)arg0;
- (NSDictionary *)labelTextAttributes;
- (NSDictionary *)valueTextAttributes;
- (UILabel *)standardValueView;
- (UIView<ABText> *)valueView;
- (NSString *)labelString;
- (NSString *)valueString;
- (float)chevronWidth;
- (NSObject *)constantConstraintsForStandardLayout;
- (NSObject *)variableConstraintsForStandardLayout;
- (NSObject *)constantConstraintsForHorizontalLayout;
- (NSObject *)constantConstraintsForVerticalLayout;
- (NSObject *)variableConstraintsForHorizontalLayout;
- (NSObject *)variableConstraintsForVerticalLayout;
- (float)topBaselineConstant;
- (float)bottomBaselineConstant;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (ABLabeledCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)tintColorDidChange;
- (UIImageView *)chevron;

@end
