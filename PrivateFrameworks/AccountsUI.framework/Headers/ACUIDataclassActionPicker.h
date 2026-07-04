/* Runtime dump - ACUIDataclassActionPicker
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIDataclassActionPicker : NSObject
{
    NSMutableArray * _affectedDataclasses;
    ACAccount * _affectedAccount;
    NSArray * _actions;
}

@property (readonly, nonatomic) NSArray * actions;
@property (copy, nonatomic) NSArray * affectedDataclasses;
@property (readonly, nonatomic) ACAccount * affectedAccount;
@property (readonly, nonatomic) char hasDestructiveActions;
@property (readonly, nonatomic) ACDataclassAction * firstDestructiveAction;
@property (readonly, nonatomic) int priorityIndex;

- (NSArray *)actions;
- (NSString *)title;
- (NSString *)message;
- (void).cxx_destruct;
- (NSObject *)showInViewController:(BRController *)arg0;
- (ACDataclassAction *)firstDestructiveAction;
- (char)hasDestructiveActions;
- (NSObject *)descriptionForDataclassAction:(NSObject *)arg0;
- (NSArray *)affectedDataclasses;
- (char)hasActionOfType:(int)arg0;
- (ACAccount *)affectedAccount;
- (ACUIDataclassActionPicker *)initWithActions:(NSArray *)arg0 affectingAccount:(NSObject *)arg1;
- (void)addAffectedDataclass:(id)arg0;
- (int)priorityIndex;
- (void)setAffectedDataclasses:(NSArray *)arg0;

@end
