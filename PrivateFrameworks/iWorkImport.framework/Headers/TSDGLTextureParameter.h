/* Runtime dump - TSDGLTextureParameter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLTextureParameter : NSObject
{
    unsigned int _pname;
    unsigned int _paramCount;
    int * _intData;
    float * _floatData;
}

+ (NSString *)textureParameterWithPName:(unsigned int)arg0 integerParameter:(int)arg1;
+ (NSDictionary *)stringWithCurrentTextureParameters;
+ (NSString *)textureParameterWithPName:(unsigned int)arg0 integerParameters:(int *)arg1 count:(unsigned int)arg2;
+ (NSString *)textureParameterWithPName:(unsigned int)arg0 floatParameter:(float)arg1;
+ (NSString *)textureParameterWithPName:(unsigned int)arg0 floatParameters:(float *)arg1 count:(unsigned int)arg2;

- (TSDGLTextureParameter *)initWithPName:(unsigned int)arg0 paramCount:(unsigned int)arg1 intData:(int *)arg2 floatData:(float *)arg3;
- (void)setGLTextureParameter;
- (void)dealloc;

@end
