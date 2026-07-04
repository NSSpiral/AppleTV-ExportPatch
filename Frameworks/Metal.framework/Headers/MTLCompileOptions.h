/* Runtime dump - MTLCompileOptions
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCompileOptions : NSObject <NSCopying>
{
    char _fastMathEnabled;
    char _debuggingEnabled;
    NSDictionary * _preprocessorMacros;
}

@property (copy, nonatomic) NSDictionary * preprocessorMacros;
@property (nonatomic) char fastMathEnabled;
@property (nonatomic) char debuggingEnabled;

- (NSDictionary *)preprocessorMacros;
- (void)setPreprocessorMacros:(NSDictionary *)arg0;
- (char)fastMathEnabled;
- (void)setFastMathEnabled:(char)arg0;
- (char)debuggingEnabled;
- (void)setDebuggingEnabled:(char)arg0;
- (void)dealloc;
- (MTLCompileOptions *)init;
- (NSString *)description;
- (MTLCompileOptions *)copyWithZone:(struct _NSZone *)arg0;

@end
