/* Runtime dump - PTSDrillDownRow
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSDrillDownRow : PTSRow

+ (NSString *)rowWithTitle:(NSString *)arg0 childSettingsKeyPath:(NSString *)arg1;
+ (NSString *)rowWithTitleKeyPath:(NSString *)arg0 childSettingsKeyPath:(NSString *)arg1;

- (PTSDrillDownRow *)init;
- (Class)rowTableViewCellClass;

@end
