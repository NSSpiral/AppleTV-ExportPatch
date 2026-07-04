/* Runtime dump - ATVFlagstaffPreviewImageOverLay
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface ATVFlagstaffPreviewImageOverLay : BRControl
{
    NSString * _text1;
    NSString * _text2;
    NSString * _text3;
}

@property (copy, nonatomic) NSString * text1;
@property (copy, nonatomic) NSString * text2;
@property (copy, nonatomic) NSString * text3;

- (void)setText1:(NSString *)arg0;
- (void)setText2:(NSString *)arg0;
- (void)setText3:(NSString *)arg0;
- (NSString *)text1;
- (NSString *)text2;
- (NSString *)text3;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (ATVFlagstaffPreviewImageOverLay *)init;

@end
