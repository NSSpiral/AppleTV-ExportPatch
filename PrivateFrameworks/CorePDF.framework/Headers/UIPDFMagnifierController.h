/* Runtime dump - UIPDFMagnifierController
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFMagnifierController : NSObject
{
    UIWindow * _textEffectsWindow;
    UIView * _textEffectsSubView;
    CALayer * _loLayer;
    CALayer * _hiLayer;
    CALayer * _imageContainer;
    CALayer * _imageLayer;
    CAShapeLayer * _selectionLayer;
    CALayer * _maskLayer;
    float _power;
    struct CGSize _magnifierSize;
    char _loupe;
    struct CGPoint _touchPoint;
    struct CGPoint _pointToMagnify;
    float _enlargementScale;
    CALayer * _leftBar;
    CALayer * _leftGrabber;
    CALayer * _rightBar;
    CALayer * _rightGrabber;
    struct CGSize _controlPointSize;
    struct CGColor * _grabberColor;
    unsigned int _pageRotation;
    char _visible;
    UIPDFPageView * pageView;
}

@property (nonatomic) UIPDFPageView * pageView;

- (void)hide;
- (void)dealloc;
- (UIPDFMagnifierController *)init;
- (void)drawLayer:(CALayer *)arg0 inContext:(struct CGContext *)arg1;
- (char)visible;
- (UIPDFPageView *)pageView;
- (void)setPageView:(UIPDFPageView *)arg0;
- (void)setPosition:(struct CGPoint)arg0 viewPoint:(struct CGPoint)arg1;
- (void)showMagnifier;
- (void)move;
- (void)showLoupe;
- (void)tearDownLayers;
- (void)placeImage;
- (void)setImageContainerMask;
- (void)_show;
- (void)setImageContainerPositionLoupe;
- (void)setImageContainerPositionMagnifier;
- (void)setTextRangeHandlePositions;
- (void)setSelectionPath;
- (void)setLayerPositions;
- (struct CGRect)convertRectToRotatedPage:(id)arg0;
- (struct CGPoint)convertPointToRotatedPage:(struct CGPoint)arg0;
- (struct CGPoint)viewPointInTextEffectsSpace;
- (struct CGPoint)pointToMagnifyInPDFSpace;
- (struct CGPoint)convertPointToEnlargedSpace:(struct CGPoint)arg0;
- (struct CGRect)convertRectToEnlargedSpace:(NSObject *)arg0;
- (void)setSelectionPath:(struct CGPath *)arg0 bounds:(struct CGRect)arg1 transform:(struct CGSize)arg2;
- (void)setPower;
- (id)imageReceived:(id)arg0 data:(NSData *)arg1;
- (void)addBling;
- (void)addTextRangeHandles;
- (char)isSelectionUniformlyRotated:(float *)arg0;
- (struct CGPoint)convertViewPointToEnlargedSpace:(struct CGPoint)arg0;

@end
