/* Runtime dump - FBUIApplicationResignActiveAssertion
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationResignActiveAssertion : NSObject
{
    char _relinquished;
    FBSDisplay * _display;
    int _reason;
}

@property (retain, nonatomic) FBSDisplay * display;
@property (nonatomic) int reason;

- (void)dealloc;
- (NSString *)description;
- (FBSDisplay *)display;
- (int)reason;
- (void)relinquish;
- (FBUIApplicationResignActiveAssertion *)initWithReason:(int)arg0 forDisplay:(char)arg1;
- (void)setReason:(int)arg0;
- (void)setDisplay:(FBSDisplay *)arg0;

@end
