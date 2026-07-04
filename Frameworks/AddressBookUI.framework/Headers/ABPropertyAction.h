/* Runtime dump - ABPropertyAction
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyAction : ABContactAction
{
    NSArray * _propertyItems;
}

@property (nonatomic) <ABPropertyActionDelegate> * delegate;
@property (copy, nonatomic) NSArray * propertyItems;
@property (readonly, nonatomic) char canPerformAction;

+ (void)performDefaultActionForItem:(NSObject *)arg0 sender:(NSObject *)arg1;

- (void)performActionWithSender:(NSObject *)arg0;
- (NSArray *)propertyItems;
- (ABPropertyAction *)initWithContact:(CNContact *)arg0 propertyItems:(NSArray *)arg1;
- (char)canPerformAction;
- (void)performActionForItem:(NSObject *)arg0 sender:(NSObject *)arg1;
- (ABPropertyAction *)initWithContact:(CNContact *)arg0 propertyItem:(ABPropertyGroupItem *)arg1;
- (void)setPropertyItems:(NSArray *)arg0;
- (void)dealloc;

@end
