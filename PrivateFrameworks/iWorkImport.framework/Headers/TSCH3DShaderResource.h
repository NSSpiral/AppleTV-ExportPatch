/* Runtime dump - TSCH3DShaderResource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderResource : TSCH3DResource
{
    TSCH3DShaderProgram * mProgram;
}

@property (readonly, nonatomic) TSCH3DShaderProgram * program;

+ (struct pair<TSCH3D::IteratorRange<const char *>, TSCH3D::IteratorRange<const char *> >)stringsFromBuffer:(NSObject *)arg0;

- (TSCH3DShaderResource *)initWithCaching:(int)arg0;
- (struct IteratorRange<const char *>)resourceStringOfString:(SEL)arg0;
- (void)appendShaderResourceString:(struct IteratorRange<const char *>)arg0 toDataBuffer:(NSObject *)arg1;
- (TSCH3DShaderResource *)initWithCaching:(int)arg0 version:(NSString *)arg1;
- (TSCH3DShaderProgram *)program;
- (void)dealloc;
- (NSObject *)get;

@end
