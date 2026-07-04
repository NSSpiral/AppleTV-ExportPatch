/* Runtime dump - CertUIKeyDataCell
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertUIKeyDataCell : UITableViewCell
{
    UILabel * _keyLabel;
    UILabel * _valueLabel;
    NSArray * _constraints;
}

@property (retain, nonatomic) UILabel * keyLabel;
@property (retain, nonatomic) UILabel * valueLabel;
@property (retain, nonatomic) NSArray * constraints;

- (UILabel *)valueLabel;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (CertUIKeyDataCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (NSArray *)constraints;
- (void)setSelected:(char)arg0 animated:(char)arg1;
- (void).cxx_destruct;
- (UILabel *)keyLabel;
- (void)_setupConstraints;
- (void)setKeyLabel:(UILabel *)arg0;
- (void)_setup;
- (void)setConstraints:(NSArray *)arg0;
- (void)setValueLabel:(UILabel *)arg0;

@end
