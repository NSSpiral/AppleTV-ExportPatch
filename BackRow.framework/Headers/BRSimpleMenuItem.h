/* Runtime dump - BRSimpleMenuItem
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRSimpleMenuItem : NSObject
{
    NSString * _title;
    NSString * _rightJustifiedText;
    int _titlePosition;
    int _menuItemType;
}

+ (BRSimpleMenuItem *)simpleMenuItemWithTitle:(NSString *)arg0 titlePosition:(int)arg1 menuItemType:(int)arg2;
+ (BRSimpleMenuItem *)simpleMenuItemWithTitle:(NSString *)arg0 rightJustifiedText:(NSString *)arg1 titlePosition:(int)arg2 menuItemType:(int)arg3;

- (NSString *)rightJustifiedText;
- (int)titlePosition;
- (int)menuItemType;
- (BRSimpleMenuItem *)initWithTitle:(NSString *)arg0 rightJustifiedText:(NSString *)arg1 titlePosition:(int)arg2 menuItemType:(int)arg3;
- (BRSimpleMenuItem *)initWithTitle:(NSString *)arg0 titlePosition:(int)arg1 menuItemType:(int)arg2;
- (void)dealloc;
- (NSString *)title;

@end
