/* Runtime dump - TIKeyboardIntermediateText
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardIntermediateText : NSObject <NSSecureCoding>
{
    unsigned int _selectionOffset;
    NSString * _inputString;
    NSString * _displayString;
    NSString * _searchString;
}

@property (readonly, nonatomic) NSString * inputString;
@property (readonly, nonatomic) NSString * displayString;
@property (readonly, nonatomic) struct _NSRange selectedRange;
@property (readonly, nonatomic) NSString * searchString;

+ (char)supportsSecureCoding;
+ (NSString *)intermediateTextWithInputString:(NSString *)arg0 displayString:(NSString *)arg1;
+ (NSString *)intermediateTextWithInputString:(NSString *)arg0 displayString:(NSString *)arg1 selectionLocation:(unsigned int)arg2;
+ (NSString *)intermediateTextWithInputString:(NSString *)arg0 displayString:(NSString *)arg1 selectionLocation:(unsigned int)arg2 searchString:(NSString *)arg3;

- (void)dealloc;
- (TIKeyboardIntermediateText *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)displayString;
- (TIKeyboardIntermediateText *)copyWithZone:(struct _NSZone *)arg0;
- (struct _NSRange)selectedRange;
- (NSString *)inputString;
- (NSString *)searchString;
- (TIKeyboardIntermediateText *)initWithInputString:(NSString *)arg0 displayString:(NSString *)arg1 selectionLocation:(unsigned int)arg2 searchString:(NSString *)arg3;

@end
