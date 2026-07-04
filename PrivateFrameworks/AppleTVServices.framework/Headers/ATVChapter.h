/* Runtime dump - ATVChapter
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVChapter : NSObject
{
    ATVTimeRange * _timeRange;
    ATVImageProxy * _imageProxy;
    NSString * _localizedName;
    NSString * _chapterDescription;
    ATVDateRange * _dateRange;
}

@property (copy, nonatomic) NSString * localizedName;
@property (copy, nonatomic) NSString * chapterDescription;
@property (retain, nonatomic) ATVTimeRange * timeRange;
@property (retain, nonatomic) ATVDateRange * dateRange;
@property (retain, nonatomic) ATVImageProxy * imageProxy;

- (NSString *)localizedName;
- (void).cxx_destruct;
- (void)setLocalizedName:(NSString *)arg0;
- (ATVDateRange *)dateRange;
- (NSString *)chapterDescription;
- (void)setChapterDescription:(NSString *)arg0;
- (void)setDateRange:(ATVDateRange *)arg0;
- (ATVImageProxy *)imageProxy;
- (void)setImageProxy:(ATVImageProxy *)arg0;
- (ATVTimeRange *)timeRange;
- (void)setTimeRange:(ATVTimeRange *)arg0;

@end
