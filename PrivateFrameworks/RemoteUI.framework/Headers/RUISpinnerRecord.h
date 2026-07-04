/* Runtime dump - RUISpinnerRecord
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUISpinnerRecord : NSObject
{
    NSArray * _rightItems;
    NSArray * _leftItems;
    UINavigationItem * _navigationItem;
    NSString * _title;
}

@property (retain, nonatomic) NSArray * rightItems;
@property (retain, nonatomic) NSArray * leftItems;
@property (retain, nonatomic) UINavigationItem * navigationItem;
@property (retain, nonatomic) NSString * title;

- (void)setTitle:(NSString *)arg0;
- (UINavigationItem *)navigationItem;
- (NSString *)title;
- (void).cxx_destruct;
- (NSArray *)rightItems;
- (void)setRightItems:(NSArray *)arg0;
- (NSArray *)leftItems;
- (void)setLeftItems:(NSArray *)arg0;
- (void)setNavigationItem:(UINavigationItem *)arg0;

@end
