/* Runtime dump - ABAdjusterRecord
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABAdjusterRecord : NSObject
{
    UIScrollView * _scrollView;
    float _adjustment;
    char _manuallyAdjusted;
    NSTimer * _delayedScrollTimer;
}

@property (retain, nonatomic) UIScrollView * scrollView;
@property (nonatomic) float adjustment;
@property (nonatomic) char manuallyAdjusted;
@property (retain, nonatomic) NSTimer * delayedScrollTimer;

+ (NSObject *)recordWithScrollView:(UIScrollView *)arg0;

- (void)setDelayedScrollTimer:(NSTimer *)arg0;
- (NSTimer *)delayedScrollTimer;
- (float)adjustment;
- (void)setAdjustment:(float)arg0;
- (void)setManuallyAdjusted:(char)arg0;
- (void)cancelDelayedAdjustments;
- (char)manuallyAdjusted;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setScrollView:(UIScrollView *)arg0;
- (UIScrollView *)scrollView;
- (void)_adjustTableForKeyboardInfo:(NSDictionary *)arg0;

@end
