/* Runtime dump - UIKeyboardCandidateBarLayout
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateBarLayout : UICollectionViewLayout
{
    struct CGSize _contentSize;
    NSMutableArray * _allAttributes;
    NSArray * _edgeDummyCellAttributes;
}

@property (retain, nonatomic) NSMutableArray * allAttributes;
@property (retain, nonatomic) NSArray * edgeDummyCellAttributes;

+ (UIKeyboardLayoutStar *)layout;
+ (UIKeyboardCandidateBarLayout *)dummyCellCollectionViewKind;
+ (Class)layoutAttributesClass;

- (void)dealloc;
- (UIKeyboardCandidateBarLayout *)init;
- (NSObject *)layoutAttributesForElementsInRect:(struct CGRect)arg0;
- (NSString *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)arg0;
- (struct CGSize)collectionViewContentSize;
- (UICollectionViewLayoutAttributes *)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(NSIndexPath *)arg1;
- (void)prepareLayout;
- (NSMutableArray *)allAttributes;
- (NSArray *)edgeDummyCellAttributes;
- (void)setEdgeDummyCellAttributes:(NSArray *)arg0;
- (void)setAllAttributes:(NSMutableArray *)arg0;

@end
