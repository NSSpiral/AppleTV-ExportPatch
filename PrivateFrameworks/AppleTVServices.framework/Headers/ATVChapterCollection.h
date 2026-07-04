/* Runtime dump - ATVChapterCollection
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVChapterCollection : NSObject
{
    NSString * _name;
    NSArray * _chapters;
    int _type;
}

@property (copy, nonatomic) NSString * name;
@property (retain, nonatomic) NSArray * chapters;
@property (nonatomic) int type;

- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setType:(int)arg0;
- (int)type;
- (void).cxx_destruct;
- (id)chapterForTime:(double)arg0;
- (id)nearestChapterForTime:(double)arg0;
- (NSDate *)nearestChapterForDate:(NSDate *)arg0;
- (NSArray *)chapters;
- (void)setChapters:(NSArray *)arg0;

@end
