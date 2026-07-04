/* Runtime dump - UIMovieClosedCaptionData
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface UIMovieClosedCaptionData : NSObject
{
    NSString * _language;
    NSMutableArray * _data;
}

@property (retain, nonatomic) NSString * language;

- (id)timeMarkers;
- (void)addCaptionText:(NSString *)arg0 startTime:(double)arg1 endTime:(double)arg2;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)language;
- (void)setLanguage:(NSString *)arg0;

@end
