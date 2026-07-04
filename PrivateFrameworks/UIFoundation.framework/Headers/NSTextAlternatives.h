/* Runtime dump - NSTextAlternatives
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextAlternatives : NSObject
{
    NSString * _primaryString;
    NSArray * _alternativeStrings;
    id _internal;
}

@property (readonly) NSString * primaryString;
@property (readonly) NSArray * alternativeStrings;

- (unsigned int)numberOfAlternatives;
- (void)dealloc;
- (NSTextAlternatives *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)identifier;
- (NSTextAlternatives *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)originalText;
- (NSArray *)alternativeStrings;
- (NSArray *)alternatives;
- (NSTextAlternatives *)initWithPrimaryString:(NSString *)arg0 alternativeStrings:(NSArray *)arg1;
- (NSObject *)alternativeAtIndex:(unsigned int)arg0;
- (NSTextAlternatives *)initWithPrimaryString:(NSString *)arg0 alternativeStrings:(NSArray *)arg1 identifier:(NSString *)arg2;
- (NSString *)primaryString;
- (NSTextAlternatives *)initWithOriginalText:(NSString *)arg0 alternatives:(_UIDynamicCaretAlternatives *)arg1;
- (NSTextAlternatives *)initWithOriginalText:(NSString *)arg0 alternatives:(_UIDynamicCaretAlternatives *)arg1 identifier:(NSString *)arg2;
- (void)noteSelectedAlternativeString:(NSString *)arg0;

@end
