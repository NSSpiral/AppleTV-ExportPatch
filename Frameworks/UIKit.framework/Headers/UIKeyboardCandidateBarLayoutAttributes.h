/* Runtime dump - UIKeyboardCandidateBarLayoutAttributes
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateBarLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>
{
    char _beginsFirstPage;
    char _endsLastPage;
}

@property (nonatomic) char beginsFirstPage;
@property (nonatomic) char endsLastPage;

- (UIKeyboardCandidateBarLayoutAttributes *)copyWithZone:(struct _NSZone *)arg0;
- (void)setBeginsFirstPage:(char)arg0;
- (void)setEndsLastPage:(char)arg0;
- (char)beginsFirstPage;
- (char)endsLastPage;

@end
