/* Runtime dump - MPWeighterConstraint
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPWeighterConstraint : NSObject
{
    int numOfImages;
    NSDictionary * nextConstraints;
    NSString * presetID;
    int movieCount;
    char moviesOnly;
    char ignoreMovies;
    int wideLandscape;
    int square;
    int landscape;
    int portrait;
    int hBreaks;
    int vBreaks;
    int supportsHBreaks;
    int supportsVBreaks;
    int supportsAllBreaks;
    int allBreaks;
    char hasBreak;
    NSArray * maxAspectRatios;
    NSArray * minAspectRatios;
    NSArray * tags;
    char tagsOnSourceOnly;
    char shelf;
}

@property (retain, nonatomic) NSDictionary * nextConstraints;
@property (retain, nonatomic) NSString * presetID;
@property (retain, nonatomic) NSArray * maxAspectRatios;
@property (retain, nonatomic) NSArray * minAspectRatios;
@property (retain, nonatomic) NSArray * tags;

- (void)dealloc;
- (MPWeighterConstraint *)init;
- (NSArray *)tags;
- (NSString *)presetID;
- (void)setPresetID:(NSString *)arg0;
- (void)setNextConstraints:(NSDictionary *)arg0;
- (void)setMaxAspectRatios:(NSArray *)arg0;
- (void)setMinAspectRatios:(NSArray *)arg0;
- (NSDictionary *)nextConstraints;
- (NSArray *)maxAspectRatios;
- (NSArray *)minAspectRatios;
- (void)setTags:(NSArray *)arg0;

@end
