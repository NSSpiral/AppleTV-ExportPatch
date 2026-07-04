/* Runtime dump - SKStarRatingAlertView
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStarRatingAlertView : UIAlertView
{
    SKStarRatingControl * _ratingControl;
}

@property (nonatomic) float rating;

- (SKStarRatingAlertView *)initSKStarRatingAlertView;
- (void)showWithCompletionBlock:(id /* block */)arg0;
- (void)_ratingControlChanged:(NSNotification *)arg0;
- (void)dealloc;
- (float)rating;
- (void)setRating:(float)arg0;

@end
