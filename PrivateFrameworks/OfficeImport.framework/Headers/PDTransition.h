/* Runtime dump - PDTransition
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDTransition : OADProperties
{
    char mHasType;
    int mType;
    char mHasSpeed;
    int mSpeed;
    char mHasAdvanceOnClick;
    char mIsAdvanceOnClick;
    char mHasAdvanceAfterTime;
    int mAdvanceAfterTime;
    PDTransitionOptions * mOptions;
}

- (void)dealloc;
- (PDTransition *)init;
- (void)setSpeed:(int)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (int)speed;
- (void)setOptions:(NSDictionary *)arg0;
- (NSDictionary *)options;
- (char)hasSpeed;
- (char)hasType;
- (char)hasIsAdvanceOnClick;
- (char)hasAdvanceAfterTime;
- (char)hasTransitionOptions;
- (char)isAdvanceOnClick;
- (void)setIsAdvanceOnClick:(char)arg0;
- (int)advanceAfterTime;
- (void)setAdvanceAfterTime:(int)arg0;

@end
