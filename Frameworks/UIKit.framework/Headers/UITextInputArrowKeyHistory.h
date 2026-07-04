/* Runtime dump - UITextInputArrowKeyHistory
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextInputArrowKeyHistory : NSObject
{
    UITextPosition * startPosition;
    int amount;
    int anchor;
    UITextPosition * start;
    UITextPosition * end;
    UITextPosition * cursor;
    char affinityDownstream;
}

@property (retain, nonatomic) UITextPosition * startPosition;
@property (nonatomic) int anchor;
@property (retain, nonatomic) UITextPosition * start;
@property (retain, nonatomic) UITextPosition * end;
@property (retain, nonatomic) UITextPosition * cursor;
@property (nonatomic) char affinityDownstream;
@property (nonatomic) int amount;

- (void)dealloc;
- (UITextPosition *)startPosition;
- (UITextPosition *)start;
- (UITextPosition *)end;
- (void)setStart:(UITextPosition *)arg0;
- (void)setEnd:(UITextPosition *)arg0;
- (void)setStartPosition:(UITextPosition *)arg0;
- (UITextPosition *)cursor;
- (int)anchor;
- (void)setAnchor:(int)arg0;
- (char)affinityDownstream;
- (void)setCursor:(UITextPosition *)arg0;
- (void)setAffinityDownstream:(char)arg0;
- (void)setAmount:(int)arg0;
- (int)amount;

@end
