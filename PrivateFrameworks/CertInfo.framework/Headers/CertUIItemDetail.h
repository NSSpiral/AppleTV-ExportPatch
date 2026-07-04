/* Runtime dump - CertUIItemDetail
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertUIItemDetail : NSObject
{
    char _showCheckmarkView;
    char _showCheckmark;
    NSString * _detailTitle;
    NSString * _detail;
    UIColor * _detailHighlightColor;
    NSString * _checkmarkText;
    UIColor * _checkmarkHighlightColor;
}

@property (retain, nonatomic) NSString * detailTitle;
@property (retain, nonatomic) NSString * detail;
@property (retain, nonatomic) UIColor * detailHighlightColor;
@property (nonatomic) char showCheckmarkView;
@property (retain, nonatomic) NSString * checkmarkText;
@property (retain, nonatomic) UIColor * checkmarkHighlightColor;
@property (nonatomic) char showCheckmark;

+ (NSString *)itemDetailWithDetailTitle:(NSString *)arg0 detail:(NSString *)arg1;
+ (NSString *)itemDetailWithDetailTitle:(NSString *)arg0 detail:(NSString *)arg1 detailHighlightColor:(UIColor *)arg2;
+ (NSString *)itemDetailWithDetailTitle:(NSString *)arg0 detail:(NSString *)arg1 detailHighlightColor:(UIColor *)arg2 showCheckmarkView:(char)arg3 checkmarkText:(NSString *)arg4 checkmarkHighlightColor:(UIColor *)arg5 showCheckmark:(char)arg6;

- (void)setDetail:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)detailTitle;
- (UIColor *)detailHighlightColor;
- (char)showCheckmarkView;
- (NSString *)checkmarkText;
- (UIColor *)checkmarkHighlightColor;
- (char)showCheckmark;
- (CertUIItemDetail *)initWithDetailTitle:(NSString *)arg0 detail:(NSString *)arg1 detailHighlightColor:(UIColor *)arg2 showCheckmarkView:(char)arg3 checkmarkText:(NSString *)arg4 checkmarkHighlightColor:(UIColor *)arg5 showCheckmark:(char)arg6;
- (void)setDetailHighlightColor:(UIColor *)arg0;
- (void)setShowCheckmarkView:(char)arg0;
- (void)setCheckmarkText:(NSString *)arg0;
- (void)setCheckmarkHighlightColor:(UIColor *)arg0;
- (void)setShowCheckmark:(char)arg0;
- (void)setDetailTitle:(NSString *)arg0;
- (NSString *)detail;

@end
