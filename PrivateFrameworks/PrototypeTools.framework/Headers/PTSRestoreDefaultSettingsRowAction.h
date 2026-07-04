/* Runtime dump - PTSRestoreDefaultSettingsRowAction
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSRestoreDefaultSettingsRowAction : PTSRowAction
{
    NSString * _settingsKeyPath;
}

@property (copy, nonatomic) NSString * settingsKeyPath;

+ (NSString *)actionWithSettingsKeyPath:(NSString *)arg0;

- (PTSRestoreDefaultSettingsRowAction *)init;
- (PTSRestoreDefaultSettingsRowAction *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)resolveTemplatesWithIndex:(unsigned int)arg0;
- (void)setSettingsKeyPath:(NSString *)arg0;
- (NSString *)settingsKeyPath;

@end
