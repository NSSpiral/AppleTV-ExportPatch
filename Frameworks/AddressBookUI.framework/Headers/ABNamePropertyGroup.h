/* Runtime dump - ABNamePropertyGroup
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABNamePropertyGroup : ABAbstractPropertyGroup
{
    NSMutableArray * _properties;
    ABUIPerson * _preferredPerson;
    NSMutableSet * _propertiesWithMultipleValuePlaceholders;
    NSMutableDictionary * _valuesByPersonByProperty;
    <ABPrimaryValueDelegate> * _delegate;
}

@property (readonly, nonatomic) ABUIPerson * preferredPerson;
@property (nonatomic) <ABPrimaryValueDelegate> * delegate;

- (void)reloadFromModel;
- (void)updateRecord;
- (char)canSave;
- (struct __CFArray *)nameProperties;
- (unsigned int)namePropertiesCount;
- (id)keyboardSettingsForRow:(unsigned int)arg0;
- (id)placeholderTextForRow:(unsigned int)arg0;
- (id)valueForRow:(unsigned int)arg0 whenEditing:(char)arg1;
- (char)showsMultipleValuePlaceholderAtRow:(unsigned int)arg0;
- (ABUIPerson *)preferredPerson;
- (void)_insertItemAtIndex:(int)arg0 forProperty:(int)arg1 duringReload:(char)arg2;
- (id)_allPeople;
- (char)_showsMultipleValuePlaceholderForProperty:(int)arg0;
- (NSObject *)_valueForProperty:(int)arg0 person:(void *)arg1;
- (char)_isEmptyValue:(id)arg0 forProperty:(int)arg1;
- (int)_propertyAtIndex:(unsigned int)arg0;
- (char)showsMultipleValuePlaceholderForProperty:(int)arg0;
- (void)_clearAllCachedInfo;
- (char)refreshPreferredPerson;
- (void)_addItemForProperty:(int)arg0 duringReload:(char)arg1;
- (NSObject *)_newLocalizedPlaceholderForProperty:(int)arg0;
- (void)_removeValueForProperty:(int)arg0;
- (void)_removeMultipleValuePlaceholderForProperty:(int)arg0;
- (int)propertyForRow:(unsigned int)arg0;
- (id)copyCompositeNameIgnoringOrganization:(char)arg0;
- (NSDictionary *)_fakePersonFromCurrentProperties;
- (NSObject *)_labelAtIndex:(int)arg0;
- (int)_indexForProperty:(int)arg0;
- (NSString *)_indexPathForIndexPath:(NSIndexPath *)arg0;
- (void)addNameProperty:(int)arg0;
- (unsigned int)rowForProperty:(int)arg0;
- (NSObject *)primaryValueForProperty:(int)arg0;
- (void)setValue:(NSObject *)arg0 atRow:(unsigned int)arg1;
- (char)autofillValuesForRow:(unsigned int)arg0;
- (NSString *)copyCompositeName;
- (NSString *)copyCompositePhoneticName;
- (void)dealloc;
- (void)setDelegate:(<ABPrimaryValueDelegate> *)arg0;
- (ABNamePropertyGroup *)init;
- (<ABPrimaryValueDelegate> *)delegate;
- (void)_setValue:(NSValue *)arg0 forProperty:(int)arg1;
- (void *)valueForProperty:(int)arg0;
- (int)property;

@end
