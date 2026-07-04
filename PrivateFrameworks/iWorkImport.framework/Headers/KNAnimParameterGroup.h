/* Runtime dump - KNAnimParameterGroup
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimParameterGroup : NSObject
{
    NSMutableDictionary * _parametersDict;
    NSString * _fileName;
    NSString * _originalFileName;
    NSString * _name;
    NSArray * _parameterArray;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSArray * parameterArray;

+ (NSString *)mediaTimingFunctionForPath:(NSString *)arg0 reversed:(char)arg1;
+ (NSString *)parameterGroupForFile:(NSString *)arg0;
+ (NSString *)linearPath;
+ (NSString *)easeInEaseOutPath;
+ (NSString *)easeInPath;
+ (NSString *)easeOutPath;

- (KNAnimParameterGroup *)initWithFileName:(NSString *)arg0;
- (id)mediaTimingFunctionForAnimationCurve:(id)arg0 reversed:(char)arg1;
- (void)readAnimationCurvesFromFile;
- (float)valueForConstant:(id)arg0;
- (float)valueForAnimationCurve:(id)arg0 atPercent:(float)arg1;
- (id)pathForAnimationCurve:(id)arg0;
- (id)mediaTimingFunctionForAnimationCurve:(id)arg0;
- (void)resetAnimationCurvesFromBundle;
- (void)writeAnimationCurvesToFile;
- (NSArray *)parameterArray;
- (void)dealloc;
- (NSString *)name;

@end
