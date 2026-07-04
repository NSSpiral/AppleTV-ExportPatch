/* Runtime dump - EmojiSectionHeaderLayoutInvalidationContext
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface EmojiSectionHeaderLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext
{
    NSMutableIndexSet * _invalidatedSections;
    struct __CFDictionary * _headerWidthDict;
}

@property (readonly, nonatomic) NSIndexSet * invalidatedSections;

- (void)dealloc;
- (void)invalidateSectionHeaderInSection:(int)arg0 withPreferredWidth:(float)arg1;
- (float)preferredWidthForHeaderInSection:(int)arg0;
- (NSIndexSet *)invalidatedSections;

@end
