/* Runtime dump - CalLogFilter
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogFilter : NSObject
{
    int _minimumLevel;
    NSArray * _includes;
    NSArray * _excludes;
    NSArray * _includesAsRegexes;
    NSArray * _excludesAsRegexes;
    NSSet * _includesRegardlessOfLevel;
}

@property (nonatomic) int minimumLevel;
@property (copy, nonatomic) NSArray * includes;
@property (copy, nonatomic) NSArray * excludes;
@property (copy, nonatomic) NSSet * includesRegardlessOfLevel;
@property (retain, nonatomic) NSArray * includesAsRegexes;
@property (retain, nonatomic) NSArray * excludesAsRegexes;

- (CalLogFilter *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (void)setMinimumLevel:(int)arg0;
- (void)setIncludes:(NSArray *)arg0;
- (void)setExcludes:(NSArray *)arg0;
- (NSArray *)includes;
- (NSArray *)excludes;
- (NSArray *)includesAsRegexes;
- (NSSet *)includesRegardlessOfLevel;
- (int)minimumLevel;
- (id)generateRegexesForPatterns:(id)arg0;
- (void)setIncludesAsRegexes:(NSArray *)arg0;
- (void)setExcludesAsRegexes:(NSArray *)arg0;
- (char)proceedProcessingEnvelope:(id)arg0;
- (NSArray *)excludesAsRegexes;
- (void)setIncludesRegardlessOfLevel:(NSSet *)arg0;

@end
