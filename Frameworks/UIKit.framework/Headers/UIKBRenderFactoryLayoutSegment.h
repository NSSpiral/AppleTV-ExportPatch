/* Runtime dump - UIKBRenderFactoryLayoutSegment
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactoryLayoutSegment : NSObject
{
    int _rectCount;
    id _rects;
    id _triangleCorners;
    int _edgeCount;
    id _edges;
    id _cachedKeyNames;
    char _requireAllMatches;
    UIKBRenderTraits * _traits;
    int _states;
}

@property (readonly, nonatomic) UIKBRenderTraits * traits;
@property (nonatomic) int keyStates;
@property (nonatomic) char requireAllMatches;

+ (NSArray *)segmentWithTraits:(UIKBRenderTraits *)arg0;

- (void)dealloc;
- (UIKBRenderTraits *)traits;
- (void)setKeyStates:(int)arg0;
- (void)addLayoutRect:(struct CGRect)arg0 asTriangle:(struct CGSize)arg1;
- (void)setRequireAllMatches:(char)arg0;
- (void)addRelativeLayoutRectFromEdge:(unsigned int)arg0 ofCachedKey:(NSString *)arg1;
- (UIKBRenderFactoryLayoutSegment *)initWithTraits:(UIKBRenderTraits *)arg0;
- (char)requireAllMatches;
- (char)containsPoint:(struct CGPoint)arg0 inRect:(struct CGRect)arg1 withKeyplane:(struct CGSize)arg2;
- (int)keyStates;

@end
