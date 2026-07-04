/* Runtime dump - ODDIteratorAttributes
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDIteratorAttributes : NSObject
{
    int mAxis;
    int mPointType;
    char mHideLastTransition;
    int mStart;
    unsigned int mCount;
    int mStep;
}

- (unsigned int)count;
- (int)axis;
- (void)setCount:(unsigned int)arg0;
- (int)start;
- (void)setStart:(int)arg0;
- (void)setAxis:(int)arg0;
- (int)step;
- (int)pointType;
- (char)hideLastTransition;
- (void)setPointType:(int)arg0;
- (void)setHideLastTransition:(char)arg0;
- (void)setStep:(int)arg0;

@end
