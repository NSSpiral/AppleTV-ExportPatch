/* Runtime dump - UILexiconEntry
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UILexiconEntry : NSObject <NSCopying>
{
    NSString * _userInput;
    NSString * _documentText;
}

@property (readonly, nonatomic) NSString * documentText;
@property (readonly, nonatomic) NSString * userInput;

+ (UILexiconEntry *)_entryWithTILexiconEntry:(id)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (UILexiconEntry *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)userInput;
- (NSString *)documentText;

@end
