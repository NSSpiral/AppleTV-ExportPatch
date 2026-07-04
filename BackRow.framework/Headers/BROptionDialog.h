/* Runtime dump - BROptionDialog
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuController.h>

@protocol BRMenuListItemProvider;

@class BRControl;
@interface BROptionDialog : BRMenuController <BRMenuListItemProvider>
{
    NSString * _tagString;
    int _currentSelection;
    NSDictionary * _userInfo;
    NSMutableArray * _options;
    id _delegate;
    SEL _actionSelector;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)addOptionText:(NSString *)arg0 isDefault:(char)arg1;
- (void)addOptionText:(NSString *)arg0;
- (void)_setSelectedIndex:(long)arg0;
- (float)heightForRow:(long)arg0;
- (char)rowSelectable:(long)arg0;
- (BRControl *)itemForRow:(long)arg0;
- (void)setActionSelector:(SEL)arg0 target:(NSObject *)arg1;
- (float)listVerticalOffset;
- (NSString *)tagString;
- (char)_itemSelected:(id)arg0;
- (void)dealloc;
- (BROptionDialog *)init;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSDictionary *)userInfo;
- (void)setTag:(NSString *)arg0;
- (long)selectedIndex;
- (NSString *)selectedText;
- (NSString *)titleForRow:(long)arg0;
- (long)itemCount;

@end
