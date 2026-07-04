/* Runtime dump - UIKeyboardEmojiLayout
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout
{
    id * _attributes;
    float * _headerWidths;
    int _arrayLength;
}

+ (Class)invalidationContextClass;

- (void)dealloc;
- (NSObject *)layoutAttributesForElementsInRect:(struct CGRect)arg0;
- (char)shouldInvalidateLayoutForPreferredLayoutAttributes:(NSDictionary *)arg0 withOriginalAttributes:(NSDictionary *)arg1;
- (UICollectionViewLayoutAttributes *)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(NSIndexPath *)arg1;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(NSObject *)arg0;
- (NSDictionary *)invalidationContextForBoundsChange:(struct CGRect)arg0;
- (NSDictionary *)invalidationContextForPreferredLayoutAttributes:(NSDictionary *)arg0 withOriginalAttributes:(NSDictionary *)arg1;
- (void)_setAttributes:(NSDictionary *)arg0 ForSection:(int)arg1;
- (char)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg0;

@end
