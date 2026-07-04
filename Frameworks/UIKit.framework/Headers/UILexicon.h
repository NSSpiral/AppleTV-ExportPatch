/* Runtime dump - UILexicon
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UILexicon : NSObject <NSCopying>
{
    NSArray * _entries;
}

@property (readonly, nonatomic) NSArray * entries;

+ (UIImage *)_lexiconWithTILexicon:(id)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (UILexicon *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)entries;

@end
