/* Runtime dump - PTSRow
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSRow : NSObject <_UISettingsKeyPathObserver>
{
    NSHashTable * _observers;
    NSString * _valueKeyPath;
    NSString * _staticTitle;
    NSString * _titleKeyPath;
    UIImage * _staticImage;
    NSString * _imageKeyPath;
    NSPredicate * _condition;
    PTSRowAction * _action;
    id _valueValidatator;
    id _valueFormatter;
    NSString * _groupKeyPath;
    int _allowedEditingTypes;
    _UISettings * _settings;
    PTSSection * _section;
    _UISettings * _groupChild;
}

@property (copy, nonatomic) NSString * valueKeyPath;
@property (copy, nonatomic) NSString * staticTitle;
@property (copy, nonatomic) NSString * titleKeyPath;
@property (retain, nonatomic) UIImage * staticImage;
@property (copy, nonatomic) NSString * imageKeyPath;
@property (copy, nonatomic) NSPredicate * condition;
@property (copy, nonatomic) PTSRowAction * action;
@property (copy, nonatomic) id valueValidatator;
@property (copy, nonatomic) id valueFormatter;
@property (retain, nonatomic) NSString * groupKeyPath;
@property (nonatomic) int allowedEditingTypes;
@property (retain, nonatomic) _UISettings * settings;
@property (retain, nonatomic) id value;
@property (weak, nonatomic) PTSSection * section;
@property (retain, nonatomic) _UISettings * groupChild;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PTSChoiceRow *)row;
+ (NSString *)rowWithTitle:(NSString *)arg0 valueKeyPath:(NSString *)arg1;

- (void)dealloc;
- (PTSRow *)init;
- (PTSSection *)section;
- (_UISettings *)settings;
- (PTSRowAction *)action;
- (NSString *)title;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (UIImage *)image;
- (void)removeObserver:(NSObject *)arg0;
- (void)setAction:(PTSRowAction *)arg0;
- (void)settings:(_UISettings *)arg0 changedValueForKeyPath:(NSString *)arg1;
- (NSString *)conditionFormat:(NSString *)arg0;
- (void)setSettings:(_UISettings *)arg0;
- (void *)group;
- (void).cxx_destruct;
- (NSPredicate *)condition;
- (void)setCondition:(NSPredicate *)arg0;
- (void)setSection:(PTSSection *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (void)setValueKeyPath:(NSString *)arg0;
- (NSString *)valueKeyPath;
- (NSString *)staticTitle:(NSString *)arg0;
- (NSString *)valueKeyPath:(NSString *)arg0;
- (void)setStaticTitle:(NSString *)arg0;
- (void)setTitleKeyPath:(NSString *)arg0;
- (void)setStaticImage:(UIImage *)arg0;
- (void)setImageKeyPath:(NSString *)arg0;
- (void)setValueValidatator:(id)arg0;
- (void)setValueFormatter:(NSObject *)arg0;
- (void)setGroupKeyPath:(NSString *)arg0;
- (void)setAllowedEditingTypes:(int)arg0;
- (NSString *)staticTitle;
- (NSString *)titleKeyPath;
- (UIImage *)staticImage;
- (NSString *)imageKeyPath;
- (id)valueValidatator;
- (NSObject *)valueFormatter;
- (NSString *)groupKeyPath;
- (int)allowedEditingTypes;
- (void)_sendValueChanged;
- (void)_sendTitleChanged;
- (void)_sendImageChanged;
- (void)resolveTemplatesWithIndex:(unsigned int)arg0;
- (void)updateWithRow:(id)arg0;
- (NSString *)titleKeyPath:(NSString *)arg0;
- (UIImage *)staticImage:(UIImage *)arg0;
- (NSString *)imageKeyPath:(NSString *)arg0;
- (NSObject *)action:(PTSRowAction *)arg0;
- (NSString *)groupKeyPath:(NSString *)arg0;
- (NSArray *)allowedEditingTypes:(int)arg0;
- (NSString *)childSettingsForKeyPath:(NSString *)arg0;
- (NSObject *)concreteCopyWithIndex:(unsigned int)arg0;
- (char)allowsDelete;
- (char)allowsReorder;
- (char)allowsDuplicate;
- (char)allowsShare;
- (_UISettings *)groupChild;
- (void)setGroupChild:(_UISettings *)arg0;
- (NSObject *)valueValidator:(NSObject *)arg0;
- (NSObject *)valueFormatter:(NSObject *)arg0;
- (id)condition:(NSPredicate *)arg0;
- (Class)rowTableViewCellClass;

@end
