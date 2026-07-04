/* Runtime dump - TSCH3DShaderHandle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderHandle : TSCH3DGLHandle
{
    unsigned int mType;
}

@property (readonly, nonatomic) unsigned int type;

+ (NSObject *)handleWithType:(unsigned int)arg0;

- (void)destroyResourcesInContext:(NSObject *)arg0;
- (TSCH3DShaderHandle *)initWithGLHandle:(unsigned int)arg0;
- (unsigned int)type;
- (TSCH3DShaderHandle *)initWithType:(unsigned int)arg0;

@end
