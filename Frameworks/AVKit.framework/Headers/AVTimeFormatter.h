/* Runtime dump - AVTimeFormatter
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVTimeFormatter : NSFormatter
{
    int _style;
    id _fullWidth;
    double _formatTemplate;
}

@property int style;
@property double formatTemplate;
@property char fullWidth;

- (double)formatTemplate;
- (char)isFullWidth;
- (void)setFormatTemplate:(double)arg0;
- (void)setFullWidth:(char)arg0;
- (NSString *)stringFromTimeInterval:(double)arg0;
- (AVTimeFormatter *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (AVTimeFormatter *)init;
- (AVTimeFormatter *)copyWithZone:(struct _NSZone *)arg0;
- (int)style;
- (void)setStyle:(int)arg0;
- (NSString *)stringForObjectValue:(id)arg0;

@end
