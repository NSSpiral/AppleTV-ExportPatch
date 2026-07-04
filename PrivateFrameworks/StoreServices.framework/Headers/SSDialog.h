/* Runtime dump - SSDialog
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDialog : NSObject
{
    NSArray * _buttons;
    NSMutableDictionary * _dialogDictionary;
}

@property (copy, nonatomic) NSString * message;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSArray * buttons;
@property (retain, nonatomic) SSDialogButton * defaultButton;
@property (readonly, nonatomic) NSDictionary * dialogDictionary;
@property (readonly, nonatomic) NSString * dialogKind;

- (void)dealloc;
- (SSDialog *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)message;
- (SSDialogButton *)defaultButton;
- (void)setDefaultButton:(SSDialogButton *)arg0;
- (void)setMessage:(NSString *)arg0;
- (void)_setValue:(NSValue *)arg0 forProperty:(NSString *)arg1;
- (void *)valueForProperty:(NSString *)arg0;
- (NSArray *)buttons;
- (SSDialog *)initWithDialogDictionary:(NSDictionary *)arg0;
- (NSDictionary *)dialogDictionary;
- (NSString *)dialogKind;
- (void)setButtons:(NSArray *)arg0;

@end
