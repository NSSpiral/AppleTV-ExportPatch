/* Runtime dump - BRTableRow
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRTableRow : BRControl
{
    NSArray * _items;
    NSArray * _widthValues;
}

+ (BRTableRow *)tableRowWithItems:(NSArray *)arg0 widthValues:(NSArray *)arg1;

- (void)layoutSubcontrols;
- (BRTableRow *)initWithItems:(NSArray *)arg0 widthValues:(NSArray *)arg1;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;

@end
