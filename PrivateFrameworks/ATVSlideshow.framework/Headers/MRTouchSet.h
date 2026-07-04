/* Runtime dump - MRTouchSet
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTouchSet : NSObject
{
    NSMutableSet * _touches;
    NSMutableDictionary * _touchesForUITouches;
}

@property (readonly) NSSet * touches;
@property (readonly) struct CGPoint centroid;
@property (readonly) float scale;
@property (readonly) float rotation;
@property (readonly) char isActive;

- (void)dealloc;
- (NSString *)description;
- (char)isActive;
- (float)scale;
- (float)rotation;
- (struct CGPoint)centroid;
- (NSSet *)touches;
- (MRTouchSet *)initWithTouch:(UITouch *)arg0;
- (void)addTouch:(UITouch *)arg0;
- (void)removeTouch:(UITouch *)arg0;
- (void)removeAllTouches;
- (MRTouchSet *)initWithTouches:(NSSet *)arg0;
- (void)cancelAllTouches;
- (MRTouchSet *)initWithUITouches:(NSArray *)arg0 inView:(struct CGSize)arg1;
- (void)updateWithUITouches:(NSArray *)arg0 inView:(struct CGSize)arg1;

@end
