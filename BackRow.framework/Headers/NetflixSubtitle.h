/* Runtime dump - NetflixSubtitle
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface NetflixSubtitle : NSObject
{
    float startTime_;
    float endTime_;
    NSString * text_;
}

@property (nonatomic) float startTime;
@property (nonatomic) float endTime;
@property (copy, nonatomic) NSString * text;

- (NetflixSubtitle *)initWithText:(NSString *)arg0 startTime:(float)arg1 endTime:(float)arg2;
- (void)setEndTime:(float)arg0;
- (NSString *)description;
- (void)setStartTime:(float)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void).cxx_destruct;
- (float)startTime;
- (float)endTime;

@end
