/* Runtime dump - PSExpandableListGroupController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSExpandableListGroupController : NSObject <PSSpecifierGroupController>
{
    PSListController * _listController;
    PSSpecifier * _groupSpecifier;
    int _collaspeAfterCount;
    NSMutableArray * _specifiers;
    char _showAll;
    PSSpecifier * _showAllSpecifier;
    PSSpecifier * _spinnerSpecifier;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)reloadSpecifier:(id)arg0;
- (NSMutableArray *)specifiers;
- (int)_groupIndex;
- (PSSpecifier *)spinnerSpecifier;
- (PSExpandableListGroupController *)initWithListController:(PSListController *)arg0 groupSpecifier:(PSSpecifier *)arg1 collapseAfterCount:(int)arg2;
- (PSSpecifier *)showAllSpecifier;
- (void)showAll;
- (PSExpandableListGroupController *)initWithListController:(PSListController *)arg0 groupSpecifier:(PSSpecifier *)arg1;
- (void)addSpecifiers:(id)arg0;
- (void)removeAllSpecifiers;

@end
