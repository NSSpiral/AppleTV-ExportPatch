/* Runtime dump - ADTapGestureRecognizer
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADTapGestureRecognizer : UIGestureRecognizer
{
    int _finalTrackingID;
    id _touchDownHandler;
    id _touchMovedHandler;
    id _touchUpHandler;
}

@property (nonatomic) int finalTrackingID;
@property (copy, nonatomic) id touchDownHandler;
@property (copy, nonatomic) id touchMovedHandler;
@property (copy, nonatomic) id touchUpHandler;

- (void)dealloc;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)reset;
- (int)finalTrackingID;
- (void)setFinalTrackingID:(int)arg0;
- (id /* block */)touchDownHandler;
- (void)setTouchDownHandler:(id /* block */)arg0;
- (id /* block */)touchMovedHandler;
- (void)setTouchMovedHandler:(id /* block */)arg0;
- (id /* block */)touchUpHandler;
- (void)setTouchUpHandler:(id /* block */)arg0;

@end
