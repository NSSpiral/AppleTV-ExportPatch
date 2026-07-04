/* Runtime dump - SCROBrailleKeyboardKey
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleKeyboardKey : SCROBrailleKey
{
    NSString * _keyString;
    unsigned int _modifiers;
}

- (void)dealloc;
- (SCROBrailleKeyboardKey *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void)setKeyString:(NSString *)arg0;
- (void)setModifiers:(unsigned int)arg0;
- (NSString *)keyString;
- (unsigned int)modifiers;

@end
