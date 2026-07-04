/* Runtime dump - MTLDebugLibrary
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugLibrary : MTLToolsLibrary
{
    unsigned int _type;
    id _code;
    MTLCompileOptions * _compileOptions;
}

@property (nonatomic) unsigned int type;
@property (copy, nonatomic) id code;
@property (copy, nonatomic) MTLCompileOptions * compileOptions;

- (MTLDebugLibrary *)initWithLibrary:(ML3MusicLibrary *)arg0 parent:(NSObject *)arg1 type:(unsigned int)arg2 code:(id)arg3 options:(NSDictionary *)arg4;
- (MTLCompileOptions *)compileOptions;
- (void)setCompileOptions:(MTLCompileOptions *)arg0;
- (NSString *)newFunctionWithName:(NSString *)arg0;
- (void)setType:(unsigned int)arg0;
- (unsigned int)type;
- (NSString *)code;
- (void).cxx_destruct;
- (void)setCode:(NSString *)arg0;

@end
