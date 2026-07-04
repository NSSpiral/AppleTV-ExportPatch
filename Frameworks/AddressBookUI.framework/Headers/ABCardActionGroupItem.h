/* Runtime dump - ABCardActionGroupItem
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCardActionGroupItem : ABCardGroupItem
{
    NSMutableArray * _actions;
}

@property (readonly, nonatomic) NSArray * actions;

+ (NSObject *)actionGroupItemWithAction:(NSObject *)arg0;
+ (ABCardActionGroupItem *)actionGroupItemWithActions:(NSArray *)arg0;

- (void)dealloc;
- (ABCardActionGroupItem *)init;
- (NSArray *)actions;
- (Class)cellClass;
- (void)addAction:(NSObject *)arg0;
- (ABCardActionGroupItem *)initWithAction:(NSObject *)arg0;

@end
