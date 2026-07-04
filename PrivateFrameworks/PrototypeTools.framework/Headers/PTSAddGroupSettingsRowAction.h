/* Runtime dump - PTSAddGroupSettingsRowAction
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSAddGroupSettingsRowAction : PTSRowAction
{
    Class _settingsClass;
    NSString * _groupKeyPath;
}

@property (retain, nonatomic) Class settingsClass;
@property (copy, nonatomic) NSString * groupKeyPath;

+ (NSString *)actionWithGroupKeyPath:(NSString *)arg0 settingsClass:(Class)arg1;

- (PTSAddGroupSettingsRowAction *)init;
- (PTSAddGroupSettingsRowAction *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setGroupKeyPath:(NSString *)arg0;
- (NSString *)groupKeyPath;
- (void)resolveTemplatesWithIndex:(unsigned int)arg0;
- (void)setSettingsClass:(Class)arg0;
- (Class)settingsClass;

@end
