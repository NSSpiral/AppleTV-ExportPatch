/* Runtime dump - UICollectionViewLayoutAttributes
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewLayoutAttributes : NSObject <NSCopying, UIDynamicItem>
{
    NSString * _elementKind;
    NSString * _reuseIdentifier;
    struct CGPoint _center;
    struct CGSize _size;
    struct CGRect _frame;
    float _alpha;
    struct CATransform3D _transform;
    NSIndexPath * _indexPath;
    NSString * _isCloneString;
    struct ? _layoutFlags;
    int _zIndex;
}

@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGPoint center;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct CATransform3D transform3D;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) float alpha;
@property (nonatomic) int zIndex;
@property (nonatomic) char hidden;
@property (retain, nonatomic) NSIndexPath * indexPath;
@property (readonly, nonatomic) unsigned int representedElementCategory;
@property (readonly, nonatomic) NSString * representedElementKind;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (UICollectionViewLayoutAttributes *)layoutAttributesForSupplementaryViewOfKind:(id)arg0 withIndexPath:(NSIndexPath *)arg1;
+ (UICollectionViewLayoutAttributes *)layoutAttributesForDecorationViewOfKind:(id)arg0 withIndexPath:(NSIndexPath *)arg1;
+ (NSString *)layoutAttributesForCellWithIndexPath:(NSIndexPath *)arg0;

- (void)dealloc;
- (struct CGRect)bounds;
- (struct CGSize)size;
- (char)isHidden;
- (float)alpha;
- (void)setHidden:(char)arg0;
- (void)setAlpha:(float)arg0;
- (UICollectionViewLayoutAttributes *)init;
- (void)setFrame:(struct CGRect)arg0;
- (struct CGRect)frame;
- (void)setBounds:(struct CGRect)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)representedElementCategory;
- (NSIndexPath *)indexPath;
- (UICollectionViewLayoutAttributes *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTransform:(struct CGAffineTransform)arg0;
- (void)setSize:(struct CGSize)arg0;
- (struct CGPoint)center;
- (struct CGAffineTransform)transform;
- (void)setCenter:(struct CGPoint)arg0;
- (NSString *)_reuseIdentifier;
- (NSString *)_elementKind;
- (char)_isCell;
- (char)_isSupplementaryView;
- (char)_isClone;
- (struct CATransform3D)transform3D;
- (int)zIndex;
- (char)_isDecorationView;
- (char)_isEquivalentTo:(id)arg0;
- (char)_isTransitionVisibleTo:(id)arg0;
- (void)setIndexPath:(NSIndexPath *)arg0;
- (void)_setReuseIdentifier:(NSString *)arg0;
- (void)setTransform3D:(struct CATransform3D)arg0;
- (void)_setIsClone:(char)arg0;
- (void)_setElementKind:(id)arg0;
- (UICollectionViewLayoutAttributes *)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)arg0 atIndexPath:(NSIndexPath *)arg1;
- (NSString *)representedElementKind;
- (void)setZIndex:(int)arg0;

@end
