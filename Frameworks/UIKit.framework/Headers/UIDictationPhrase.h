/* Runtime dump - UIDictationPhrase
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationPhrase : NSObject
{
    NSString * _text;
    NSArray * _alternativeInterpretations;
}

@property (readonly, nonatomic) NSString * text;
@property (readonly, nonatomic) NSArray * alternativeInterpretations;

+ (NSString *)phraseWithText:(NSString *)arg0 alternativeInterpretations:(NSArray *)arg1;

- (void)dealloc;
- (NSString *)description;
- (NSString *)text;
- (UIDictationPhrase *)initWithText:(NSString *)arg0 alternativeInterpretations:(NSArray *)arg1;
- (NSArray *)alternativeInterpretations;

@end
