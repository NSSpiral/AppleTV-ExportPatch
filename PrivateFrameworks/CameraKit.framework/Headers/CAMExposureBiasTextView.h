/* Runtime dump - CAMExposureBiasTextView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMExposureBiasTextView : CAMBadgeTextView
{
    float _exposureBias;
    NSString * __lastText;
}

@property (nonatomic) float exposureBias;
@property (retain, nonatomic) NSString * _lastText;

- (NSString *)_text;
- (void).cxx_destruct;
- (struct CGSize)_textSize;
- (NSDictionary *)_textAttributes;
- (id)_textForExposureBias:(float)arg0;
- (void)setExposureBias:(float)arg0;
- (float)_textHorizontalInset;
- (float)_textHorizontalKerningOffset;
- (float)_textVerticalInset;
- (float)exposureBias;
- (NSString *)_lastText;
- (void)set_lastText:(NSString *)arg0;

@end
