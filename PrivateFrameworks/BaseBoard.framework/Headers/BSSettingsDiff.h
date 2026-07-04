/* Runtime dump - BSSettingsDiff
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSettingsDiff : NSObject <NSCopying, BSXPCCoding>
{
    <BSSettingDescriptionProvider> * _descriptionProvider;
    BSMutableSettings * _changes;
    NSHashTable * _flagRemovals;
    NSHashTable * _objectRemovals;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BSSettingsDiff *)_newHashTableWithInitialCapacity:(unsigned int)arg0;
+ (NSDictionary *)diffFromSettings:(NSDictionary *)arg0 toSettings:(NSDictionary *)arg1;

- (void)dealloc;
- (BSSettingsDiff *)init;
- (NSString *)description;
- (BSSettingsDiff *)copyWithZone:(struct _NSZone *)arg0;
- (BSSettingsDiff *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (BSSettingsDiff *)_initWithChanges:(BSMutableSettings *)arg0 flagRemovals:(NSHashTable *)arg1 objectRemovals:(NSHashTable *)arg2;
- (void)_enumerateSettingsInTable:(id)arg0 withBlock:(id /* block */)arg1;
- (NSDictionary *)allSettings;
- (unsigned int)_diffTypesForSetting:(unsigned int)arg0;
- (NSString *)descriptionOfSettingsWithMultilinePrefix:(NSString *)arg0 providerBlock:(id /* block */)arg1;
- (void)applyToSettings:(NSDictionary *)arg0;
- (void)inspectChangesWithBlock:(id /* block */)arg0;

@end
