/* Runtime dump - ABActionsController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABActionsController : NSObject
{
    int _property;
    int _multiValueIdentifier;
    id _value;
    NSString * _stringValue;
    void * _context;
    int _lastPropertyForActions;
    struct __CFArray * _actionsForProperty;
    ABUIPerson * _person;
}

@property (retain, nonatomic) ABUIPerson * person;

+ (int)defaultActionForProperty:(int)arg0;
+ (NSObject *)newActionsControllerForProperty:(int)arg0;

- (struct __CFArray *)_actionsForProperty:(int)arg0;
- (int)_actionAtIndex:(int)arg0 forProperty:(int)arg1;
- (NSObject *)titleForAction:(int)arg0;
- (void)_performAction:(int)arg0 forProperty:(int)arg1;
- (void)performAction:(int)arg0;
- (NSObject *)urlForAction:(int)arg0 forProperty:(int)arg1;
- (int)actionsCountForProperty:(int)arg0;
- (NSObject *)titleAtIndex:(int)arg0 forProperty:(int)arg1;
- (void)resetPrimaryPropertyActions;
- (void)performDefaultAction;
- (void)performActionAtIndex:(int)arg0 forProperty:(int)arg1;
- (void)setMultiValueIdentifier:(int)arg0;
- (void)dealloc;
- (ABActionsController *)init;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (void *)context;
- (void)setContext:(void *)arg0;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (ABUIPerson *)person;
- (void)setPerson:(ABUIPerson *)arg0;
- (int)defaultAction;
- (ABActionsController *)initWithProperty:(int)arg0;

@end
