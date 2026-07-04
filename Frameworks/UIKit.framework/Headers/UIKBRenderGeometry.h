/* Runtime dump - UIKBRenderGeometry
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderGeometry : NSObject <NSCopying>
{
    char _detachedVariants;
    char _tallPopup;
    int _roundRectCorners;
    float _roundRectRadius;
    int _popupBias;
    int _flickDirection;
    NSValue * _splitLeftRect;
    NSValue * _splitRightRect;
    struct CGPoint _popupSource;
    struct CGRect _frame;
    struct CGRect _paddedFrame;
    struct CGRect _displayFrame;
    struct CGRect _symbolFrame;
}

@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGRect paddedFrame;
@property (nonatomic) struct CGRect displayFrame;
@property (nonatomic) struct CGRect symbolFrame;
@property (nonatomic) struct CGPoint popupSource;
@property (nonatomic) float roundRectRadius;
@property (nonatomic) int roundRectCorners;
@property (nonatomic) int popupBias;
@property (nonatomic) int flickDirection;
@property (nonatomic) char detachedVariants;
@property (nonatomic) char tallPopup;
@property (retain, nonatomic) NSValue * splitLeftRect;
@property (retain, nonatomic) NSValue * splitRightRect;
@property (readonly, nonatomic) struct UIEdgeInsets displayInsets;
@property (readonly, nonatomic) struct UIEdgeInsets paddedInsets;

+ (NSObject *)geometryWithFrame:(struct CGRect)arg0 paddedFrame:(struct CGSize)arg1;
+ (UIKBRenderGeometry *)geometryWithShape:(NSString *)arg0;
+ (UIKBRenderGeometry *)sortedGeometries:(id)arg0 leftToRight:(char)arg1;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (struct CGRect)frame;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (UIKBRenderGeometry *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGRect)paddedFrame;
- (void)setDisplayFrame:(struct CGRect)arg0;
- (void)setPopupBias:(int)arg0;
- (struct CGRect)displayFrame;
- (void)setSymbolFrame:(struct CGRect)arg0;
- (struct CGRect)symbolFrame;
- (void)setPaddedFrame:(struct CGRect)arg0;
- (void)setRoundRectCorners:(int)arg0;
- (void)setSplitLeftRect:(NSValue *)arg0;
- (void)setSplitRightRect:(NSValue *)arg0;
- (void)setRoundRectRadius:(float)arg0;
- (NSValue *)splitLeftRect;
- (NSValue *)splitRightRect;
- (void)setFlickDirection:(int)arg0;
- (int)flickDirection;
- (struct UIEdgeInsets)displayInsets;
- (id)_copyForDirection:(int)arg0 positionFactor:(float)arg1 sizeFactor:(float)arg2 scale:(float)arg3;
- (void)applyOffset:(struct CGPoint)arg0;
- (void)makeIntegralWithScale:(float)arg0;
- (void)adjustToTopWithInsets:(struct UIEdgeInsets)arg0;
- (id)copyForFlickDirection:(int)arg0 scale:(float)arg1;
- (id)copyForPopupDirection:(int)arg0 scale:(float)arg1;
- (unsigned int)adjustForTranslucentGapsInFrameWithSize_10Key:(struct CGSize)arg0 centerX:(float)arg1 isInBottomRow:(char)arg2;
- (void)setPopupSource:(struct CGPoint)arg0;
- (void)applyInsets:(struct UIEdgeInsets)arg0;
- (UIKBRenderGeometry *)initWithShape:(NSString *)arg0;
- (struct CGPoint)popupSource;
- (int)roundRectCorners;
- (int)popupBias;
- (char)detachedVariants;
- (char)tallPopup;
- (float)roundRectRadius;
- (void)setDetachedVariants:(char)arg0;
- (void)setTallPopup:(char)arg0;
- (void)overlayWithGeometry:(NSObject *)arg0;
- (void)applyShadowInsets:(struct UIEdgeInsets)arg0;
- (id)iPhoneVariantGeometries:(unsigned int)arg0;
- (id)iPadVariantGeometries:(unsigned int)arg0 rowLimit:(int)arg1;
- (id)similarShape;
- (struct UIEdgeInsets)paddedInsets;
- (unsigned int)adjustForTranslucentGapsWithSize:(struct CGSize)arg0 inFrame:(struct CGRect)arg1;

@end
