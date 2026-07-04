/* Runtime dump - ABPersonTableActionDataSource
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableActionDataSource : NSObject
{
    NSMutableArray * _topActions;
    NSMutableArray * _bottomActions;
    struct __CFDictionary * _actionsByProperty;
    struct __CFDictionary * _actionGroupingsByProperty;
    struct __CFDictionary * _inlineActionsByProperty;
    struct __CFSet * _hiddenActions;
}

- (char)hasActionWithTarget:(NSObject *)arg0 selector:(SEL)arg1 property:(int)arg2 actionGrouping:(int)arg3 ordering:(int)arg4 outActions:(id *)arg5 outIndex:(int *)arg6;
- (NSMutableArray *)topActions;
- (NSMutableArray *)bottomActions;
- (struct __CFDictionary *)inlineActionsByProperty;
- (struct __CFDictionary *)actionsByProperty;
- (struct __CFDictionary *)actionGroupingsByProperty;
- (NSObject *)actionsForProperty:(int)arg0 withActionGrouping:(int)arg1;
- (char)hasActionWithTarget:(NSObject *)arg0 selector:(SEL)arg1 matchProperty:(char)arg2 property:(int)arg3 inArray:(NSArray *)arg4 outActions:(id *)arg5 outIndex:(int *)arg6;
- (void)removeActionWithTarget:(NSObject *)arg0 selector:(SEL)arg1 forProperty:(int)arg2 withActionGrouping:(int)arg3 ordering:(int)arg4;
- (struct __CFArray *)groupingsForProperty:(int)arg0;
- (NSString *)addActionWithTitle:(NSString *)arg0 shortTitle:(NSString *)arg1 detailText:(NSString *)arg2 style:(int)arg3 target:(NSObject *)arg4 selector:(SEL)arg5 property:(int)arg6 actionGrouping:(int)arg7 ordering:(int)arg8;
- (NSObject *)newActionsForProperty:(int)arg0;
- (int)groupingCountForProperty:(int)arg0;
- (int)actionCountForProperty:(int)arg0 withActionGrouping:(int)arg1;
- (NSObject *)actionForProperty:(int)arg0 withActionGrouping:(int)arg1 atIndex:(int)arg2;
- (NSObject *)actionsForProperty:(int)arg0 withActionGroupingAtIndex:(int)arg1;
- (int)actionCountForActionGrouping:(int)arg0;
- (struct __CFArray *)indexesOfActionsForProperty:(int)arg0 withActionGrouping:(int)arg1;
- (id)actionWithActionGrouping:(int)arg0 atIndex:(int)arg1;
- (char)isActionHidden:(id)arg0;
- (void)setAction:(NSObject *)arg0 hidden:(char)arg1;
- (void)removeAction:(NSObject *)arg0;
- (void)dealloc;

@end
