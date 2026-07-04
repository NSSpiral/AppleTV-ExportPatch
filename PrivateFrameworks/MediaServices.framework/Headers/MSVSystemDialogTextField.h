/* Runtime dump - MSVSystemDialogTextField
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVSystemDialogTextField : NSObject
{
    char _secure;
    NSString * _title;
    int _keyboardType;
}

@property (copy, nonatomic) NSString * title;
@property (nonatomic) char secure;
@property (nonatomic) int keyboardType;

+ (NSString *)textFieldWithTitle:(NSString *)arg0 secure:(char)arg1;
+ (NSString *)textFieldWithTitle:(NSString *)arg0;

- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void)setSecure:(char)arg0;
- (char)isSecure;
- (MSVSystemDialogTextField *)initWithTitle:(NSString *)arg0;
- (int)keyboardType;
- (void)setKeyboardType:(int)arg0;
- (void).cxx_destruct;

@end
