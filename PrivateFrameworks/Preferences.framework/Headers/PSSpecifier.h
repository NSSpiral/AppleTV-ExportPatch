/* Runtime dump - PSSpecifier
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifier : NSObject
{
    id target;
    SEL getter;
    SEL setter;
    SEL action;
    SEL cancel;
    Class detailControllerClass;
    int cellType;
    Class editPaneClass;
    int keyboardType;
    int autoCapsType;
    int autoCorrectionType;
    unsigned int textFieldType;
    NSString * _name;
    NSArray * _values;
    NSDictionary * _titleDict;
    NSDictionary * _shortTitleDict;
    id _userInfo;
    NSMutableDictionary * _properties;
    SEL _confirmationAction;
    SEL _confirmationCancelAction;
    SEL _buttonAction;
    SEL _controllerLoadAction;
    char _showContentString;
}

@property (retain, nonatomic) NSArray * values;
@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) NSDictionary * titleDictionary;
@property (retain, nonatomic) NSDictionary * shortTitleDictionary;
@property (retain, nonatomic) NSString * identifier;
@property (nonatomic) id target;
@property (nonatomic) Class detailControllerClass;
@property (nonatomic) int cellType;
@property (nonatomic) Class editPaneClass;
@property (nonatomic) SEL confirmationAction;
@property (nonatomic) SEL confirmationCancelAction;
@property (nonatomic) SEL buttonAction;
@property (nonatomic) SEL controllerLoadAction;
@property (nonatomic) char showContentString;

+ (NSCache *)_dataclassIconCache;
+ (PSSpecifier *)_iconForDataclass:(id)arg0;
+ (PSSpecifier *)acui_specifierForDataclass:(id)arg0 target:(NSObject *)arg1 set:(SEL)arg2 get:(SEL)arg3;
+ (PSSpecifier *)acui_linkListCellSpecifierForDataclass:(id)arg0 target:(NSObject *)arg1 set:(SEL)arg2 get:(SEL)arg3 detail:(Class)arg4;
+ (NSObject *)acui_specifierForAppWithBundleID:(NSString *)arg0 target:(NSObject *)arg1 set:(SEL)arg2 get:(SEL)arg3;
+ (NSObject<OS_xpc_object> *)_bundle;
+ (NSString *)groupSpecifierWithHeader:(NSString *)arg0 footer:(RemoteUISectionFooter *)arg1 linkButtons:(id)arg2;
+ (NSString *)groupSpecifierWithFooterText:(NSString *)arg0 linkButton:(UIButton *)arg1;
+ (NSString *)groupSpecifierWithFooterText:(NSString *)arg0 linkButtons:(id)arg1;
+ (NSString *)groupSpecifierWithHeader:(NSString *)arg0 footer:(RemoteUISectionFooter *)arg1;
+ (PSSpecifier *)groupSpecifierWithFooterLinkButton:(id)arg0;
+ (PSSpecifier *)emptyGroupSpecifier;
+ (NSString *)groupSpecifierWithName:(NSString *)arg0;
+ (PSSpecifier *)preferenceSpecifierNamed:(id)arg0 target:(NSObject *)arg1 set:(SEL)arg2 get:(SEL)arg3 detail:(Class)arg4 cell:(int)arg5 edit:(Class)arg6;
+ (NSObject *)groupSpecifierWithID:(int)arg0 name:(NSString *)arg1;
+ (NSObject *)groupSpecifierWithID:(int)arg0;
+ (PSSpecifier *)specifierWithSpecifier:(id)arg0;
+ (int)autoCorrectionTypeForNumber:(NSNumber *)arg0;
+ (int)autoCapsTypeForString:(NSString *)arg0;
+ (int)keyboardTypeForString:(NSString *)arg0;
+ (NSString *)deleteButtonSpecifierWithName:(NSString *)arg0 target:(NSObject *)arg1 action:(SEL)arg2;

- (id)acui_dataclass;
- (NSObject *)acui_appBundleID;
- (void)removePropertyForKey:(NSString *)arg0;
- (void)dealloc;
- (PSSpecifier *)init;
- (NSString *)description;
- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (void)setObject:(NSObject *)arg0 forKeyedSubscript:(id)arg1;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)identifier;
- (void)setTarget:(NSObject *)arg0;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSObject *)target;
- (NSDictionary *)userInfo;
- (void)setValues:(NSArray *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (NSArray *)values;
- (void)setProperties:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)properties;
- (void)setButtonAction:(SEL)arg0;
- (SEL)buttonAction;
- (NSString *)propertyForKey:(NSString *)arg0;
- (void)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)setValues:(NSArray *)arg0 titles:(id)arg1;
- (void)setKeyboardType:(int)arg0 autoCaps:(int)arg1 autoCorrection:(int)arg2;
- (char)showContentString;
- (int)cellType;
- (SEL)controllerLoadAction;
- (SEL)confirmationAction;
- (SEL)confirmationCancelAction;
- (void)setControllerLoadAction:(SEL)arg0;
- (void)setupIconImageWithPath:(NSString *)arg0;
- (Class)detailControllerClass;
- (void)setDetailControllerClass:(Class)arg0;
- (void)setCellType:(int)arg0;
- (Class)editPaneClass;
- (void)setEditPaneClass:(Class)arg0;
- (void)setConfirmationAction:(SEL)arg0;
- (void)setConfirmationCancelAction:(SEL)arg0;
- (void)setShowContentString:(char)arg0;
- (NSDictionary *)titleDictionary;
- (void)setTitleDictionary:(NSDictionary *)arg0;
- (NSDictionary *)shortTitleDictionary;
- (void)setShortTitleDictionary:(NSDictionary *)arg0;
- (void)setValues:(NSArray *)arg0 titles:(id)arg1 shortTitles:(id)arg2;
- (void)loadValuesAndTitlesFromDataSource;
- (void)setValues:(NSArray *)arg0 titles:(id)arg1 shortTitles:(id)arg2 usingLocalizedTitleSorting:(char)arg3;
- (void)setupIconImageWithBundle:(NSObject *)arg0;
- (int)titleCompare:(NSObject *)arg0;
- (char)isEqualToSpecifier:(id)arg0;

@end
