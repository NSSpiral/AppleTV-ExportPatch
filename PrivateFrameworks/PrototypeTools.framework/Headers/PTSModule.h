/* Runtime dump - PTSModule
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSModule : NSObject <_UISettingsKeyPathObserver, PTSSectionObserver>
{
    NSHashTable * _observers;
    NSString * _title;
    NSMutableArray * _allSections;
    NSMutableArray * _enabledSections;
    _UISettings * _settings;
}

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSMutableArray * allSections;
@property (retain, nonatomic) NSMutableArray * enabledSections;
@property (retain, nonatomic) _UISettings * settings;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)sectionWithRows:(NSArray *)arg0;
+ (NSString *)moduleWithTitle:(NSString *)arg0 contents:(UIKBKeyDisplayContents *)arg1;
+ (NSArray *)sectionWithRows:(NSArray *)arg0 title:(NSString *)arg1;
+ (NSArray *)sectionWithRows:(NSArray *)arg0 title:(NSString *)arg1 condition:(SATrueCondition *)arg2;
+ (PTSModule *)submoduleWithModule:(id)arg0 childSettingsKeyPath:(NSString *)arg1 condition:(SATrueCondition *)arg2;
+ (NSDictionary *)moduleWithSettings:(_UISettings *)arg0;
+ (NSArray *)sectionWithRows:(NSArray *)arg0 title:(NSString *)arg1 conditionFormat:(NSString *)arg2;
+ (PTSModule *)submoduleWithModule:(id)arg0 childSettingsKeyPath:(NSString *)arg1;

- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (unsigned int)numberOfSections;
- (_UISettings *)settings;
- (NSString *)title;
- (void)removeObserver:(NSObject *)arg0;
- (void)moveRowAtIndexPath:(NSIndexPath *)arg0 toIndexPath:(NSIndexPath *)arg1;
- (void)settings:(_UISettings *)arg0 changedValueForKeyPath:(NSString *)arg1;
- (void)setSettings:(_UISettings *)arg0;
- (void).cxx_destruct;
- (void)addObserver:(NSObject *)arg0;
- (NSObject *)sectionAtIndex:(unsigned int)arg0;
- (void)section:(UITableViewSection *)arg0 didInsertRows:(NSArray *)arg1 deleteRows:(NSArray *)arg2;
- (void)sectionDidReload:(id)arg0;
- (void)enumerateAllRowsUsingBlock:(id /* block */)arg0;
- (void)enumerateEnabledRowsUsingBlock:(id /* block */)arg0;
- (char)hasEnabledEditableRows;
- (PTSModule *)initWithContents:(UIKBKeyDisplayContents *)arg0;
- (NSMutableArray *)allSections;
- (void)_addSection:(UITableViewSection *)arg0;
- (void)_addSubmodule:(id)arg0;
- (id)_settingsForSection:(id)arg0;
- (void)_updateEnabledSections;
- (NSString *)rowAtIndexPath:(NSIndexPath *)arg0;
- (char)_shouldEnableSection:(id)arg0;
- (void)deleteRowAtIndexPath:(NSIndexPath *)arg0;
- (NSString *)destinationForRowAtIndexPath:(NSIndexPath *)arg0 withProposedDestination:(NSObject *)arg1;
- (void)setAllSections:(NSMutableArray *)arg0;
- (NSMutableArray *)enabledSections;
- (void)setEnabledSections:(NSMutableArray *)arg0;
- (NSIndexPath *)indexPathForRow:(id)arg0;

@end
