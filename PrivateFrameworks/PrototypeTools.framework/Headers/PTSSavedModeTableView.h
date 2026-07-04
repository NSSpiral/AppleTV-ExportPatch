/* Runtime dump - PTSSavedModeTableView
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSavedModeTableView : UITableView <PTSHUDControl>
{
    char _enabled;
    _UISettings * _settings;
    NSString * _valueKeyPath;
    int _alignment;
}

@property (weak, nonatomic) _UISettings * settings;
@property (copy, nonatomic) NSString * valueKeyPath;
@property (nonatomic) int alignment;
@property (nonatomic) char enabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct CGRect)defaultFrame;

- (void)setAlignment:(int)arg0;
- (PTSSavedModeTableView *)initWithFrame:(struct CGRect)arg0;
- (_UISettings *)settings;
- (void)setEnabled:(char)arg0;
- (int)alignment;
- (char)enabled;
- (void)setSettings:(_UISettings *)arg0;
- (void).cxx_destruct;
- (void)setValueKeyPath:(NSString *)arg0;
- (NSString *)valueKeyPath;

@end
