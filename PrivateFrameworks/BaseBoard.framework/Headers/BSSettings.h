/* Runtime dump - BSSettings
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding>
{
    <BSSettingDescriptionProvider> * _descriptionProvider;
    NSMapTable * _settingToFlagMap;
    NSMapTable * _settingToObjectMap;
}

@property (weak, nonatomic) <BSSettingDescriptionProvider> * descriptionProvider;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (BSSettings *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (id)objectForSetting:(unsigned int)arg0;
- (BSSettings *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (BSSettings *)initWithXPCDictionary:(NSDictionary *)arg0;
- (char)boolForSetting:(unsigned int)arg0;
- (int)flagForSetting:(unsigned int)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (void)enumerateFlagsWithBlock:(id /* block */)arg0;
- (void)enumerateObjectsWithBlock:(id /* block */)arg0;
- (void)_enumerateSettingsForFlagsWithBlock:(id /* block */)arg0;
- (void)_enumerateSettingsForObjectsWithBlock:(id /* block */)arg0;
- (NSDictionary *)allSettings;
- (void)setDescriptionProvider:(<BSSettingDescriptionProvider> *)arg0;
- (NSString *)basicDescriptionWithPrefix:(NSString *)arg0;
- (void)_setFlag:(int)arg0 forSetting:(unsigned int)arg1;
- (void)_setObject:(NSObject *)arg0 forSetting:(unsigned int)arg1;
- (void)_enumerateSettingsInMap:(NSObject *)arg0 withBlock:(id /* block */)arg1;
- (NSString *)_keyDescriptionForSetting:(unsigned int)arg0;
- (NSString *)_valueDescriptionForFlag:(int)arg0 object:(NSObject *)arg1 ofSetting:(unsigned int)arg2;
- (id)_newMapTable;
- (void)_applyToSettings:(NSDictionary *)arg0;
- (<BSSettingDescriptionProvider> *)descriptionProvider;

@end
