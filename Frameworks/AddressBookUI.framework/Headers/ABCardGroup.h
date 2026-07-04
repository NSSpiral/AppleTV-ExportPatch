/* Runtime dump - ABCardGroup
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCardGroup : NSObject <NSCopying>
{
    NSMutableArray * _items;
    NSMutableArray * _actions;
    NSArray * _actionItems;
    char _useSplitActions;
    char _addSpacerFromPreviousGroup;
    CNContact * _contact;
    NSString * _title;
}

@property (retain, nonatomic) CNContact * contact;
@property (readonly, nonatomic) NSString * title;
@property (readonly, nonatomic) NSArray * actionItems;
@property (readonly, nonatomic) NSArray * displayItems;
@property (readonly, nonatomic) NSArray * editingItems;
@property (readonly, nonatomic) NSArray * actions;
@property (nonatomic) char useSplitActions;
@property (nonatomic) char addSpacerFromPreviousGroup;

+ (ABCardGroup *)groupForContact:(id)arg0;

- (NSArray *)displayItems;
- (ABCardGroup *)initWithContact:(CNContact *)arg0;
- (NSArray *)_loadActionItems;
- (void)removeActionWithTitle:(NSString *)arg0;
- (void)addAction:(NSObject *)arg0 withTitle:(NSString *)arg1;
- (NSString *)addActionWithTitle:(NSString *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2 destructive:(char)arg3;
- (char)useSplitActions;
- (NSArray *)editingItems;
- (NSArray *)actionItems;
- (NSString *)addActionWithTitle:(NSString *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2;
- (void)addAction:(NSObject *)arg0 withTitle:(NSString *)arg1 color:(UIColor *)arg2 transportType:(int)arg3;
- (void)removeActionWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (CNContact *)contact;
- (void)setContact:(CNContact *)arg0;
- (void)setUseSplitActions:(char)arg0;
- (char)addSpacerFromPreviousGroup;
- (void)setAddSpacerFromPreviousGroup:(char)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSArray *)actions;
- (NSString *)title;
- (ABCardGroup *)copyWithZone:(struct _NSZone *)arg0;

@end
