/* Runtime dump - TSDStrokePattern
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing>
{
    id mPattern;
    unsigned int mCount;
    float mPhase;
    int mType;
}

@property (readonly, nonatomic) int patternType;
@property (readonly, nonatomic) float * pattern;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) float phase;
@property (readonly, nonatomic) char isDash;
@property (readonly, nonatomic) char isRoundDash;

+ (NSObject *)solidPattern;
+ (NSObject *)strokePatternWithPattern:(float *)arg0 count:(float)arg1 phase:(unsigned int)arg2;
+ (NSObject *)emptyPattern;
+ (NSObject *)shortDashPattern;
+ (NSObject *)mediumDashPattern;
+ (NSObject *)longDashPattern;
+ (NSObject *)roundDashPattern;
+ (TSDStrokePattern *)roundDashPatternWithSpacing:(float)arg0;
+ (TSDStrokePattern *)dashPatternWithSpacing:(float)arg0;

- (void)saveToArchive:(struct StrokePatternArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDStrokePattern *)initWithArchive:(struct StrokePatternArchive *)arg0 unarchiver:(struct StrokePatternArchive)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (int)patternType;
- (char)isRoundDash;
- (NSObject *)p_initWithType:(int)arg0 pattern:(float *)arg1 count:(float)arg2 phase:(unsigned int)arg3;
- (TSDStrokePattern *)initWithPattern:(float *)arg0 count:(float)arg1 phase:(unsigned int)arg2;
- (void)i_applyToContext:(struct CGContext *)arg0 lineWidth:(float)arg1 capStyle:(unsigned int *)arg2;
- (void)p_applyToCAShapeLayer:(id)arg0 lineWidth:(float)arg1;
- (char)isDash;
- (void)applyToContext:(struct CGContext *)arg0 lineWidth:(float)arg1;
- (void)applyToCAShapeLayer:(id)arg0;
- (unsigned int)count;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (float)phase;
- (TSDStrokePattern *)copyWithZone:(struct _NSZone *)arg0;
- (float *)pattern;

@end
