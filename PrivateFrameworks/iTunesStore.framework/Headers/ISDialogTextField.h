/* Runtime dump - ISDialogTextField
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDialogTextField : NSObject <SSXPCCoding>
{
    int _keyboardType;
    char _secure;
    NSString * _title;
    NSString * _value;
}

@property int keyboardType;
@property char secure;
@property (retain) NSString * title;
@property (retain) NSString * value;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)textFieldWithTitle:(NSString *)arg0;

- (NSDictionary *)copyXPCEncoding;
- (ISDialogTextField *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (void)setSecure:(char)arg0;
- (char)isSecure;
- (int)keyboardType;
- (void)setKeyboardType:(int)arg0;

@end
