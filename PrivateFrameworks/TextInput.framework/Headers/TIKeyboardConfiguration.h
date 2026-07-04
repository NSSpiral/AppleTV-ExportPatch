/* Runtime dump - TIKeyboardConfiguration
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding>
{
    char _assertDefaultKeyPlane;
    TIKeyboardInputManagerState * _inputManagerState;
    TIKeyboardIntermediateText * _intermediateText;
    NSString * _layoutTag;
    NSString * _accentKeyString;
}

@property (copy, nonatomic) TIKeyboardInputManagerState * inputManagerState;
@property (retain, nonatomic) TIKeyboardIntermediateText * intermediateText;
@property (copy, nonatomic) NSString * layoutTag;
@property (copy, nonatomic) NSString * accentKeyString;
@property (nonatomic) char assertDefaultKeyPlane;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (TIKeyboardConfiguration *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)layoutTag;
- (void)setLayoutTag:(NSString *)arg0;
- (TIKeyboardInputManagerState *)inputManagerState;
- (void)setInputManagerState:(TIKeyboardInputManagerState *)arg0;
- (TIKeyboardIntermediateText *)intermediateText;
- (char)assertDefaultKeyPlane;
- (NSString *)accentKeyString;
- (void)setIntermediateText:(TIKeyboardIntermediateText *)arg0;
- (void)setAccentKeyString:(NSString *)arg0;
- (void)setAssertDefaultKeyPlane:(char)arg0;

@end
