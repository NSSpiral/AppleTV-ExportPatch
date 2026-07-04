/* Runtime dump - MRPanZoomRotationGestureRecognizer
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRPanZoomRotationGestureRecognizer : MRGestureRecognizer
{
    NSString * _type;
    float _factor;
    int _direction;
    char _isMaster;
}

@property (readonly) int direction;

- (void)dealloc;
- (int)direction;
- (void)touchMoved:(id)arg0;
- (void)_addSpecificObjectToAction:(NSObject *)arg0;
- (void)touchEnded:(id)arg0;
- (void)_postProcess;
- (MRPanZoomRotationGestureRecognizer *)initWithRenderer:(NSObject *)arg0 startAction:(NSObject *)arg1 direction:(int)arg2 andSender:(NSObject *)arg3;
- (MRPanZoomRotationGestureRecognizer *)initWithRenderer:(NSObject *)arg0 masterAction:(NSObject *)arg1 direction:(int)arg2 andSender:(NSObject *)arg3;

@end
