/* Runtime dump - UICalloutBarButton
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICalloutBarButton : UIButton
{
    SEL m_action;
    int m_position;
    int m_type;
    UITextReplacement * m_textReplacement;
    float m_contentWidth;
    float m_contentScale;
    float m_additionalContentHeight;
    float m_dividerOffset;
    float m_imageVerticalAdjust;
    int m_page;
    char m_isText;
    char m_configured;
    char m_single;
    char m_padLeft;
    char m_padRight;
    char m_dontDismiss;
    char forceFlash;
}

@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) float contentWidth;
@property (readonly, nonatomic) float contentScale;
@property (readonly, nonatomic) float additionalContentHeight;
@property (readonly, nonatomic) int type;
@property (nonatomic) char forceFlash;
@property (nonatomic) int page;
@property (nonatomic) float dividerOffset;
@property (nonatomic) float imageVerticalAdjust;
@property (nonatomic) char dontDismiss;
@property (retain, nonatomic) UITextReplacement * textReplacement;

+ (NSString *)buttonWithTitle:(NSString *)arg0 subtitle:(NSString *)arg1 maxWidth:(float)arg2 action:(SEL)arg3 type:(int)arg4 inView:(struct CGSize)arg5;
+ (NSString *)buttonWithTitle:(NSString *)arg0 action:(SEL)arg1 type:(int)arg2 inView:(struct CGSize)arg3;
+ (UIImage *)buttonWithImage:(UIImage *)arg0 action:(SEL)arg1 type:(int)arg2 inView:(struct CGSize)arg3;

- (void)dealloc;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (int)type;
- (SEL)action;
- (void)setHighlighted:(char)arg0;
- (struct CGRect)titleRectForContentRect:(NSObject *)arg0;
- (void)setDontDismiss:(char)arg0;
- (struct CGRect)imageRectForContentRect:(NSObject *)arg0;
- (float)contentWidth;
- (void)setupWithTitle:(NSString *)arg0 subtitle:(NSString *)arg1 maxWidth:(float)arg2 action:(SEL)arg3 type:(int)arg4;
- (void)setupWithTitle:(NSString *)arg0 action:(SEL)arg1 type:(int)arg2;
- (void)setupWithImage:(UIImage *)arg0 action:(SEL)arg1 type:(int)arg2;
- (void)flash;
- (void)_commonSetupWithAction:(SEL)arg0 type:(int)arg1;
- (void)cancelFlash;
- (void)configureLabel;
- (struct CGRect)adjustRectForPosition:(NSObject *)arg0 scaleRect:(SEL)arg1;
- (char)forceFlash;
- (void)setForceFlash:(char)arg0;
- (void)fadeAndSendAction;
- (void)configureForSingle:(int)arg0;
- (void)configureForLeftPosition:(int)arg0;
- (void)configureForMiddlePosition;
- (void)configureForRightPosition:(int)arg0;
- (void)setContentScale:(float)arg0;
- (float)contentScale;
- (float)additionalContentHeight;
- (UITextReplacement *)textReplacement;
- (void)setTextReplacement:(UITextReplacement *)arg0;
- (int)page;
- (void)setPage:(int)arg0;
- (float)dividerOffset;
- (void)setDividerOffset:(float)arg0;
- (float)imageVerticalAdjust;
- (void)setImageVerticalAdjust:(float)arg0;
- (char)dontDismiss;

@end
