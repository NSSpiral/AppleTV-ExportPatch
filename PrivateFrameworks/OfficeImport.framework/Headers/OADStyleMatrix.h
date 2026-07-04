/* Runtime dump - OADStyleMatrix
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADStyleMatrix : NSObject
{
    NSMutableArray * mFills;
    NSMutableArray * mStrokes;
    NSMutableArray * mEffects;
    NSMutableArray * mBgFills;
}

+ (NSArray *)objectInArray:(NSArray *)arg0 withPossiblyOutOfRangeIndex:(unsigned int)arg1 defaultValue:(NSString *)arg2;

- (void)dealloc;
- (OADStyleMatrix *)init;
- (NSObject *)bgFillAtIndex:(unsigned int)arg0;
- (void)addFill:(id)arg0;
- (void)addStroke:(OABStroke *)arg0;
- (void)addEffects:(CUIPSDLayerEffects *)arg0;
- (void)addBgFill:(id)arg0;
- (NSObject *)strokeAtIndex:(unsigned int)arg0;
- (NSObject *)fillAtIndex:(unsigned int)arg0;
- (NSObject *)effectsAtIndex:(unsigned int)arg0;
- (unsigned int)fillCount;
- (NSObject *)fillAtIndex:(unsigned int)arg0 color:(UIColor *)arg1;
- (unsigned int)strokeCount;
- (NSObject *)strokeAtIndex:(unsigned int)arg0 color:(UIColor *)arg1;
- (unsigned int)effectsCount;
- (NSObject *)effectsAtIndex:(unsigned int)arg0 color:(UIColor *)arg1;
- (unsigned int)bgFillCount;
- (void)populateWithOfficeDefaults;

@end
