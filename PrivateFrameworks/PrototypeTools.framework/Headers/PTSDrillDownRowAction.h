/* Runtime dump - PTSDrillDownRowAction
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSDrillDownRowAction : PTSPushViewControllerRowAction
{
    NSString * _settingsKeyPath;
}

@property (copy, nonatomic) NSString * settingsKeyPath;

+ (NSString *)actionWithSettingsKeyPath:(NSString *)arg0;

- (PTSDrillDownRowAction *)init;
- (PTSDrillDownRowAction *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)resolveTemplatesWithIndex:(unsigned int)arg0;
- (void)setSettingsKeyPath:(NSString *)arg0;
- (NSString *)settingsKeyPath;

@end
