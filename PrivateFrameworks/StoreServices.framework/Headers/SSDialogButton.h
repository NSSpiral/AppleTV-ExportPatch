/* Runtime dump - SSDialogButton
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDialogButton : NSObject
{
    NSDictionary * _actionDictionary;
    NSString * _title;
}

@property (readonly, copy, nonatomic) NSString * buttonTitle;
@property (readonly, nonatomic) id actionParameter;
@property (readonly, nonatomic) NSString * buttonAction;
@property (readonly, nonatomic) NSString * URLTarget;

+ (NSString *)buttonWithTitle:(NSString *)arg0;

- (void)dealloc;
- (SSDialogButton *)init;
- (NSString *)buttonAction;
- (NSString *)buttonTitle;
- (SSDialogButton *)initWithTitle:(NSString *)arg0 actionDictionary:(NSDictionary *)arg1;
- (NSObject *)valueForActionProperty:(NSObject *)arg0;
- (id)actionParameter;
- (NSString *)URLTarget;

@end
