/* Runtime dump - TSDSmartStroke
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSmartStroke : TSDStroke
{
    NSString * mStrokeName;
}

@property (copy, nonatomic) NSString * strokeName;

+ (NSString *)strokeWithName:(NSString *)arg0 color:(UIColor *)arg1 width:(float)arg2;
+ (Class)classForName:(NSString *)arg0;

- (void)saveToArchive:(struct StrokeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDSmartStroke *)initWithArchive:(struct StrokeArchive *)arg0 unarchiver:(struct StrokeArchive)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSDSmartStroke *)initWithColor:(UIColor *)arg0 width:(float)arg1 cap:(int)arg2 join:(int)arg3 pattern:(TSDStrokePattern *)arg4 miterLimit:(float)arg5;
- (NSString *)strokeName;
- (char)canApplyDirectlyToRepCALayer;
- (char)shouldAntialiasDefeat;
- (TSDSmartStroke *)initWithName:(NSString *)arg0 color:(UIColor *)arg1 width:(float)arg2 cap:(int)arg3 join:(int)arg4 pattern:(TSDStrokePattern *)arg5 miterLimit:(float)arg6;
- (void)setStrokeName:(NSString *)arg0;
- (TSDSmartStroke *)initWithName:(NSString *)arg0 color:(UIColor *)arg1 width:(float)arg2 cap:(int)arg3 join:(int)arg4 pattern:(TSDStrokePattern *)arg5;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSDSmartStroke *)copyWithZone:(struct _NSZone *)arg0;
- (TSDSmartStroke *)mutableCopyWithZone:(struct _NSZone *)arg0;

@end
