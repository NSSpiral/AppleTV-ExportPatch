/* Runtime dump - PTSPicker
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSPicker : UIView <UITableViewDelegate, UITableViewDataSource, PTSHUDControl, _UISettingsKeyPathObserver>
{
    char _enabled;
    _UISettings * _settings;
    NSString * _valueKeyPath;
    int _alignment;
    UILabel * _titleLabel;
    NSArray * _choices;
    UITableView * _tableView;
    NSArray * _subviewConstraints;
}

@property (weak, nonatomic) _UISettings * settings;
@property (copy, nonatomic) NSString * valueKeyPath;
@property (nonatomic) int alignment;
@property (nonatomic) char enabled;
@property (retain, nonatomic) UILabel * titleLabel;
@property (copy, nonatomic) NSArray * choices;
@property (retain, nonatomic) UITableView * tableView;
@property (retain, nonatomic) NSArray * subviewConstraints;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PTSPicker *)picker;
+ (struct CGRect)defaultFrame;
+ (NSDictionary *)pickerForSettings:(NSDictionary *)arg0 valueKeyPath:(NSString *)arg1 title:(NSString *)arg2 choices:(NSArray *)arg3;

- (void)setAlignment:(int)arg0;
- (PTSPicker *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (_UISettings *)settings;
- (void)setEnabled:(char)arg0;
- (struct CGSize)intrinsicContentSize;
- (UILabel *)titleLabel;
- (void)setTableView:(UITableView *)arg0;
- (void)setSelection:(TSKSelection *)arg0;
- (int)alignment;
- (char)enabled;
- (void)settings:(_UISettings *)arg0 changedValueForKeyPath:(NSString *)arg1;
- (UITableView *)tableView;
- (void)setTitleLabel:(UILabel *)arg0;
- (void)setSettings:(_UISettings *)arg0;
- (void).cxx_destruct;
- (NSArray *)choices;
- (void)setSettings:(_UISettings *)arg0 valueKeyPath:(NSString *)arg1;
- (NSString *)makeTitleLabel;
- (void)setValueKeyPath:(NSString *)arg0;
- (NSString *)valueKeyPath;
- (NSArray *)subviewConstraints;
- (void)setSubviewConstraints:(NSArray *)arg0;
- (void)setChoices:(NSArray *)arg0;
- (NSObject *)makeTableView;

@end
