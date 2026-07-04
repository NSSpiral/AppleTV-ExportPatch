/* Runtime dump - UITableViewRow
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewRow : NSObject <NSCoding>
{
    int _indentationLevel;
    UITableViewCell * _cell;
    float _height;
}

@property (nonatomic) float height;
@property (retain, nonatomic) UITableViewCell * cell;

+ (PTSChoiceRow *)row;

- (void)dealloc;
- (UITableViewRow *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setIndentationLevel:(int)arg0;
- (float)height;
- (int)indentationLevel;
- (UITableViewCell *)cell;
- (void)setHeight:(float)arg0;
- (void)setCell:(UITableViewCell *)arg0;

@end
