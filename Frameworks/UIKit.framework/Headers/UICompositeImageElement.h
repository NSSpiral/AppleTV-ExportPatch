/* Runtime dump - UICompositeImageElement
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICompositeImageElement : NSObject
{
    UIImage * m_image;
    struct CGRect m_fromRect;
    struct CGRect m_toRect;
    int m_operation;
    float m_fraction;
}

+ (UIImage *)elementWithImage:(UIImage *)arg0 toRect:(struct CGRect)arg1 fromRect:(struct CGSize)arg2 operation:(ISURLOperation *)arg3 fraction:(struct CGRect)arg4;

- (void)dealloc;
- (UICompositeImageElement *)initWithImage:(UIImage *)arg0 toRect:(struct CGRect)arg1 fromRect:(struct CGSize)arg2 operation:(ISURLOperation *)arg3 fraction:(struct CGRect)arg4;
- (void)draw;

@end
