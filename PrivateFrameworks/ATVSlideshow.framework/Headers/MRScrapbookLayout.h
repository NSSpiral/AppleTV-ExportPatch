/* Runtime dump - MRScrapbookLayout
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRScrapbookLayout : NSObject
{
    struct CGRect rect;
    NSString * frame;
    NSString * mask;
    float zRotation;
    NSArray * subtract;
    double startTime;
    int slideIndex;
    float aspectRatio;
    char stretch;
    char isText;
    char isBreak;
    NSString * backgroundPaper;
    char twoPart;
    char move;
    struct CGRect paperRect;
    int drawCardIndex;
    char skip;
    int moveIndex;
}

@property (retain, nonatomic) NSString * frame;
@property (retain, nonatomic) NSString * mask;
@property (retain, nonatomic) NSString * backgroundPaper;
@property (retain, nonatomic) NSArray * subtract;

- (void)dealloc;
- (void)setFrame:(NSString *)arg0;
- (NSString *)frame;
- (NSString *)mask;
- (void)setMask:(NSString *)arg0;
- (NSArray *)subtract;
- (void)setSubtract:(NSArray *)arg0;
- (NSString *)backgroundPaper;
- (void)setBackgroundPaper:(NSString *)arg0;

@end
