/* Runtime dump - UIWebOptGroup
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebOptGroup : NSObject
{
    <UIWebSelectedItemPrivate> * _group;
    NSArray * _options;
    int _offset;
}

@property (readonly, nonatomic) int offset;
@property (retain, nonatomic) <UIWebSelectedItemPrivate> * group;
@property (retain, nonatomic) NSArray * options;

- (void)dealloc;
- (int)offset;
- (void)setGroup:(<UIWebSelectedItemPrivate> *)arg0;
- (void)setOptions:(NSArray *)arg0;
- (UIWebOptGroup *)initWithGroup:(<UIWebSelectedItemPrivate> *)arg0 itemOffset:(int)arg1;
- (<UIWebSelectedItemPrivate> *)group;
- (NSArray *)options;

@end
