/* Runtime dump - PTLegibleTextAssistantSettings
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTLegibleTextAssistantSettings : _UISettings
{
    char _drawingShadowDrawsText;
    NSArray * _shadowRadii;
    NSArray * _shadowAlphas;
    NSString * _shadowCompositingFilterName;
    UIColor * _foregroundColor;
    struct ? _imageStatistics;
}

@property (copy, nonatomic) NSArray * shadowRadii;
@property (copy, nonatomic) NSArray * shadowAlphas;
@property (copy, nonatomic) NSString * shadowCompositingFilterName;
@property (nonatomic) char drawingShadowDrawsText;
@property (retain, nonatomic) UIColor * foregroundColor;
@property (nonatomic) struct ? imageStatistics;

+ (NSObject *)settingsWithImageStatistics:(struct ?)arg0;

- (void)setDefaultValues;
- (UIColor *)foregroundColor;
- (void)setForegroundColor:(UIColor *)arg0;
- (void).cxx_destruct;
- (void)setShadowCompositingFilterName:(NSString *)arg0;
- (NSString *)shadowCompositingFilterName;
- (void)setImageStatistics:(struct ?)arg0;
- (NSArray *)shadowRadii;
- (char)drawingShadowDrawsText;
- (NSArray *)shadowAlphas;
- (struct ?)imageStatistics;
- (void)setShadowRadii:(NSArray *)arg0;
- (void)setShadowAlphas:(NSArray *)arg0;
- (void)setDrawingShadowDrawsText:(char)arg0;
- (NSObject *)calculateForegroundColorWithImageStatistics:(struct ?)arg0;

@end
