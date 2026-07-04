/* Runtime dump - PTSSection
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSection : NSObject <_UISettingsKeyPathObserver, _UISettingsGroupObserver>
{
    NSArray * _rows;
    NSHashTable * _observers;
    NSMutableArray * _allConcreteRows;
    NSMutableArray * _enabledConcreteRows;
    NSMutableDictionary * _concreteRowsByTemplateIndex;
    NSMutableDictionary * _groupsByTemplateIndex;
    NSString * _title;
    _UISettings * _settings;
    NSString * _submoduleKeyPath;
    NSArray * _appearanceConditions;
}

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) _UISettings * settings;
@property (retain, nonatomic) NSString * submoduleKeyPath;
@property (retain, nonatomic) NSArray * appearanceConditions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSObject *)rowAtIndex:(unsigned int)arg0;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (_UISettings *)settings;
- (NSString *)title;
- (void)removeObserver:(NSObject *)arg0;
- (unsigned int)numberOfRows;
- (void)settings:(_UISettings *)arg0 changedValueForKeyPath:(NSString *)arg1;
- (void)settingsGroup:(_UISettingsGroup *)arg0 didInsertSettings:(NSDictionary *)arg1 atIndex:(unsigned int)arg2;
- (void)settingsGroup:(_UISettingsGroup *)arg0 didRemoveSettings:(NSDictionary *)arg1 atIndex:(unsigned int)arg2;
- (void)settingsGroup:(_UISettingsGroup *)arg0 didMoveSettings:(NSDictionary *)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)setSettings:(_UISettings *)arg0;
- (void).cxx_destruct;
- (void)addObserver:(NSObject *)arg0;
- (void)_assertNoGroupTemplateProperties:(NSDictionary *)arg0;
- (void)_reloadEnabledRows;
- (void)_fixRows:(NSArray *)arg0 fromIndex:(unsigned int)arg1 withTemplate:(IKMenuBarTemplate *)arg2;
- (void)_updateEnabledRows;
- (void)_sendInserts:(id)arg0 deletes:(CPLEngineRemappedDeletes *)arg1;
- (char)_shouldEnableRow:(id)arg0;
- (void)_sendReload;
- (PTSSection *)initWithRows:(NSArray *)arg0;
- (unsigned int)indexOfRow:(id)arg0;
- (void)enumerateAllRowsUsingBlock:(id /* block */)arg0;
- (void)enumerateEnabledRowsUsingBlock:(id /* block */)arg0;
- (char)hasEnabledEditableRows;
- (unsigned int)destinationForRowAtIndex:(unsigned int)arg0 withProposedDestination:(unsigned int)arg1;
- (void)moveRowAtIndex:(unsigned int)arg0 toIndex:(unsigned int)arg1;
- (NSString *)submoduleKeyPath;
- (void)setSubmoduleKeyPath:(NSString *)arg0;
- (NSArray *)appearanceConditions;
- (void)setAppearanceConditions:(NSArray *)arg0;

@end
