/* Runtime dump - TIKeyboardInput
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardInput : NSObject <NSSecureCoding>
{
    id _flags;
    char _backspace;
    NSString * _string;
    <NSCopying><NSObject><NSSecureCoding> * _object;
    TIKeyboardTouchEvent * _touchEvent;
    TIKeyboardCandidate * _acceptedCandidate;
}

@property (copy, nonatomic) NSString * string;
@property (copy, nonatomic) <NSCopying><NSObject><NSSecureCoding> * object;
@property (nonatomic) char backspace;
@property (nonatomic) char uppercase;
@property (nonatomic) char autoshifted;
@property (nonatomic) char popupVariant;
@property (nonatomic) char multitap;
@property (nonatomic) char flick;
@property (nonatomic) char synthesizedByAcceptingCandidate;
@property (retain, nonatomic) TIKeyboardTouchEvent * touchEvent;
@property (retain, nonatomic) TIKeyboardCandidate * acceptedCandidate;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (TIKeyboardInput *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)string;
- (<NSCopying><NSObject><NSSecureCoding> *)object;
- (void)setTouchEvent:(TIKeyboardTouchEvent *)arg0;
- (TIKeyboardCandidate *)acceptedCandidate;
- (void)setString:(NSString *)arg0;
- (void)setUppercase:(char)arg0;
- (void)setAutoshifted:(char)arg0;
- (void)setAcceptedCandidate:(TIKeyboardCandidate *)arg0;
- (void)setPopupVariant:(char)arg0;
- (void)setMultitap:(char)arg0;
- (void)setFlick:(char)arg0;
- (char)isSynthesizedByAcceptingCandidate;
- (void)setBackspace:(char)arg0;
- (void)setSynthesizedByAcceptingCandidate:(char)arg0;
- (void)setObject:(<NSCopying><NSObject><NSSecureCoding> *)arg0;
- (char)isBackspace;
- (char)isUppercase;
- (char)isAutoshifted;
- (char)isMultitap;
- (char)isFlick;
- (TIKeyboardTouchEvent *)touchEvent;
- (char)isPopupVariant;

@end
