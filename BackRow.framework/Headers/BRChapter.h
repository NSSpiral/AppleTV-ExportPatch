/* Runtime dump - BRChapter
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRChapter : NSObject
{
    NSString * _name;
    NSString * _description;
    NSString * _identifier;
    NSDate * _startDate;
    NSDate * _endDate;
    <BRImageProxy> * _imageProxy;
    double _startTime;
    double _endTime;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * description;
@property (retain, nonatomic) NSString * identifier;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSDate * startDate;
@property (retain, nonatomic) NSDate * endDate;
@property (retain, nonatomic) <BRImageProxy> * imageProxy;

+ (BRChapter *)chapterWithAssetID:(NSString *)arg0 startTime:(double)arg1 endTime:(double)arg2;
+ (BRChapter *)chapterWithAssetID:(NSString *)arg0 startDate:(NSDate *)arg1 endDate:(NSDate *)arg2;

- (BRChapter *)initWithAssetID:(NSString *)arg0 startTime:(double)arg1 endTime:(double)arg2;
- (BRChapter *)initWithAssetID:(NSString *)arg0 startDate:(NSDate *)arg1 endDate:(NSDate *)arg2;
- (void)setDescription:(NSString *)arg0;
- (void)setEndTime:(double)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)invalidate;
- (void)setStartTime:(double)arg0;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (double)startTime;
- (char)containsTime:(double)arg0;
- (char)containsDate:(NSDate *)arg0;
- (<BRImageProxy> *)imageProxy;
- (void)setImageProxy:(<BRImageProxy> *)arg0;
- (void)setStartDate:(NSDate *)arg0;
- (void)setEndDate:(NSDate *)arg0;
- (double)endTime;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
